// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDLJoystickAxis.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUSDLJoystickAxis() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickAxis();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickAxis_NoRegister();
SDL3INTEGRATION_API UEnum* Z_Construct_UEnum_SDL3Integration_EInputType();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SDL3Integration();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAxisTriggered ******************************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnAxisTriggered_Parms
	{
		int32 AxisID;
		EInputType inputType;
		FVector2D Value;
		float ElapsedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystickAxis.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AxisID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_inputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_inputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_AxisID = { "AxisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnAxisTriggered_Parms, AxisID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_inputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_inputType = { "inputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnAxisTriggered_Parms, inputType), Z_Construct_UEnum_SDL3Integration_EInputType, METADATA_PARAMS(0, nullptr) }; // 2069509527
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnAxisTriggered_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnAxisTriggered_Parms, ElapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_AxisID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_inputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_inputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::NewProp_ElapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnAxisTriggered__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::_Script_SDL3Integration_eventOnAxisTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::_Script_SDL3Integration_eventOnAxisTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAxisTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnAxisTriggered, int32 AxisID, EInputType inputType, FVector2D Value, float ElapsedTime)
{
	struct _Script_SDL3Integration_eventOnAxisTriggered_Parms
	{
		int32 AxisID;
		EInputType inputType;
		FVector2D Value;
		float ElapsedTime;
	};
	_Script_SDL3Integration_eventOnAxisTriggered_Parms Parms;
	Parms.AxisID=AxisID;
	Parms.inputType=inputType;
	Parms.Value=Value;
	Parms.ElapsedTime=ElapsedTime;
	OnAxisTriggered.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAxisTriggered ********************************************************

// ********** Begin Class USDLJoystickAxis *********************************************************
void USDLJoystickAxis::StaticRegisterNativesUSDLJoystickAxis()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDLJoystickAxis;
UClass* USDLJoystickAxis::GetPrivateStaticClass()
{
	using TClass = USDLJoystickAxis;
	if (!Z_Registration_Info_UClass_USDLJoystickAxis.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDLJoystickAxis"),
			Z_Registration_Info_UClass_USDLJoystickAxis.InnerSingleton,
			StaticRegisterNativesUSDLJoystickAxis,
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
	return Z_Registration_Info_UClass_USDLJoystickAxis.InnerSingleton;
}
UClass* Z_Construct_UClass_USDLJoystickAxis_NoRegister()
{
	return USDLJoystickAxis::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDLJoystickAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "USDLJoystickAxis.h" },
		{ "ModuleRelativePath", "Public/USDLJoystickAxis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAxisAction_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/USDLJoystickAxis.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAxisAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDLJoystickAxis>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDLJoystickAxis_Statics::NewProp_OnAxisAction = { "OnAxisAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDLJoystickAxis, OnAxisAction), Z_Construct_UDelegateFunction_SDL3Integration_OnAxisTriggered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAxisAction_MetaData), NewProp_OnAxisAction_MetaData) }; // 974246654
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDLJoystickAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDLJoystickAxis_Statics::NewProp_OnAxisAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickAxis_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USDLJoystickAxis_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SDL3Integration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickAxis_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDLJoystickAxis_Statics::ClassParams = {
	&USDLJoystickAxis::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USDLJoystickAxis_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickAxis_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDLJoystickAxis_Statics::Class_MetaDataParams), Z_Construct_UClass_USDLJoystickAxis_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDLJoystickAxis()
{
	if (!Z_Registration_Info_UClass_USDLJoystickAxis.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDLJoystickAxis.OuterSingleton, Z_Construct_UClass_USDLJoystickAxis_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDLJoystickAxis.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDLJoystickAxis);
USDLJoystickAxis::~USDLJoystickAxis() {}
// ********** End Class USDLJoystickAxis ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h__Script_SDL3Integration_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDLJoystickAxis, USDLJoystickAxis::StaticClass, TEXT("USDLJoystickAxis"), &Z_Registration_Info_UClass_USDLJoystickAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDLJoystickAxis), 1743045642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h__Script_SDL3Integration_4014576485(TEXT("/Script/SDL3Integration"),
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h__Script_SDL3Integration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h__Script_SDL3Integration_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
