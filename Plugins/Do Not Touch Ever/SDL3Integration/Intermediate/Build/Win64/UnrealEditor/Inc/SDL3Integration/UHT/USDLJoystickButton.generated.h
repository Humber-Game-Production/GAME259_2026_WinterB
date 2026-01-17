// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDLJoystickButton.h"

#ifdef SDL3INTEGRATION_USDLJoystickButton_generated_h
#error "USDLJoystickButton.generated.h already included, missing '#pragma once' in USDLJoystickButton.h"
#endif
#define SDL3INTEGRATION_USDLJoystickButton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EInputType : uint8;

// ********** Begin Delegate FOnButtonAction *******************************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_20_DELEGATE \
SDL3INTEGRATION_API void FOnButtonAction_DelegateWrapper(const FMulticastScriptDelegate& OnButtonAction, int32 ButtonID, EInputType InputType, float Duration);


// ********** End Delegate FOnButtonAction *********************************************************

// ********** Begin Class USDLJoystickButton *******************************************************
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickButton_NoRegister();

#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSDLJoystickButton(); \
	friend struct Z_Construct_UClass_USDLJoystickButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickButton_NoRegister(); \
public: \
	DECLARE_CLASS2(USDLJoystickButton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SDL3Integration"), Z_Construct_UClass_USDLJoystickButton_NoRegister) \
	DECLARE_SERIALIZER(USDLJoystickButton)


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USDLJoystickButton(USDLJoystickButton&&) = delete; \
	USDLJoystickButton(const USDLJoystickButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USDLJoystickButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USDLJoystickButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USDLJoystickButton) \
	NO_API virtual ~USDLJoystickButton();


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_22_PROLOG
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USDLJoystickButton;

// ********** End Class USDLJoystickButton *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
