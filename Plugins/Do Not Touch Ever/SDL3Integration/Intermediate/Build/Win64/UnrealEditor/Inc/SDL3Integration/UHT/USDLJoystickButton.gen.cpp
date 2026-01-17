// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDLJoystickButton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUSDLJoystickButton() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickButton();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickButton_NoRegister();
SDL3INTEGRATION_API UEnum* Z_Construct_UEnum_SDL3Integration_EInputType();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SDL3Integration();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnButtonAction *******************************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnButtonAction_Parms
	{
		int32 ButtonID;
		EInputType InputType;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * USDLJoystickButton\n * Represents a joystick button in your SDL3 integration.\n * Tracks button state, press duration, and broadcasts events to Blueprint.\n */// Delegate definition: allows broadcasting button events to Blueprint or C++ listeners.\n// Parameters: ButtonID (which button), InputType (STARTED/TRIGGERED/COMPLETED), Duration (time held).\n" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystickButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USDLJoystickButton\nRepresents a joystick button in your SDL3 integration.\nTracks button state, press duration, and broadcasts events to Blueprint.\n // Delegate definition: allows broadcasting button events to Blueprint or C++ listeners.\n// Parameters: ButtonID (which button), InputType (STARTED/TRIGGERED/COMPLETED), Duration (time held)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::NewProp_ButtonID = { "ButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnButtonAction_Parms, ButtonID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnButtonAction_Parms, InputType), Z_Construct_UEnum_SDL3Integration_EInputType, METADATA_PARAMS(0, nullptr) }; // 2069509527
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnButtonAction_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::NewProp_ButtonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::NewProp_InputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::NewProp_InputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnButtonAction__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::_Script_SDL3Integration_eventOnButtonAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::_Script_SDL3Integration_eventOnButtonAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonAction_DelegateWrapper(const FMulticastScriptDelegate& OnButtonAction, int32 ButtonID, EInputType InputType, float Duration)
{
	struct _Script_SDL3Integration_eventOnButtonAction_Parms
	{
		int32 ButtonID;
		EInputType InputType;
		float Duration;
	};
	_Script_SDL3Integration_eventOnButtonAction_Parms Parms;
	Parms.ButtonID=ButtonID;
	Parms.InputType=InputType;
	Parms.Duration=Duration;
	OnButtonAction.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnButtonAction *********************************************************

// ********** Begin Class USDLJoystickButton *******************************************************
void USDLJoystickButton::StaticRegisterNativesUSDLJoystickButton()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDLJoystickButton;
UClass* USDLJoystickButton::GetPrivateStaticClass()
{
	using TClass = USDLJoystickButton;
	if (!Z_Registration_Info_UClass_USDLJoystickButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDLJoystickButton"),
			Z_Registration_Info_UClass_USDLJoystickButton.InnerSingleton,
			StaticRegisterNativesUSDLJoystickButton,
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
	return Z_Registration_Info_UClass_USDLJoystickButton.InnerSingleton;
}
UClass* Z_Construct_UClass_USDLJoystickButton_NoRegister()
{
	return USDLJoystickButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDLJoystickButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "USDLJoystickButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/USDLJoystickButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonAction_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/USDLJoystickButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcasts when this joystick button changes state. Use InputType to distinguish STARTED, TRIGGERED, and COMPLETED. You can split off the enum into more specific input types if needed for your project." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDLJoystickButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickButton_Statics::NewProp_OnButtonAction = { "OnButtonAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickButton, OnButtonAction), Z_Construct_UDelegateFunction_SDL3Integration_OnButtonAction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonAction_MetaData), NewProp_OnButtonAction_MetaData) }; // 1132480297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDLJoystickButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickButton_Statics::NewProp_OnButtonAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USDLJoystickButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SDL3Integration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDLJoystickButton_Statics::ClassParams = {
	&USDLJoystickButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USDLJoystickButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickButton_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickButton_Statics::Class_MetaDataParams), Z_Construct_UClass_USDLJoystickButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDLJoystickButton()
{
	if (!Z_Registration_Info_UClass_USDLJoystickButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDLJoystickButton.OuterSingleton, Z_Construct_UClass_USDLJoystickButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDLJoystickButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDLJoystickButton);
USDLJoystickButton::~USDLJoystickButton() {}
// ********** End Class USDLJoystickButton *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDLJoystickButton, USDLJoystickButton::StaticClass, TEXT("USDLJoystickButton"), &Z_Registration_Info_UClass_USDLJoystickButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDLJoystickButton), 1750775434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_590215160(TEXT("/Script/SDL3Integration"),
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
