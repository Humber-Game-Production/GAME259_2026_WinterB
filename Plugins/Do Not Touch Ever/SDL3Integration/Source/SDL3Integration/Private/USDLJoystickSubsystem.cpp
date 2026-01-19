#include "USDLJoystickSubsystem.h"
#include "SDL3Integration.h"

#include "SDL3/SDL.h"
#include <SDL3/SDL_joystick.h>

#include "USDL3Log.h"




void USDLJoystickSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    if (SDL_Init(SDL_INIT_JOYSTICK | SDL_INIT_GAMEPAD | SDL_INIT_EVENTS | SDL_INIT_HAPTIC) == true)
    {
        OpenJoysticks();
        SDL_SetJoystickEventsEnabled(true);
        UE_LOG(LogSDL3, Log, TEXT("SDL Joystick subsystem initialized"));
    }
    else
    {

        UE_LOG(LogSDL3, Error, TEXT("Subsystem, SDL Init failed: %s"), UTF8_TO_TCHAR(SDL_GetError()));
    }
    
    TickHandle = FTSTicker::GetCoreTicker().AddTicker(
        FTickerDelegate::CreateUObject(this, &USDLJoystickSubsystem::Tick), 0.0f);
    
}


void USDLJoystickSubsystem::Deinitialize()
{
    // SDL_RemoveEventWatch(SDLEventWatchCallback, this);
    SDL_QuitSubSystem(SDL_INIT_JOYSTICK | SDL_INIT_GAMEPAD | SDL_INIT_EVENTS | SDL_INIT_HAPTIC);
    CloseJoysticks();
    FTSTicker::GetCoreTicker().RemoveTicker(TickHandle);
    SDL_Quit();
    Super::Deinitialize();
}


USDLJoystick* USDLJoystickSubsystem::GetJoystickComponentByID(int32 DeviceId) const
{
    if (USDLJoystick* const* FoundPtr = JoystickComponents.Find(DeviceId))
    {
        return *FoundPtr; // dereference the pointer-to-value
    }

    // Log an error if not found
    UE_LOG(LogSDL3, Error, TEXT("GetJoystickComponent: No joystick component found for DeviceId %d"), DeviceId);
    return nullptr;
}

USDLJoystick* USDLJoystickSubsystem::GetJoystickComponentByName(FName DeviceName, int32& ID) const
{
    ID = -1; // default if not found

    if (JoystickNameMap.Find(DeviceName))
    {
        ID = *JoystickNameMap.Find(DeviceName);
        return *JoystickComponents.Find(ID);
    }

    UE_LOG(LogSDL3, Error, TEXT("GetJoystickComponent: No joystick component found for name %s"), *DeviceName.ToString());
    return nullptr;
}

bool USDLJoystickSubsystem::Tick(float DeltaTime)
{
    SDL_PumpEvents();
    SDL_Event Event;
  
    while (SDL_PollEvent(&Event))
    {
        if (&Event == nullptr) continue; //guard
        HandleSDLEvent(&Event);
    }

    for (auto Element : JoystickComponents)
    {
        Element.Value->Update(DeltaTime);
    }
    
    return true; // keep ticking
}


void USDLJoystickSubsystem::OpenJoysticks()
{
    int Count = 0;
    SDL_JoystickID* Joysticks = SDL_GetJoysticks(&Count);

    if (Joysticks && Count > 0)
    {
        UE_LOG(LogSDL3, Log, TEXT("Number of joysticks detected: %d"), Count);

        for (int i = 0; i < Count; ++i)
        {
            
            if (SDL_Joystick* Joystick = SDL_OpenJoystick(Joysticks[i]))
            {
                OpenedJoysticks.Add(Joystick);
             
                const char* Name = SDL_GetJoystickName(Joystick);
                FString ConvertedName = UTF8_TO_TCHAR(Name ? Name : "<unnamed>");
                UE_LOG(LogSDL3, Log, TEXT("Joystick %d (ID %d): %s"),
                    i,
                    Joysticks[i],
                    *ConvertedName);

                USDLJoystick* NewComp = NewObject<USDLJoystick>();
                if (NewComp)
                {
                
                    NewComp->InitializeJoystick(Joystick);
                    NewComp->SetDeviceID(SDL_GetJoystickID(Joystick));
                    NewComp->SetHapticSupport(SDL_IsJoystickHaptic(Joystick));
                    NewComp->InitializeButtons(SDL_GetNumJoystickButtons(Joystick));
                    NewComp->InitializeAxes(SDL_GetNumJoystickAxes(Joystick));
                    NewComp->InitializeName(FName(*ConvertedName));
                    JoystickComponents.Add(i, NewComp);
                    JoystickIDMap.Add(SDL_GetJoystickID(Joystick),i);
                    JoystickNameMap.Add(FName(*ConvertedName), i);
                }

           

            }
            else
            {
                UE_LOG(LogSDL3, Warning, TEXT("Failed to open joystick %d (ID %d)"), i, Joysticks[i]);
            }
        }
    }
}



void USDLJoystickSubsystem::CloseJoysticks()
{
    for (SDL_Joystick* Joystick : OpenedJoysticks)
    {
        if (Joystick)
        {
            const char* Name = SDL_GetJoystickName(Joystick);
            UE_LOG(LogSDL3, Log, TEXT("Closing joystick: %s"),
                UTF8_TO_TCHAR(Name ? Name : "<unnamed>"));

            SDL_CloseJoystick(Joystick);
        }
    }

    OpenedJoysticks.Empty();
}


bool USDLJoystickSubsystem::HandleSDLEvent(SDL_Event* Event)
{
    if (!Event) return false;
    int32 DeviceId = -1;

    switch (Event->type)
    {
    case SDL_EVENT_JOYSTICK_AXIS_MOTION:
        DeviceId = static_cast<int32>(Event->jaxis.which);
        break;

    case SDL_EVENT_JOYSTICK_BUTTON_DOWN:
        DeviceId = static_cast<int32>(Event->jbutton.which);
        break;
    case SDL_EVENT_JOYSTICK_BUTTON_UP:
        DeviceId = static_cast<int32>(Event->jbutton.which);
        break;

    case SDL_EVENT_JOYSTICK_ADDED:
        DeviceId = static_cast<int32>(Event->jdevice.which);
        OnJoystickConnected.Broadcast(DeviceId);
        break;
    case SDL_EVENT_JOYSTICK_REMOVED:
        DeviceId = static_cast<int32>(Event->jdevice.which);
        OnJoystickDisconnected.Broadcast(DeviceId);
        break;

    default:
        break;
    }

    if (DeviceId != -1)
    {
        int32* localID = JoystickIDMap.Find(DeviceId);
        UE_LOG(LogSDL3, Log, TEXT("Received SDL event %d from joystick DeviceId=%d, Locally known as %d"),
              Event->type, DeviceId, *localID);

        if (USDLJoystick** Joystick = JoystickComponents.Find(*localID))
        {
            // Optionally log the joystick UObject name too
            UE_LOG(LogSDL3, Verbose, TEXT("Dispatching to joystick object: %s"),
                   *(*Joystick)->GetName());

            (*Joystick)->HandleEvents(Event);
        }
        else
        {
            UE_LOG(LogSDL3, Warning, TEXT("No joystick registered for DeviceId=%d"), DeviceId);
        }

    }

    return true; // Always return something
}


void USDLJoystickSubsystem::HapticTest(SDL_Joystick* joystick) {
    //DOn't really need this in here anymore but if anyone wants to look through how to play haptics with SDL, have fun
        SDL_Haptic* haptic = SDL_OpenHapticFromJoystick(joystick);
        if (haptic)
        {
            unsigned int features = SDL_GetHapticFeatures(haptic);
            UE_LOG(LogSDL3, Log, TEXT("Haptic features bitmask: %u"), features);

            if (features & SDL_HAPTIC_CONSTANT) UE_LOG(LogSDL3, Log, TEXT("Supports constant force"));
            if (features & SDL_HAPTIC_SINE)     UE_LOG(LogSDL3, Log, TEXT("Supports sine wave"));
            if (features & SDL_HAPTIC_SPRING)   UE_LOG(LogSDL3, Log, TEXT("Supports spring"));
            if (features & SDL_HAPTIC_DAMPER)   UE_LOG(LogSDL3, Log, TEXT("Supports damper"));
            if (features & SDL_HAPTIC_FRICTION) UE_LOG(LogSDL3, Log, TEXT("Supports friction"));
            if (features & SDL_HAPTIC_INERTIA)  UE_LOG(LogSDL3, Log, TEXT("Supports inertia"));
        }
        else
        {
            UE_LOG(LogSDL3, Warning, TEXT("No haptic"));
        }

        if (!haptic)
        {
            UE_LOG(LogSDL3, Error, TEXT("No haptic device: %s"), UTF8_TO_TCHAR(SDL_GetError()));
            return;
        }

        unsigned int features = SDL_GetHapticFeatures(haptic);
        UE_LOG(LogSDL3, Log, TEXT("Haptic features bitmask: %u"), features);

        // Helper lambda to try an effect
        auto tryEffect = [&](SDL_HapticEffect& effect, const char* name, int durationMs)
            {
                int id = SDL_CreateHapticEffect(haptic, &effect);
                if (id < 0)
                {
                    UE_LOG(LogSDL3, Error, TEXT("%s FAILED: %s"), UTF8_TO_TCHAR(name), UTF8_TO_TCHAR(SDL_GetError()));
                    return false;
                }

                UE_LOG(LogSDL3, Log, TEXT("%s OK, playing..."), UTF8_TO_TCHAR(name));
                SDL_RunHapticEffect(haptic, id, 1);
                SDL_Delay(durationMs);

                SDL_DestroyHapticEffect(haptic, id);
                return true;
            };

    if(features & SDL_HAPTIC_CONSTANT) {
        SDL_HapticEffect e{};
        e.type = SDL_HAPTIC_CONSTANT;
        e.constant.direction.type = SDL_HAPTIC_CARTESIAN;
        e.constant.direction.dir[0] = 1; // push right
        e.constant.length = 2000;
        e.constant.level = 16000;
        tryEffect(e, "Constant force", 2000);
    }
}