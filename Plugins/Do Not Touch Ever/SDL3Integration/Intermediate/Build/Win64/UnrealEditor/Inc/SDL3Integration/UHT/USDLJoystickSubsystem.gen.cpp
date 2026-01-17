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
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystick_NoRegister();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickSubsystem();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickSubsystem_NoRegister();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SDL3Integration();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnJoystickConnected **************************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnJoystickConnected_Parms
	{
		int32 DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Triggered when a joystick is connected\n" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when a joystick is connected" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Triggered when a joystick is disconnected\n" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when a joystick is disconnected" },
#endif
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

// ********** Begin Class USDLJoystickSubsystem Function GetJoystickComponentByID ******************
struct Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics
{
	struct SDLJoystickSubsystem_eventGetJoystickComponentByID_Parms
	{
		int32 DeviceId;
		USDLJoystick* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL3 Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the joystick component for the given Device ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystickSubsystem_eventGetJoystickComponentByID_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystickSubsystem_eventGetJoystickComponentByID_Parms, ReturnValue), Z_Construct_UClass_USDLJoystick_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystickSubsystem, nullptr, "GetJoystickComponentByID", Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::SDLJoystickSubsystem_eventGetJoystickComponentByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::SDLJoystickSubsystem_eventGetJoystickComponentByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystickSubsystem::execGetJoystickComponentByID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USDLJoystick**)Z_Param__Result=P_THIS->GetJoystickComponentByID(Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class USDLJoystickSubsystem Function GetJoystickComponentByID ********************

// ********** Begin Class USDLJoystickSubsystem Function GetJoystickComponentByName ****************
struct Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics
{
	struct SDLJoystickSubsystem_eventGetJoystickComponentByName_Parms
	{
		FName DeviceName;
		int32 ID;
		USDLJoystick* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDL3 Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a joystick by name and returns its component. Also outputs the Device ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystickSubsystem_eventGetJoystickComponentByName_Parms, DeviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystickSubsystem_eventGetJoystickComponentByName_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystickSubsystem_eventGetJoystickComponentByName_Parms, ReturnValue), Z_Construct_UClass_USDLJoystick_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystickSubsystem, nullptr, "GetJoystickComponentByName", Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::SDLJoystickSubsystem_eventGetJoystickComponentByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::SDLJoystickSubsystem_eventGetJoystickComponentByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystickSubsystem::execGetJoystickComponentByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_DeviceName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USDLJoystick**)Z_Param__Result=P_THIS->GetJoystickComponentByName(Z_Param_DeviceName,Z_Param_Out_ID);
	P_NATIVE_END;
}
// ********** End Class USDLJoystickSubsystem Function GetJoystickComponentByName ******************

// ********** Begin Class USDLJoystickSubsystem ****************************************************
void USDLJoystickSubsystem::StaticRegisterNativesUSDLJoystickSubsystem()
{
	UClass* Class = USDLJoystickSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetJoystickComponentByID", &USDLJoystickSubsystem::execGetJoystickComponentByID },
		{ "GetJoystickComponentByName", &USDLJoystickSubsystem::execGetJoystickComponentByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------- Subsystem Class --------------------\n" },
#endif
		{ "IncludePath", "USDLJoystickSubsystem.h" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------- Subsystem Class --------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnJoystickDisconnected_MetaData[] = {
		{ "Category", "SDL3 Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event fired when a joystick is disconnected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnJoystickConnected_MetaData[] = {
		{ "Category", "SDL3 Joystick" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event fired when a joystick is connected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoystickComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of DeviceId -> Joystick component (Unreal representation of joystick)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/USDLJoystickSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of DeviceId -> Joystick component (Unreal representation of joystick)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoystickDisconnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoystickConnected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JoystickComponents_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JoystickComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_JoystickComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByID, "GetJoystickComponentByID" }, // 1314605847
		{ &Z_Construct_UFunction_USDLJoystickSubsystem_GetJoystickComponentByName, "GetJoystickComponentByName" }, // 1673298141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDLJoystickSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnJoystickDisconnected = { "OnJoystickDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickSubsystem, OnJoystickDisconnected), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJoystickDisconnected_MetaData), NewProp_OnJoystickDisconnected_MetaData) }; // 1692471724
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnJoystickConnected = { "OnJoystickConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickSubsystem, OnJoystickConnected), Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJoystickConnected_MetaData), NewProp_OnJoystickConnected_MetaData) }; // 669846038
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_JoystickComponents_ValueProp = { "JoystickComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USDLJoystick_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_JoystickComponents_Key_KeyProp = { "JoystickComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_JoystickComponents = { "JoystickComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickSubsystem, JoystickComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoystickComponents_MetaData), NewProp_JoystickComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDLJoystickSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnJoystickDisconnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_OnJoystickConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_JoystickComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_JoystickComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickSubsystem_Statics::NewProp_JoystickComponents,
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
	FuncInfo,
	Z_Construct_UClass_USDLJoystickSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h__Script_SDL3Integration_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDLJoystickSubsystem, USDLJoystickSubsystem::StaticClass, TEXT("USDLJoystickSubsystem"), &Z_Registration_Info_UClass_USDLJoystickSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDLJoystickSubsystem), 4287576098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h__Script_SDL3Integration_2394759305(TEXT("/Script/SDL3Integration"),
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h__Script_SDL3Integration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h__Script_SDL3Integration_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
