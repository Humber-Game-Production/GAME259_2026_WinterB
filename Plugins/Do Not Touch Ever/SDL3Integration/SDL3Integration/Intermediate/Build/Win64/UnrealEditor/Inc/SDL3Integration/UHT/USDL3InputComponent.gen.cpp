// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDL3InputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUSDL3InputComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDL3InputComponent();
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDL3InputComponent_NoRegister();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SDL3Integration();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSDLKeyPressed ******************************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnSDLKeyPressed_Parms
	{
		FString KeyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Declare the Blueprint event delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/USDL3InputComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare the Blueprint event delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnSDLKeyPressed_Parms, KeyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::NewProp_KeyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnSDLKeyPressed__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::_Script_SDL3Integration_eventOnSDLKeyPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::_Script_SDL3Integration_eventOnSDLKeyPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSDLKeyPressed_DelegateWrapper(const FMulticastScriptDelegate& OnSDLKeyPressed, const FString& KeyName)
{
	struct _Script_SDL3Integration_eventOnSDLKeyPressed_Parms
	{
		FString KeyName;
	};
	_Script_SDL3Integration_eventOnSDLKeyPressed_Parms Parms;
	Parms.KeyName=KeyName;
	OnSDLKeyPressed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSDLKeyPressed ********************************************************

// ********** Begin Class USDL3InputComponent ******************************************************
void USDL3InputComponent::StaticRegisterNativesUSDL3InputComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDL3InputComponent;
UClass* USDL3InputComponent::GetPrivateStaticClass()
{
	using TClass = USDL3InputComponent;
	if (!Z_Registration_Info_UClass_USDL3InputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDL3InputComponent"),
			Z_Registration_Info_UClass_USDL3InputComponent.InnerSingleton,
			StaticRegisterNativesUSDL3InputComponent,
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
	return Z_Registration_Info_UClass_USDL3InputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USDL3InputComponent_NoRegister()
{
	return USDL3InputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDL3InputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "USDL3InputComponent.h" },
		{ "ModuleRelativePath", "Public/USDL3InputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSDLKeyPressed_MetaData[] = {
		{ "Category", "SDL3 Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Blueprint event dispatcher\n" },
#endif
		{ "ModuleRelativePath", "Public/USDL3InputComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint event dispatcher" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSDLKeyPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDL3InputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USDL3InputComponent_Statics::NewProp_OnSDLKeyPressed = { "OnSDLKeyPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDL3InputComponent, OnSDLKeyPressed), Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSDLKeyPressed_MetaData), NewProp_OnSDLKeyPressed_MetaData) }; // 1786113868
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDL3InputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDL3InputComponent_Statics::NewProp_OnSDLKeyPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDL3InputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USDL3InputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SDL3Integration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDL3InputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDL3InputComponent_Statics::ClassParams = {
	&USDL3InputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USDL3InputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USDL3InputComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDL3InputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USDL3InputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDL3InputComponent()
{
	if (!Z_Registration_Info_UClass_USDL3InputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDL3InputComponent.OuterSingleton, Z_Construct_UClass_USDL3InputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDL3InputComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDL3InputComponent);
USDL3InputComponent::~USDL3InputComponent() {}
// ********** End Class USDL3InputComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h__Script_SDL3Integration_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDL3InputComponent, USDL3InputComponent::StaticClass, TEXT("USDL3InputComponent"), &Z_Registration_Info_UClass_USDL3InputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDL3InputComponent), 1495212152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h__Script_SDL3Integration_4199149440(TEXT("/Script/SDL3Integration"),
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h__Script_SDL3Integration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h__Script_SDL3Integration_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
