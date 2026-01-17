#include "USDLJoystickAxis.h"

USDLJoystickAxis::USDLJoystickAxis()
{
}

USDLJoystickAxis::USDLJoystickAxis(int32 AxisID_)
{
}

void USDLJoystickAxis::HandleEvent(EInputType input, FVector2D Value_)
{
	if (input == EInputType::TRIGGERED)
	{
		if (!TriggerBegin)
		{
			PressDuration = 0.0f;
			OnAxisAction.Broadcast(AxisID, EInputType::TRIGGERED, Value_, PressDuration);
			TriggerBegin = true;
		}
		else
		{
			OnAxisAction.Broadcast(AxisID, EInputType::TRIGGERED, Value_, PressDuration);
		}
	}
	else if (input == EInputType::COMPLETED)
	{
		OnAxisAction.Broadcast(AxisID, EInputType::COMPLETED, Value_, PressDuration);
		TriggerBegin = false;
	}
}

void USDLJoystickAxis::Update(const float DeltaTime)
{
	//We only get "axis motion" with SDL so things like completed, ongoing etc are much more difficult than with buttons...
	//Could probably figure it out with some timers and math but that seems like unecessary overehad if its not needed
	//if it is needed *for whatever reason* I can come back and figure it out
}

void USDLJoystickAxis::SetAxisID(int32 AxisID_)
{
	AxisID = AxisID_;
}

