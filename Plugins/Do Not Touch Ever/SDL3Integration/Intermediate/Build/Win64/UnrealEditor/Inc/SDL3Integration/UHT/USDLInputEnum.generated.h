// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDLInputEnum.h"

#ifdef SDL3INTEGRATION_USDLInputEnum_generated_h
#error "USDLInputEnum.generated.h already included, missing '#pragma once' in USDLInputEnum.h"
#endif
#define SDL3INTEGRATION_USDLInputEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLInputEnum_h

// ********** Begin Enum EInputType ****************************************************************
#define FOREACH_ENUM_EINPUTTYPE(op) \
	op(EInputType::TRIGGERED) \
	op(EInputType::STARTED) \
	op(EInputType::COMPLETED) \
	op(EInputType::ONGOING) 

enum class EInputType : uint8;
template<> struct TIsUEnumClass<EInputType> { enum { Value = true }; };
template<> SDL3INTEGRATION_API UEnum* StaticEnum<EInputType>();
// ********** End Enum EInputType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
