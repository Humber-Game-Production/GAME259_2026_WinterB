// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "USDLInputEnum.h"
#include "USDLJoystickAxis.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAxisTriggered, int32, AxisID, EInputType, inputType ,FVector2D, Value, float, ElapsedTime);




UCLASS()
class SDL3INTEGRATION_API USDLJoystickAxis : public UObject
{
private:
	GENERATED_BODY()
	USDLJoystickAxis();
	USDLJoystickAxis(int32 AxisID_);
	
	FVector2D AxisValue;
	int32 AxisID;
	bool TriggerBegin = false;
	float PressDuration;
public:
	void HandleEvent(EInputType input, FVector2D Value_);	
	void Update(const float DeltaTime);
	void SetAxisID(int32 AxisID_);
	
	UPROPERTY(BlueprintAssignable, Category="Axis")
	FOnAxisTriggered OnAxisAction;

public:


	
	


};
