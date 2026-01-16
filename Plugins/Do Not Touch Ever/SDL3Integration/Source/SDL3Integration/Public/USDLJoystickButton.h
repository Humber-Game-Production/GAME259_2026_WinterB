// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "USDLInputEnum.h"
#include "USDLJoystickButton.generated.h"

/**
 * USDLJoystickButton
 * Represents a joystick button in your SDL3 integration.
 * Tracks button state, press duration, and broadcasts events to Blueprint.
 */

// Delegate definition: allows broadcasting button events to Blueprint or C++ listeners.
// Parameters: ButtonID (which button), InputType (STARTED/TRIGGERED/COMPLETED), Duration (time held).
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FOnButtonAction, int32, ButtonID, EInputType, InputType, float, Duration
);

UCLASS(BlueprintType, Blueprintable)
class SDL3INTEGRATION_API USDLJoystickButton : public UObject
{
	GENERATED_BODY()

private:
	// Unique identifier for the button (e.g., index from SDL).
	int32 ButtonID;

	// Tracks whether the button press has begun.
	bool TriggerBegin = false;

	// Duration the button has been held down (in seconds).
	float PressDuration;

public:
	// Default constructor.
	USDLJoystickButton();

	// Constructor with button ID initialization.
	USDLJoystickButton(int32 ButtonID_);

	// Setter for ButtonID.
	void SetButtonID(int32 ButtonID_);

	// Handles input events (STARTED, TRIGGERED, COMPLETED).
	void HandleEvent(EInputType input);

	// Updates press duration each frame while button is held.
	void Update(const float DeltaTime);


	// Delegate exposed to Blueprint: broadcasts button events.
	UPROPERTY(BlueprintAssignable, Category="Button", meta=(ToolTip="Broadcasts when this joystick button changes state. Use InputType to distinguish STARTED, TRIGGERED, and COMPLETED. You can split off the enum into more specific input types if needed for your project."))
	FOnButtonAction OnButtonAction;
};