#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "USDL3InputComponent.generated.h"

//  Declare the Blueprint event delegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSDLKeyPressed, FString, KeyName);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class USDL3InputComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USDL3InputComponent();

    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    //  Blueprint event dispatcher
    UPROPERTY(BlueprintAssignable, Category = "SDL3 Input")
    FOnSDLKeyPressed OnSDLKeyPressed;
};