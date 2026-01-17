// Fill out your copyright notice in the Description page of Project Settings.


#include "USDLJoystickButton.h"
USDLJoystickButton::USDLJoystickButton() {

}

USDLJoystickButton::USDLJoystickButton(int32 ButtonID_) : ButtonID(ButtonID_)
{
}

void USDLJoystickButton::OnButtonPressed(const float CurrentTime_)
{
	ElapsedTime = 0.0f;
	FOnButtonTriggered().Broadcast(ButtonID, true, ElapsedTime);
}

void USDLJoystickButton::OnButtonReleased(const float CurrentTime_)
{
	FOnButtonTriggered().Broadcast(ButtonID, false, ElapsedTime);
}

void USDLJoystickButton::SetCurrentTime(const float Time)
{
	CurrentTime = Time;
}

void USDLJoystickButton::Update(const float DeltaTime)
{
	if (ButtonState){
		ElapsedTime += DeltaTime;

		FOnButtonTriggered().Broadcast(ButtonID, true, ElapsedTime);
	}
}

void USDLJoystickButton::InputEventSDL3_Implementation(EOutputs& OutputPins)
{
	if (ButtonState)
	{
		OutputPins = EOutputs::OutputOne;
	}
	else
	{
		OutputPins = EOutputs::OutputTwo;
	}
}

