// Fill out your copyright notice in the Description page of Project Settings.


#include "USDLJoystick.h"
#include "USDL3Log.h"
#include <SDL3/SDL_joystick.h>
#include <SDL3/SDL.h>

#include "USDLJoystickButton.h"
#include "USDLJoystickAxis.h"


USDLJoystick::USDLJoystick()
{
}

void USDLJoystick::BeginPlay()
{
    Super::BeginPlay();
}

void USDLJoystick::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (Joystick)
    {
        Joystick = nullptr;
    }
    if (Haptic) {
        SDL_CloseHaptic(Haptic);
        
        SDL_StopHapticEffects(Haptic);
        if (CurrentRumbleEffectId != -1) SDL_DestroyHapticEffect(Haptic, CurrentRumbleEffectId);
        if (CurrentForceEffectId != -1) SDL_DestroyHapticEffect(Haptic, CurrentForceEffectId);
        
        Haptic = nullptr;
    }
    Super::EndPlay(EndPlayReason);
}

void USDLJoystick::InitializeJoystick(SDL_Joystick* Joystick_)
{
    Joystick = Joystick_;
}

void USDLJoystick::InitializeButtons(const int32 NumButtons)
{
    // Clear any existing buttons before re‑initializing
    Buttons.Empty();

    // Sanity check: don't allow negative or zero button counts
    if (NumButtons <= 0)
    {
        UE_LOG(LogSDL3, Warning, TEXT("InitializeButtons called with NumButtons=%d (must be > 0)"), NumButtons);
        return;
    }

    for (int32 i = 0; i < NumButtons; i++)
    {
        // Create a new joystick button UObject with this joystick as its Outer
        USDLJoystickButton* NewButton = NewObject<USDLJoystickButton>(this);
        
        if (!NewButton)
        {
            // If creation failed, log an error and skip this index
            UE_LOG(LogSDL3, Error, TEXT("Failed to create joystick button at index %d"), i);
            continue;
        }
        // Add the new button to the array
        NewButton->SetButtonID(i);
        Buttons.Add(NewButton);
    }

    // Log success for debugging
    UE_LOG(LogSDL3, Log, TEXT("Initialized %d joystick buttons for %s"), Buttons.Num(), *GetName());
}

void USDLJoystick::InitializeAxes(const int32 NumAxes)
{
    // Clear any existing buttons before re‑initializing
    Axes.Empty();

    // Sanity check: don't allow negative or zero axis counts
    if (NumAxes <= 0)
    {
        UE_LOG(LogSDL3, Warning, TEXT("InitializeAxes called with NumAxes=%d (must be > 0)"), NumAxes);
        return;
    }

    for (int32 i = 0; i < NumAxes; i++)
    {
        // Create a new joystick axis UObject with this joystick as its Outer
        USDLJoystickAxis* NewAxis = NewObject<USDLJoystickAxis>(this);
        NewAxis->SetAxisID(i);
        if (!NewAxis)
        {
            // If creation failed, log an error and skip this index
            UE_LOG(LogSDL3, Error, TEXT("Failed to create joystick Axis at index %d"), i);
            continue;
        }
        // Add the new button to the array
        Axes.Add(NewAxis);
    }

    // Log success for debugging
    UE_LOG(LogSDL3, Log, TEXT("Initialized %d joystick axes for %s"), Axes.Num(), *GetName());
}

void USDLJoystick::InitializeName(const FName Name_)
{
    JoystickName = Name_;
}

void USDLJoystick::SetDeviceID(const int32 DeviceID_)
{
    DeviceID = DeviceID_;
}

void USDLJoystick::SetHapticSupport(const bool HapticSuport_)
{
    SupportsHaptics = HapticSuport_;
    if (SupportsHaptics)
    {
        Haptic = SDL_OpenHapticFromJoystick(Joystick);
    }
}

void USDLJoystick::HandleEvents(SDL_Event* Event)
{
    EInputType input_;
    if (Event->type == SDL_EVENT_JOYSTICK_BUTTON_UP || Event->type == SDL_EVENT_JOYSTICK_BUTTON_DOWN)
    {
       
        if (Event->type == SDL_EVENT_JOYSTICK_BUTTON_UP)
        {
            input_ = EInputType::TRIGGERED;
        }
        else
        {
            input_ = EInputType::COMPLETED;
        }
       
        // The button ID (which button was pressed/released)
        Uint32 buttonId = Event->jbutton.button;
        if (Buttons.IsValidIndex(buttonId) && Buttons[buttonId])
        {
            Buttons[buttonId]->HandleEvent(input_);
        }
        else
        {
            UE_LOG(LogSDL3, Warning, TEXT("Invalid buttonId %d (Buttons.Num()=%d)"), buttonId, Buttons.Num());
        }

    }
    else if (Event->type == SDL_EVENT_JOYSTICK_AXIS_MOTION)
    {
        input_ = EInputType::TRIGGERED;

        Uint32 axisID = Event->jaxis.axis;
        Sint16 value = Event->jaxis.value;

        // Normalize to [-1.0, 1.0]
        float normalized = 0.0f;
        if (value < 0)
            normalized = static_cast<float>(value) / 32768.0f; // negative side
        else
            normalized = static_cast<float>(value) / 32767.0f; // positive side

        // Apply deadzone
        if (FMath::Abs(normalized) < DeadZone)
            normalized = 0.0f;

        if (Axes.IsValidIndex(axisID) && Axes[axisID])
        {
            // Treat each axis separately:
            Axes[axisID]->HandleEvent(input_, FVector2D(normalized, 0.0f));
        }
        else
        {
            UE_LOG(LogSDL3, Warning, TEXT("Invalid axisID %d (Axes.Num()=%d)"), axisID, Axes.Num());
        }
    }
}

void USDLJoystick::Update(const float DeltaTime)
{
    //Should've used inheritance, doofus
    for (auto Element : Buttons)
    {
        Element->Update(DeltaTime);
    }
    for (auto Element : Axes)
    {
        Element->Update(DeltaTime);
    }
}

// Utility to create and run a constant force
bool USDLJoystick::ApplyForce(int strength, int durationMs, int xDir, int yDir)
{
    if (!Haptic) return false;

    // If an effect is already running, stop and destroy it first
    if (CurrentForceEffectId >= 0) {
        SDL_StopHapticEffect(Haptic, CurrentForceEffectId);
        SDL_DestroyHapticEffect(Haptic, CurrentForceEffectId);
        CurrentForceEffectId = -1;
    }

    SDL_HapticEffect effect{};
    effect.type = SDL_HAPTIC_CONSTANT;
    effect.constant.direction.type = SDL_HAPTIC_CARTESIAN;
    effect.constant.direction.dir[0] = xDir; // This doesn't really matter with how the wheel is but just in case...

    effect.constant.direction.dir[1] = yDir;
    effect.constant.length = durationMs;
    effect.constant.level = strength * xDir;

    int id = SDL_CreateHapticEffect(Haptic, &effect);
    if (id < 0) {
        UE_LOG(LogSDL3, Error, TEXT("Failed to create haptic effect: %s"), UTF8_TO_TCHAR(SDL_GetError()));
        return false;
    }

    SDL_RunHapticEffect(Haptic, id, 1);
    CurrentForceEffectId = id;
    return true;
}

// Apply force to the right (+X)
bool USDLJoystick::ApplyForceRight(int strength, int durationMs)
{
    return ApplyForce(strength, durationMs, -1, 0);
}

// Apply force to the left (-X)
bool USDLJoystick::ApplyForceLeft(int strength, int durationMs)
{
    return ApplyForce(strength, durationMs, 1, 0);
}

// Stop all forces
void USDLJoystick::StopAllForces()
{
    if (Haptic && CurrentForceEffectId >= 0) {
        SDL_StopHapticEffect(Haptic, CurrentForceEffectId);
        SDL_DestroyHapticEffect(Haptic, CurrentForceEffectId);
        CurrentForceEffectId = -1;
    }
}

bool USDLJoystick::RumbleWheel(int32 Strength, int32 DurationMs, int32 PeriodMs)
{
    if (!Haptic) return false;

    // Clean up any previous rumble
    if (CurrentRumbleEffectId >= 0) {
        SDL_StopHapticEffect(Haptic, CurrentRumbleEffectId);
        SDL_DestroyHapticEffect(Haptic, CurrentRumbleEffectId);
        CurrentRumbleEffectId = -1;
    }

    SDL_HapticEffect effect{};
    effect.type = SDL_HAPTIC_SINE; // periodic sine wave
    effect.periodic.direction.type = SDL_HAPTIC_CARTESIAN;
    effect.periodic.direction.dir[0] = 1; // along X axis
    effect.periodic.length = DurationMs;  // duration in ms
    effect.periodic.period = PeriodMs;    // period of sine wave in ms
    effect.periodic.magnitude = Strength; // amplitude of vibration

    int id = SDL_CreateHapticEffect(Haptic, &effect);
    if (id < 0) {
        UE_LOG(LogSDL3, Error, TEXT("Failed to create rumble effect: %s"), UTF8_TO_TCHAR(SDL_GetError()));
        return false;
    }

    SDL_RunHapticEffect(Haptic, id, 1);
    CurrentRumbleEffectId = id;
    return true;
}