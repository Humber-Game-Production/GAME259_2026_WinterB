#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EInputType : uint8
{
	TRIGGERED UMETA(DisplayName = "Triggered"),
	STARTED UMETA(DisplayName = "Started"),
	COMPLETED UMETA(DisplayName = "Completed"),
	ONGOING UMETA(DisplayName = "Ongoing"),
};