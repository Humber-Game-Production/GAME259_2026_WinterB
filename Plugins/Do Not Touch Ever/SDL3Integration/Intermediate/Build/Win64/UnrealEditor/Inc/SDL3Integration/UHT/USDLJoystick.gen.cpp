// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDLJoystick.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUSDLJoystick() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystick();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystick_NoRegister();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickAxis_NoRegister();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickButton_NoRegister();
UPackage* Z_Construct_UPackage__Script_SDL3Integration();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USDLJoystick Function ApplyForce *****************************************
struct Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics
{
	struct SDLJoystick_eventApplyForce_Parms
	{
		int32 Strength;
		int32 DurationMs;
		int32 XDir;
		int32 YDir;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Joystick|Haptics" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a constant haptic force in a custom direction defined by X and Y components." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DurationMs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XDir;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YDir;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventApplyForce_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventApplyForce_Parms, DurationMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_XDir = { "XDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventApplyForce_Parms, XDir), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_YDir = { "YDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventApplyForce_Parms, YDir), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDLJoystick_eventApplyForce_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDLJoystick_eventApplyForce_Parms), &Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_DurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_XDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_YDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystick, nullptr, "ApplyForce", Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::SDLJoystick_eventApplyForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::SDLJoystick_eventApplyForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystick_ApplyForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystick_ApplyForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystick::execApplyForce)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_PROPERTY(FIntProperty,Z_Param_DurationMs);
	P_GET_PROPERTY(FIntProperty,Z_Param_XDir);
	P_GET_PROPERTY(FIntProperty,Z_Param_YDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyForce(Z_Param_Strength,Z_Param_DurationMs,Z_Param_XDir,Z_Param_YDir);
	P_NATIVE_END;
}
// ********** End Class USDLJoystick Function ApplyForce *******************************************

// ********** Begin Class USDLJoystick Function ApplyForceLeft *************************************
struct Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics
{
	struct SDLJoystick_eventApplyForceLeft_Parms
	{
		int32 Strength;
		int32 DurationMs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Joystick|Haptics" },
		{ "CPP_Default_DurationMs", "2000" },
		{ "CPP_Default_Strength", "16000" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a constant haptic force pushing to the left (-X direction)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DurationMs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventApplyForceLeft_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventApplyForceLeft_Parms, DurationMs), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDLJoystick_eventApplyForceLeft_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDLJoystick_eventApplyForceLeft_Parms), &Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::NewProp_DurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystick, nullptr, "ApplyForceLeft", Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::SDLJoystick_eventApplyForceLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::SDLJoystick_eventApplyForceLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystick_ApplyForceLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystick_ApplyForceLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystick::execApplyForceLeft)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_PROPERTY(FIntProperty,Z_Param_DurationMs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyForceLeft(Z_Param_Strength,Z_Param_DurationMs);
	P_NATIVE_END;
}
// ********** End Class USDLJoystick Function ApplyForceLeft ***************************************

// ********** Begin Class USDLJoystick Function ApplyForceRight ************************************
struct Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics
{
	struct SDLJoystick_eventApplyForceRight_Parms
	{
		int32 Strength;
		int32 DurationMs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Joystick|Haptics" },
		{ "CPP_Default_DurationMs", "2000" },
		{ "CPP_Default_Strength", "16000" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a constant haptic force pushing to the right (+X direction)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DurationMs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventApplyForceRight_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventApplyForceRight_Parms, DurationMs), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDLJoystick_eventApplyForceRight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDLJoystick_eventApplyForceRight_Parms), &Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::NewProp_DurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystick, nullptr, "ApplyForceRight", Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::SDLJoystick_eventApplyForceRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::SDLJoystick_eventApplyForceRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystick_ApplyForceRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystick_ApplyForceRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystick::execApplyForceRight)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_PROPERTY(FIntProperty,Z_Param_DurationMs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyForceRight(Z_Param_Strength,Z_Param_DurationMs);
	P_NATIVE_END;
}
// ********** End Class USDLJoystick Function ApplyForceRight **************************************

// ********** Begin Class USDLJoystick Function GetHapticSupport ***********************************
struct Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics
{
	struct SDLJoystick_eventGetHapticSupport_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Joystick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether this joystick supports haptic feedback */" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether this joystick supports haptic feedback" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDLJoystick_eventGetHapticSupport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDLJoystick_eventGetHapticSupport_Parms), &Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystick, nullptr, "GetHapticSupport", Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::SDLJoystick_eventGetHapticSupport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::SDLJoystick_eventGetHapticSupport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystick_GetHapticSupport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystick_GetHapticSupport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystick::execGetHapticSupport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHapticSupport();
	P_NATIVE_END;
}
// ********** End Class USDLJoystick Function GetHapticSupport *************************************

// ********** Begin Class USDLJoystick Function GetJoystickName ************************************
struct Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics
{
	struct SDLJoystick_eventGetJoystickName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Joystick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the joystick's name (read-only in Blueprints) */" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the joystick's name (read-only in Blueprints)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventGetJoystickName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystick, nullptr, "GetJoystickName", Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::SDLJoystick_eventGetJoystickName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::SDLJoystick_eventGetJoystickName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystick_GetJoystickName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystick_GetJoystickName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystick::execGetJoystickName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetJoystickName();
	P_NATIVE_END;
}
// ********** End Class USDLJoystick Function GetJoystickName **************************************

// ********** Begin Class USDLJoystick Function RumbleWheel ****************************************
struct Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics
{
	struct SDLJoystick_eventRumbleWheel_Parms
	{
		int32 Strength;
		int32 DurationMs;
		int32 PeriodMs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Joystick|Haptics" },
		{ "CPP_Default_DurationMs", "2000" },
		{ "CPP_Default_PeriodMs", "100" },
		{ "CPP_Default_Strength", "16000" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a sinewave rumble effect on the joystick wheel with adjustable strength, duration, and period." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DurationMs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PeriodMs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventRumbleWheel_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventRumbleWheel_Parms, DurationMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_PeriodMs = { "PeriodMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystick_eventRumbleWheel_Parms, PeriodMs), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SDLJoystick_eventRumbleWheel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SDLJoystick_eventRumbleWheel_Parms), &Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_DurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_PeriodMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystick, nullptr, "RumbleWheel", Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::SDLJoystick_eventRumbleWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::SDLJoystick_eventRumbleWheel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystick_RumbleWheel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystick_RumbleWheel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystick::execRumbleWheel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_PROPERTY(FIntProperty,Z_Param_DurationMs);
	P_GET_PROPERTY(FIntProperty,Z_Param_PeriodMs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RumbleWheel(Z_Param_Strength,Z_Param_DurationMs,Z_Param_PeriodMs);
	P_NATIVE_END;
}
// ********** End Class USDLJoystick Function RumbleWheel ******************************************

// ********** Begin Class USDLJoystick Function StopAllForces **************************************
struct Z_Construct_UFunction_USDLJoystick_StopAllForces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Joystick|Haptics" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop all currently active haptic effects on this joystick." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystick_StopAllForces_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystick, nullptr, "StopAllForces", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystick_StopAllForces_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystick_StopAllForces_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USDLJoystick_StopAllForces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystick_StopAllForces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystick::execStopAllForces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAllForces();
	P_NATIVE_END;
}
// ********** End Class USDLJoystick Function StopAllForces ****************************************

// ********** Begin Class USDLJoystick *************************************************************
void USDLJoystick::StaticRegisterNativesUSDLJoystick()
{
	UClass* Class = USDLJoystick::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyForce", &USDLJoystick::execApplyForce },
		{ "ApplyForceLeft", &USDLJoystick::execApplyForceLeft },
		{ "ApplyForceRight", &USDLJoystick::execApplyForceRight },
		{ "GetHapticSupport", &USDLJoystick::execGetHapticSupport },
		{ "GetJoystickName", &USDLJoystick::execGetJoystickName },
		{ "RumbleWheel", &USDLJoystick::execRumbleWheel },
		{ "StopAllForces", &USDLJoystick::execStopAllForces },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDLJoystick;
UClass* USDLJoystick::GetPrivateStaticClass()
{
	using TClass = USDLJoystick;
	if (!Z_Registration_Info_UClass_USDLJoystick.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDLJoystick"),
			Z_Registration_Info_UClass_USDLJoystick.InnerSingleton,
			StaticRegisterNativesUSDLJoystick,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USDLJoystick.InnerSingleton;
}
UClass* Z_Construct_UClass_USDLJoystick_NoRegister()
{
	return USDLJoystick::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDLJoystick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * USDLJoystick\n * \n * A custom Unreal Engine ActorComponent that integrates SDL3 joystick input\n * and haptic feedback into the engine. Exposes joystick state and haptic\n * functions to Blueprints.\n */" },
#endif
		{ "IncludePath", "USDLJoystick.h" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USDLJoystick\n\nA custom Unreal Engine ActorComponent that integrates SDL3 joystick input\nand haptic feedback into the engine. Exposes joystick state and haptic\nfunctions to Blueprints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_Inner_MetaData[] = {
		{ "Category", "Joystick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of buttons owned by this joystick (instanced UObject wrappers) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of buttons owned by this joystick (instanced UObject wrappers)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[] = {
		{ "Category", "Joystick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of buttons owned by this joystick (instanced UObject wrappers) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of buttons owned by this joystick (instanced UObject wrappers)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axes_Inner_MetaData[] = {
		{ "Category", "Joystick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of axes owned by this joystick (instanced UObject wrappers) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of axes owned by this joystick (instanced UObject wrappers)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[] = {
		{ "Category", "Joystick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of axes owned by this joystick (instanced UObject wrappers) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of axes owned by this joystick (instanced UObject wrappers)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoystickName_MetaData[] = {
		{ "Category", "Joystick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal storage, exposed read-only to Blueprints\n" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal storage, exposed read-only to Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
		{ "Category", "Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystick.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buttons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buttons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Axes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Axes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_JoystickName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USDLJoystick_ApplyForce, "ApplyForce" }, // 996156655
		{ &Z_Construct_UFunction_USDLJoystick_ApplyForceLeft, "ApplyForceLeft" }, // 2753678001
		{ &Z_Construct_UFunction_USDLJoystick_ApplyForceRight, "ApplyForceRight" }, // 850151306
		{ &Z_Construct_UFunction_USDLJoystick_GetHapticSupport, "GetHapticSupport" }, // 4267772438
		{ &Z_Construct_UFunction_USDLJoystick_GetJoystickName, "GetJoystickName" }, // 1828875774
		{ &Z_Construct_UFunction_USDLJoystick_RumbleWheel, "RumbleWheel" }, // 1229192768
		{ &Z_Construct_UFunction_USDLJoystick_StopAllForces, "StopAllForces" }, // 3889118017
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDLJoystick>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USDLJoystick_Statics::NewProp_Buttons_Inner = { "Buttons", nullptr, (EPropertyFlags)0x00020000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USDLJoystickButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buttons_Inner_MetaData), NewProp_Buttons_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USDLJoystick_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystick, Buttons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buttons_MetaData), NewProp_Buttons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USDLJoystick_Statics::NewProp_Axes_Inner = { "Axes", nullptr, (EPropertyFlags)0x00020000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USDLJoystickAxis_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axes_Inner_MetaData), NewProp_Axes_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USDLJoystick_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystick, Axes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axes_MetaData), NewProp_Axes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USDLJoystick_Statics::NewProp_JoystickName = { "JoystickName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystick, JoystickName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoystickName_MetaData), NewProp_JoystickName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USDLJoystick_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystick, DeviceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceID_MetaData), NewProp_DeviceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDLJoystick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystick_Statics::NewProp_Buttons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystick_Statics::NewProp_Buttons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystick_Statics::NewProp_Axes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystick_Statics::NewProp_Axes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystick_Statics::NewProp_JoystickName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystick_Statics::NewProp_DeviceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystick_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USDLJoystick_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SDL3Integration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystick_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDLJoystick_Statics::ClassParams = {
	&USDLJoystick::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USDLJoystick_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystick_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystick_Statics::Class_MetaDataParams), Z_Construct_UClass_USDLJoystick_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDLJoystick()
{
	if (!Z_Registration_Info_UClass_USDLJoystick.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDLJoystick.OuterSingleton, Z_Construct_UClass_USDLJoystick_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDLJoystick.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDLJoystick);
USDLJoystick::~USDLJoystick() {}
// ********** End Class USDLJoystick ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h__Script_SDL3Integration_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDLJoystick, USDLJoystick::StaticClass, TEXT("USDLJoystick"), &Z_Registration_Info_UClass_USDLJoystick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDLJoystick), 1481307928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h__Script_SDL3Integration_1439136289(TEXT("/Script/SDL3Integration"),
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h__Script_SDL3Integration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h__Script_SDL3Integration_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
