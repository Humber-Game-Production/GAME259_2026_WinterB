// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDLInputEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUSDLInputEnum() {}

// ********** Begin Cross Module References ********************************************************
SDL3INTEGRATION_API UEnum* Z_Construct_UEnum_SDL3Integration_EInputType();
UPackage* Z_Construct_UPackage__Script_SDL3Integration();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInputType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputType;
static UEnum* EInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SDL3Integration_EInputType, (UObject*)Z_Construct_UPackage__Script_SDL3Integration(), TEXT("EInputType"));
	}
	return Z_Registration_Info_UEnum_EInputType.OuterSingleton;
}
template<> SDL3INTEGRATION_API UEnum* StaticEnum<EInputType>()
{
	return EInputType_StaticEnum();
}
struct Z_Construct_UEnum_SDL3Integration_EInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COMPLETED.DisplayName", "Completed" },
		{ "COMPLETED.Name", "EInputType::COMPLETED" },
		{ "ModuleRelativePath", "Public/USDLInputEnum.h" },
		{ "ONGOING.DisplayName", "Ongoing" },
		{ "ONGOING.Name", "EInputType::ONGOING" },
		{ "STARTED.DisplayName", "Started" },
		{ "STARTED.Name", "EInputType::STARTED" },
		{ "TRIGGERED.DisplayName", "Triggered" },
		{ "TRIGGERED.Name", "EInputType::TRIGGERED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputType::TRIGGERED", (int64)EInputType::TRIGGERED },
		{ "EInputType::STARTED", (int64)EInputType::STARTED },
		{ "EInputType::COMPLETED", (int64)EInputType::COMPLETED },
		{ "EInputType::ONGOING", (int64)EInputType::ONGOING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SDL3Integration_EInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SDL3Integration,
	nullptr,
	"EInputType",
	"EInputType",
	Z_Construct_UEnum_SDL3Integration_EInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SDL3Integration_EInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SDL3Integration_EInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SDL3Integration_EInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SDL3Integration_EInputType()
{
	if (!Z_Registration_Info_UEnum_EInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputType.InnerSingleton, Z_Construct_UEnum_SDL3Integration_EInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputType.InnerSingleton;
}
// ********** End Enum EInputType ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLInputEnum_h__Script_SDL3Integration_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputType_StaticEnum, TEXT("EInputType"), &Z_Registration_Info_UEnum_EInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2069509527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLInputEnum_h__Script_SDL3Integration_3508978473(TEXT("/Script/SDL3Integration"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLInputEnum_h__Script_SDL3Integration_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLInputEnum_h__Script_SDL3Integration_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
