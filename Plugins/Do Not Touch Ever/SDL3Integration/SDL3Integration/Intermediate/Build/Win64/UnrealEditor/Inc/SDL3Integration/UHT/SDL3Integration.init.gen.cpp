// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDL3Integration_init() {}
	SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature();
	SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature();
	SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature();
	SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature();
	SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature();
	SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature();
	SDL3INTEGRATION_API UFunction* Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SDL3Integration;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SDL3Integration()
	{
		if (!Z_Registration_Info_UPackage__Script_SDL3Integration.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SDL3Integration_OnButtonTriggered__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickAxisMoved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonPressed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickButtonReleased__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SDL3Integration_OnJoystickDisconnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SDL3Integration_OnSDLKeyPressed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SDL3Integration",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x435FE811,
				0x3FF6D652,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SDL3Integration.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SDL3Integration.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SDL3Integration(Z_Construct_UPackage__Script_SDL3Integration, TEXT("/Script/SDL3Integration"), Z_Registration_Info_UPackage__Script_SDL3Integration, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x435FE811, 0x3FF6D652));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
