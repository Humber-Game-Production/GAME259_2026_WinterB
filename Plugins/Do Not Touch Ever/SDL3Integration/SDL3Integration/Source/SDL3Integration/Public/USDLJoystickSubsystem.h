#pragma once



#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include <SDL3/SDL_Events.h>
#include "USDLJoystickButton.h"
#include "USDLJoystickSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnJoystickAxisMoved, int32, DeviceId, int32, Axis, int32, Value);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoystickButtonPressed, int32, DeviceId, int32, Button);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoystickButtonReleased, int32, DeviceId, int32, Button);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoystickConnected, int32, DeviceId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoystickDisconnected, int32, DeviceId);

UCLASS()
class SDL3INTEGRATION_API USDLJoystickSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    TArray<SDL_Joystick*> OpenedJoysticks;

    void OpenJoysticks();
    void CloseJoysticks();
    void Update() const;
 
    void HapticTest(SDL_Joystick* joystick);

    // Blueprint events
    UPROPERTY(BlueprintAssignable, Category = "SDL3 Joystick")
    FOnJoystickAxisMoved OnAxisMoved;

    UPROPERTY(BlueprintAssignable, Category = "SDL3 Joystick")
    FOnJoystickButtonPressed OnButtonPressed;

    UPROPERTY(BlueprintAssignable, Category = "SDL3 Joystick")
    FOnJoystickButtonReleased OnButtonReleased;

    UPROPERTY(BlueprintAssignable, Category = "SDL3 Joystick")
    FOnJoystickConnected OnConnected;

    UPROPERTY(BlueprintAssignable, Category = "SDL3 Joystick")
    FOnJoystickDisconnected OnDisconnected;


   
private:
    FTSTicker::FDelegateHandle TickHandle;

    bool Tick(float DeltaTime);
    bool HandleSDLEvent(SDL_Event* Event);
    static bool SDLEventWatchCallback(void* UserData, SDL_Event* Event)
    {
        USDLJoystickSubsystem* Self = static_cast<USDLJoystickSubsystem*>(UserData);
        return Self->HandleSDLEvent(Event);
    }
};