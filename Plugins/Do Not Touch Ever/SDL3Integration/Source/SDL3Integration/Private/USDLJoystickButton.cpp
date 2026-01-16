// Fill out your copyright notice in the Description page of Project Settings.

#include "USDLJoystickButton.h"
#include "USDL3Log.h"

// Default constructor: initializes an empty joystick button object.
// Currently does nothing, but could be useful if you want default values.
// I have no idea what that would look like though
USDLJoystickButton::USDLJoystickButton() {}

// Constructor with a ButtonID parameter: sets the button's ID.
USDLJoystickButton::USDLJoystickButton(int32 ButtonID_) : ButtonID(ButtonID_)
{
}

// Setter for ButtonID
void USDLJoystickButton::SetButtonID(int32 ButtonID_)
{
	ButtonID = ButtonID_;
}

// Handles input events for the joystick button.
// Depending on the input type, broadcasts different events.
void USDLJoystickButton::HandleEvent(EInputType input)
{
	if (input == EInputType::TRIGGERED)
	{
		// First time the button is triggered: reset duration and mark as started.
		if (!TriggerBegin)
		{
			PressDuration = 0.0f;
			OnButtonAction.Broadcast(ButtonID, EInputType::STARTED, PressDuration);
			TriggerBegin = true;
		}
		else
		{
			// If already triggered, keep broadcasting TRIGGERED events.
			OnButtonAction.Broadcast(ButtonID, EInputType::TRIGGERED, PressDuration);
		}
	}
	else if (input == EInputType::COMPLETED)
	{
		// When input completes: broadcast COMPLETED and reset trigger state.
		OnButtonAction.Broadcast(ButtonID, EInputType::COMPLETED, PressDuration);
		TriggerBegin = false;
	}
}

// Updates the press duration while the button is being held down.
// DeltaTime is added each frame while TriggerBegin is true.
void USDLJoystickButton::Update(const float DeltaTime)
{
	if (TriggerBegin) PressDuration += DeltaTime;
}