// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "USDLJoystickButton.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnButtonTriggered, int32, ButtonID, bool, value, float, elapsedTime);

UENUM(BlueprintType)
enum class EOutputs : uint8
{
	OutputOne UMETA(DisplayName = "Triggered"),
	OutputTwo UMETA(DisplayName = "Started"),
	OutputThree UMETA(DisplayName = "Completed"),
	OutputFour UMETA(DisplayName = "Ongoing")
};


UCLASS()
class SDL3INTEGRATION_API USDLJoystickButton : public UObject
{
private:
	GENERATED_BODY()
	USDLJoystickButton();
	USDLJoystickButton(int32 ButtonID_);
	int32 ButtonID;
	bool ButtonState;
	float ElapsedTime;
	float CurrentTime;

public:
	void OnButtonPressed(const float CurrentTime_);
	void OnButtonReleased(const float CurrentTime_);
	void SetCurrentTime(const float Time);
	
	void Update(const float DeltaTime);
	
	UFUNCTION(BlueprintNativeEvent, meta = (ExpandEnumAsExecs = "OutputPins"))
	void InputEventSDL3(EOutputs& OutputPins);

	UFUNCTION(BlueprintImplementableEvent)
	void Implementable();
};
