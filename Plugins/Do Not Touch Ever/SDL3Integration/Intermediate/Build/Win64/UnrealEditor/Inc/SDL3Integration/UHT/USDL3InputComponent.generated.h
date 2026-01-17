// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDL3InputComponent.h"

#ifdef SDL3INTEGRATION_USDL3InputComponent_generated_h
#error "USDL3InputComponent.generated.h already included, missing '#pragma once' in USDL3InputComponent.h"
#endif
#define SDL3INTEGRATION_USDL3InputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnSDLKeyPressed ******************************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h_8_DELEGATE \
SDL3INTEGRATION_API void FOnSDLKeyPressed_DelegateWrapper(const FMulticastScriptDelegate& OnSDLKeyPressed, const FString& KeyName);


// ********** End Delegate FOnSDLKeyPressed ********************************************************

// ********** Begin Class USDL3InputComponent ******************************************************
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDL3InputComponent_NoRegister();

#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSDL3InputComponent(); \
	friend struct Z_Construct_UClass_USDL3InputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDL3InputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USDL3InputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SDL3Integration"), Z_Construct_UClass_USDL3InputComponent_NoRegister) \
	DECLARE_SERIALIZER(USDL3InputComponent)


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USDL3InputComponent(USDL3InputComponent&&) = delete; \
	USDL3InputComponent(const USDL3InputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USDL3InputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USDL3InputComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USDL3InputComponent) \
	NO_API virtual ~USDL3InputComponent();


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h_10_PROLOG
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USDL3InputComponent;

// ********** End Class USDL3InputComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDL3InputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
