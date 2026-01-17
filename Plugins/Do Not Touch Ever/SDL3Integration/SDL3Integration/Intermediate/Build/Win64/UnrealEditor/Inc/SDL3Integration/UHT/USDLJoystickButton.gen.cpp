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
SDL3INTEGRATION_API UEnum* Z_Construct_UEnum_SDL3Integration_EOutputs();
SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SDL3Integration();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnButtonTriggered ****************************************************
struct Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics
{
	struct _Script_SDL3Integration_eventOnButtonTriggered_Parms
	{
		int32 ButtonID;
		bool value;
		float elapsedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/USDLJoystickButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonID;
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_elapsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::NewProp_ButtonID = { "ButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnButtonTriggered_Parms, ButtonID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::NewProp_value_SetBit(void* Obj)
{
	((_Script_SDL3Integration_eventOnButtonTriggered_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SDL3Integration_eventOnButtonTriggered_Parms), &Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::NewProp_elapsedTime = { "elapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SDL3Integration_eventOnButtonTriggered_Parms, elapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::NewProp_ButtonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::NewProp_elapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration, nullptr, "OnButtonTriggered__DelegateSignature", Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::_Script_SDL3Integration_eventOnButtonTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::_Script_SDL3Integration_eventOnButtonTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnButtonTriggered, int32 ButtonID, bool value, float elapsedTime)
{
	struct _Script_SDL3Integration_eventOnButtonTriggered_Parms
	{
		int32 ButtonID;
		bool value;
		float elapsedTime;
	};
	_Script_SDL3Integration_eventOnButtonTriggered_Parms Parms;
	Parms.ButtonID=ButtonID;
	Parms.value=value ? true : false;
	Parms.elapsedTime=elapsedTime;
	OnButtonTriggered.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnButtonTriggered ******************************************************

// ********** Begin Enum EOutputs ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputs;
static UEnum* EOutputs_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOutputs.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOutputs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SDL3Integration_EOutputs, (UObject*)Z_Construct_UPackage__Script_SDL3Integration(), TEXT("EOutputs"));
	}
	return Z_Registration_Info_UEnum_EOutputs.OuterSingleton;
}
template<> SDL3INTEGRATION_API UEnum* StaticEnum<EOutputs>()
{
	return EOutputs_StaticEnum();
}
struct Z_Construct_UEnum_SDL3Integration_EOutputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDLJoystickButton.h" },
		{ "OutputFour.DisplayName", "Ongoing" },
		{ "OutputFour.Name", "EOutputs::OutputFour" },
		{ "OutputOne.DisplayName", "Triggered" },
		{ "OutputOne.Name", "EOutputs::OutputOne" },
		{ "OutputThree.DisplayName", "Completed" },
		{ "OutputThree.Name", "EOutputs::OutputThree" },
		{ "OutputTwo.DisplayName", "Started" },
		{ "OutputTwo.Name", "EOutputs::OutputTwo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOutputs::OutputOne", (int64)EOutputs::OutputOne },
		{ "EOutputs::OutputTwo", (int64)EOutputs::OutputTwo },
		{ "EOutputs::OutputThree", (int64)EOutputs::OutputThree },
		{ "EOutputs::OutputFour", (int64)EOutputs::OutputFour },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SDL3Integration_EOutputs_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration,
	nullptr,
	"EOutputs",
	"EOutputs",
	Z_Construct_UEnum_SDL3Integration_EOutputs_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SDL3Integration_EOutputs_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SDL3Integration_EOutputs_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SDL3Integration_EOutputs_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SDL3Integration_EOutputs()
{
	if (!Z_Registration_Info_UEnum_EOutputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputs.InnerSingleton, Z_Construct_UEnum_SDL3Integration_EOutputs_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOutputs.InnerSingleton;
}
// ********** End Enum EOutputs ********************************************************************

// ********** Begin Class USDLJoystickButton Function Implementable ********************************
static FName NAME_USDLJoystickButton_Implementable = FName(TEXT("Implementable"));
void USDLJoystickButton::Implementable()
{
	UFunction* Func = FindFunctionChecked(NAME_USDLJoystickButton_Implementable);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USDLJoystickButton_Implementable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/USDLJoystickButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystickButton_Implementable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystickButton, nullptr, "Implementable", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickButton_Implementable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystickButton_Implementable_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USDLJoystickButton_Implementable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystickButton_Implementable_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USDLJoystickButton Function Implementable **********************************

// ********** Begin Class USDLJoystickButton Function InputEventSDL3 *******************************
struct SDLJoystickButton_eventInputEventSDL3_Parms
{
	EOutputs OutputPins;
};
static FName NAME_USDLJoystickButton_InputEventSDL3 = FName(TEXT("InputEventSDL3"));
void USDLJoystickButton::InputEventSDL3(EOutputs& OutputPins)
{
	UFunction* Func = FindFunctionChecked(NAME_USDLJoystickButton_InputEventSDL3);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SDLJoystickButton_eventInputEventSDL3_Parms Parms;
		Parms.OutputPins=OutputPins;
	ProcessEvent(Func,&Parms);
		OutputPins=Parms.OutputPins;
	}
	else
	{
		InputEventSDL3_Implementation(OutputPins);
	}
}
struct Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ExpandEnumAsExecs", "OutputPins" },
		{ "ModuleRelativePath", "Public/USDLJoystickButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputPins_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputPins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::NewProp_OutputPins_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SDLJoystickButton_eventInputEventSDL3_Parms, OutputPins), Z_Construct_UEnum_SDL3Integration_EOutputs, METADATA_PARAMS(0, nullptr) }; // 924178702
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::NewProp_OutputPins_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::NewProp_OutputPins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USDLJoystickButton, nullptr, "InputEventSDL3", Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::PropPointers), sizeof(SDLJoystickButton_eventInputEventSDL3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::Function_MetaDataParams), Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SDLJoystickButton_eventInputEventSDL3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USDLJoystickButton::execInputEventSDL3)
{
	P_GET_ENUM_REF(EOutputs,Z_Param_Out_OutputPins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InputEventSDL3_Implementation((EOutputs&)(Z_Param_Out_OutputPins));
	P_NATIVE_END;
}
// ********** End Class USDLJoystickButton Function InputEventSDL3 *********************************

// ********** Begin Class USDLJoystickButton *******************************************************
void USDLJoystickButton::StaticRegisterNativesUSDLJoystickButton()
{
	UClass* Class = USDLJoystickButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InputEventSDL3", &USDLJoystickButton::execInputEventSDL3 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "IncludePath", "USDLJoystickButton.h" },
		{ "ModuleRelativePath", "Public/USDLJoystickButton.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USDLJoystickButton_Implementable, "Implementable" }, // 2763476646
		{ &Z_Construct_UFunction_USDLJoystickButton_InputEventSDL3, "InputEventSDL3" }, // 1170177874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDLJoystickButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
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
struct Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOutputs_StaticEnum, TEXT("EOutputs"), &Z_Registration_Info_UEnum_EOutputs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 924178702U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDLJoystickButton, USDLJoystickButton::StaticClass, TEXT("USDLJoystickButton"), &Z_Registration_Info_UClass_USDLJoystickButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDLJoystickButton), 3259173830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_4251005873(TEXT("/Script/SDL3Integration"),
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h__Script_SDL3Integration_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
