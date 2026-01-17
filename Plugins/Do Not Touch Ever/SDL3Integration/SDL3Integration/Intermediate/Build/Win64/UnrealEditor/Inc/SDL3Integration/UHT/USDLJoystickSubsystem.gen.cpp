// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDLJoystickSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUSDLJoystickSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickSubsystem();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickSubsystem_NoRegister();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SDL3Integration();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnJoystickAxisMoved **************************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnJoystickAxisMoved_Parms
	{
		int32 DeviceId;
		int32 Axis;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickAxisMoved_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickAxisMoved_Parms, Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickAxisMoved_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnJoystickAxisMoved__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickAxisMoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickAxisMoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoystickAxisMoved_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickAxisMoved, int32 DeviceId, int32 Axis, int32 Value)
{
	struct _Script_SDL3Integration_eventOnJoystickAxisMoved_Parms
	{
		int32 DeviceId;
		int32 Axis;
		int32 Value;
	};
	_Script_SDL3Integration_eventOnJoystickAxisMoved_Parms Parms;
	Parms.DeviceId=DeviceId;
	Parms.Axis=Axis;
	Parms.Value=Value;
	OnJoystickAxisMoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoystickAxisMoved ****************************************************

// ********** Begin Delegate FOnJoystickButtonPressed **********************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnJoystickButtonPressed_Parms
	{
		int32 DeviceId;
		int32 Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickButtonPressed_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickButtonPressed_Parms, Button), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnJoystickButtonPressed__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoystickButtonPressed_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickButtonPressed, int32 DeviceId, int32 Button)
{
	struct _Script_SDL3Integration_eventOnJoystickButtonPressed_Parms
	{
		int32 DeviceId;
		int32 Button;
	};
	_Script_SDL3Integration_eventOnJoystickButtonPressed_Parms Parms;
	Parms.DeviceId=DeviceId;
	Parms.Button=Button;
	OnJoystickButtonPressed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoystickButtonPressed ************************************************

// ********** Begin Delegate FOnJoystickButtonReleased *********************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnJoystickButtonReleased_Parms
	{
		int32 DeviceId;
		int32 Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickButtonReleased_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickButtonReleased_Parms, Button), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnJoystickButtonReleased__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickButtonReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickButtonReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoystickButtonReleased_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickButtonReleased, int32 DeviceId, int32 Button)
{
	struct _Script_SDL3Integration_eventOnJoystickButtonReleased_Parms
	{
		int32 DeviceId;
		int32 Button;
	};
	_Script_SDL3Integration_eventOnJoystickButtonReleased_Parms Parms;
	Parms.DeviceId=DeviceId;
	Parms.Button=Button;
	OnJoystickButtonReleased.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoystickButtonReleased ***********************************************

// ********** Begin Delegate FOnJoystickConnected **************************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnJoystickConnected_Parms
	{
		int32 DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickConnected_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnJoystickConnected__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoystickConnected_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickConnected, int32 DeviceId)
{
	struct _Script_SDL3Integration_eventOnJoystickConnected_Parms
	{
		int32 DeviceId;
	};
	_Script_SDL3Integration_eventOnJoystickConnected_Parms Parms;
	Parms.DeviceId=DeviceId;
	OnJoystickConnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoystickConnected ****************************************************

// ********** Begin Delegate FOnJoystickDisconnected ***********************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnJoystickDisconnected_Parms
	{
		int32 DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnJoystickDisconnected_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnJoystickDisconnected__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickDisconnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::_Script_SDL3Integration_eventOnJoystickDisconnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoystickDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickDisconnected, int32 DeviceId)
{
	struct _Script_SDL3Integration_eventOnJoystickDisconnected_Parms
	{
		int32 DeviceId;
	};
	_Script_SDL3Integration_eventOnJoystickDisconnected_Parms Parms;
	Parms.DeviceId=DeviceId;
	OnJoystickDisconnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoystickDisconnected *************************************************

// ********** Begin Class USDLJoystickSubsystem ****************************************************
void USDLJoystickSubsystem::StaticRegisterNativesUSDLJoystickSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDLJoystickSubsystem;
UClass* USDLJoystickSubsystem::GetPrivateStaticClass()
{
	using TClass = USDLJoystickSubsystem;
	if (!Z_Registration_Info_UClass_USDLJoystickSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDLJoystickSubsystem"),
			Z_Registration_Info_UClass_USDLJoystickSubsystem.InnerSingleton,
			StaticRegisterNativesUSDLJoystickSubsystem,
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
	return Z_Registration_Info_UClass_USDLJoystickSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USDLJoystickSubsystem_NoRegister()
{
	return USDLJoystickSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDLJoystickSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "USDLJoystickSubsystem.h" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAxisMoved_MetaData[] = {
		{ "Category", "SDL3 Joystick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint events\n" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonPressed_MetaData[] = {
		{ "Category", "SDL3 Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonReleased_MetaData[] = {
		{ "Category", "SDL3 Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[] = {
		{ "Category", "SDL3 Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[] = {
		{ "Category", "SDL3 Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAxisMoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonReleased;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDLJoystickSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnAxisMoved = { "OnAxisMoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickSubsystem, OnAxisMoved), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAxisMoved_MetaData), NewProp_OnAxisMoved_MetaData) }; // 3258780688
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnButtonPressed = { "OnButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickSubsystem, OnButtonPressed), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonPressed_MetaData), NewProp_OnButtonPressed_MetaData) }; // 986183086
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnButtonReleased = { "OnButtonReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickSubsystem, OnButtonReleased), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonReleased_MetaData), NewProp_OnButtonReleased_MetaData) }; // 3447262866
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickSubsystem, OnConnected), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnected_MetaData), NewProp_OnConnected_MetaData) }; // 2209507011
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickSubsystem, OnDisconnected), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDisconnected_MetaData), NewProp_OnDisconnected_MetaData) }; // 3888176532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDLJoystickSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnAxisMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnButtonReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnDisconnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USDLJoystickSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SDL3Integration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::ClassParams = {
	&USDLJoystickSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USDLJoystickSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USDLJoystickSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDLJoystickSubsystem()
{
	if (!Z_Registration_Info_UClass_USDLJoystickSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDLJoystickSubsystem.OuterSingleton, Z_Construct_UClass_USDLJoystickSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDLJoystickSubsystem.OuterSingleton;
}
USDLJoystickSubsystem::USDLJoystickSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDLJoystickSubsystem);
USDLJoystickSubsystem::~USDLJoystickSubsystem() {}
// ********** End Class USDLJoystickSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h__Script_SDL3Integration_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDLJoystickSubsystem, USDLJoystickSubsystem::StaticClass, TEXT("USDLJoystickSubsystem"), &Z_Registration_Info_UClass_USDLJoystickSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDLJoystickSubsystem), 322588526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h__Script_SDL3Integration_2176046964(TEXT("/Script/SDL3Integration"),
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h__Script_SDL3Integration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h__Script_SDL3Integration_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
