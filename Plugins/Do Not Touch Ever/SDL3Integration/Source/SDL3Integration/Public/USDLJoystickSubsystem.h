#pragma once
// Ensures this header file is only included once during compilation

#include "CoreMinimal.h"                       // Core Unreal Engine types and utilities
#include "Subsystems/GameInstanceSubsystem.h"  // Base class for subsystems tied to the game instance
#include <SDL3/SDL_Events.h>                   // SDL event handling (joystick, input, etc.)
#include "USDLJoystick.h"                      // Custom class representing joystick devices
#include "USDLJoystickSubsystem.generated.h"   // Required for Unreal's reflection system (UCLASS, UFUNCTION, etc.)

// -------------------- Delegates --------------------
// These multicast delegates broadcast joystick events to Blueprints or C++ listeners


// Triggered when a joystick is connected
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoystickConnected, int32, DeviceId);

// Triggered when a joystick is disconnected
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoystickDisconnected, int32, DeviceId);


// -------------------- Subsystem Class --------------------
UCLASS()
class SDL3INTEGRATION_API USDLJoystickSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    // Called when the subsystem is initialized (game instance startup)
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    // Called when the subsystem is deinitialized (game instance shutdown)
    virtual void Deinitialize() override;

    // List of currently opened SDL joystick handles
    TArray<SDL_Joystick*> OpenedJoysticks;

    // Opens all available joysticks
    void OpenJoysticks();

    // Closes all opened joysticks
    void CloseJoysticks();

    // Simple test function for joystick haptics (rumble/vibration)
    void HapticTest(SDL_Joystick* joystick);

    // -------------------- Blueprint Events --------------------
    // These can be bound in Blueprints to react to joystick connection/disconnection
    UPROPERTY(BlueprintAssignable, Category = "SDL3 Joystick", meta=(ToolTip="Event fired when a joystick is disconnected"))
    FOnJoystickDisconnected OnJoystickDisconnected;
    
    UPROPERTY(BlueprintAssignable, Category = "SDL3 Joystick", meta=(ToolTip="Event fired when a joystick is connected"))
    FOnJoystickConnected OnJoystickConnected;

    

    // -------------------- Accessors --------------------
    // Retrieve joystick component by its numeric ID
    UFUNCTION(BlueprintCallable, Category = "SDL3 Joystick", meta=(ToolTip="Returns the joystick component for the given Device ID"))
    USDLJoystick* GetJoystickComponentByID(int32 DeviceId) const;

    // Retrieve joystick component by its name; also outputs its ID
    UFUNCTION(BlueprintCallable, Category = "SDL3 Joystick", meta=(ToolTip="Finds a joystick by name and returns its component. Also outputs the Device ID."))
    USDLJoystick* GetJoystickComponentByName(
        FName DeviceName,
        int32& ID
    ) const;

private:
    // Handle for ticking (Unreal's per-frame update system)
    FTSTicker::FDelegateHandle TickHandle;

    // Map of DeviceId -> Joystick component (Unreal representation of joystick)
    UPROPERTY()
    TMap<int32, USDLJoystick*> JoystickComponents;

    // Map of SDL joystick IDs -> Unreal Device IDs
    TMap<SDL_JoystickID, int32> JoystickIDMap;

    // Map of joystick names -> Device IDs
    TMap<FName, int32> JoystickNameMap;

    // Called every frame to update joystick state
    bool Tick(float DeltaTime);

    // Handles incoming SDL events (button presses, axis movement, etc.)
    bool HandleSDLEvent(SDL_Event* Event);
};