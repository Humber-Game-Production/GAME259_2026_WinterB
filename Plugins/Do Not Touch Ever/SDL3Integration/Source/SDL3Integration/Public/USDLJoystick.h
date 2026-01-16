#pragma once  // Ensures the header file is only included once during compilation

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <SDL3/SDL_Events.h>
#include <SDL3/SDL_joystick.h>
#include "SDL3/SDL_haptic.h"

#include "USDLJoystick.generated.h"

// Forward declarations for joystick button and axis classes
class USDLJoystickButton;
class USDLJoystickAxis;

/**
 * USDLJoystick
 * 
 * A custom Unreal Engine ActorComponent that integrates SDL3 joystick input
 * and haptic feedback into the engine. Exposes joystick state and haptic
 * functions to Blueprints.
 */
UCLASS(ClassGroup = (Input), meta = (BlueprintSpawnableComponent))
class SDL3INTEGRATION_API USDLJoystick : public UActorComponent
{
    GENERATED_BODY()

public:
    // Constructor
    USDLJoystick();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    // Called when the game ends or the component is destroyed
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    /** Array of buttons owned by this joystick (instanced UObject wrappers) */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Instanced, Category = "Joystick")
    TArray<USDLJoystickButton*> Buttons;

    /** Array of axes owned by this joystick (instanced UObject wrappers) */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Instanced, Category = "Joystick")
    TArray<USDLJoystickAxis*> Axes;

    /** Returns the joystick's name (read-only in Blueprints) */
    UFUNCTION(BlueprintPure, Category = "Joystick")
    FName GetJoystickName() const { return JoystickName; }

    /** Returns whether this joystick supports haptic feedback */
    UFUNCTION(BlueprintPure, Category = "Joystick")
    bool GetHapticSupport() const { return SupportsHaptics; }

    // Initialization helpers
    void InitializeJoystick(SDL_Joystick* Joystick_);
    void InitializeButtons(const int32 NumButtons);
    void InitializeAxes(const int32 NumAxes);
    void InitializeName(const FName Name_);
    void SetDeviceID(const int32 DeviceID_);
    void SetHapticSupport(const bool HapticSuport_);

    // Handle incoming SDL events (button press, axis movement, etc.)
    void HandleEvents(SDL_Event* Event);

    // Update joystick state each frame
    void Update(const float DeltaTime);

    // ------------------- HAPTIC FUNCTIONS -------------------

    /** Apply constant force to the right (+X) */
    UFUNCTION(BlueprintCallable, Category="Joystick|Haptics", meta=(ToolTip="Apply a constant haptic force pushing to the right (+X direction)."))
    bool ApplyForceRight(int32 Strength = 16000, int32 DurationMs = 2000);

    /** Apply constant force to the left (-X) */
    UFUNCTION(BlueprintCallable, Category="Joystick|Haptics", meta=(ToolTip="Apply a constant haptic force pushing to the left (-X direction)."))
    bool ApplyForceLeft(int32 Strength = 16000, int32 DurationMs = 2000);

    /** Stop all active haptic forces */
    UFUNCTION(BlueprintCallable, Category="Joystick|Haptics", meta=(ToolTip="Stop all currently active haptic effects on this joystick."))
    void StopAllForces();

    /** More freedom to apply a constant force in a given direction */
    UFUNCTION(BlueprintCallable, Category="Joystick|Haptics", meta=(ToolTip="Apply a constant haptic force in a custom direction defined by X and Y components."))
    bool ApplyForce(int32 Strength, int32 DurationMs, int32 XDir, int32 YDir);

    /** Play a sinewave rumble on the wheel */
    UFUNCTION(BlueprintCallable, Category="Joystick|Haptics", meta=(ToolTip="Play a sinewave rumble effect on the joystick wheel with adjustable strength, duration, and period."))
    bool RumbleWheel(int32 Strength = 16000, int32 DurationMs = 2000, int32 PeriodMs = 100);

private:
    // Raw SDL joystick handle
    SDL_Joystick* Joystick;

    // SDL haptic (force feedback) handle
    SDL_Haptic* Haptic;

    // Whether this joystick supports haptic feedback
    bool SupportsHaptics;

    // IDs for currently active haptic effects
    int32 CurrentRumbleEffectId = -1;
    int32 CurrentForceEffectId = -1;

    // Dead zone threshold for axis input (to ignore small noise)
    const float DeadZone = 0.1f;

    // Internal storage, exposed read-only to Blueprints
    UPROPERTY(VisibleAnywhere, Category = "Joystick")
    FName JoystickName;

    UPROPERTY(VisibleAnywhere, Category = "Joystick")
    int32 DeviceID;
};