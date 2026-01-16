#include "USDL3InputComponent.h"
#include "SDL3Integration.h"
#include "USDLJoystickSubsystem.h"
#include <SDL3/SDL.h>
#include "USDL3Log.h"

USDL3InputComponent::USDL3InputComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void USDL3InputComponent::BeginPlay()
{
    Super::BeginPlay();

  
}

void USDL3InputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


    ////this is terrible, awful don't do this ever folks
    //if (UWorld* World = GetWorld())
    //{
    //    if (UGameInstance* GI = World->GetGameInstance())
    //    {
    //        if (USDLJoystickSubsystem* Subsystem = GI->GetSubsystem<USDLJoystickSubsystem>())
    //        {
    //            // Call your subsystem’s Update() each frame
    //            Subsystem->Update();
    //        }
    //    }
    //}

}

