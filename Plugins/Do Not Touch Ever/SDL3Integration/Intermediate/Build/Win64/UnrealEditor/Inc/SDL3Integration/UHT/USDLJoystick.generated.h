// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDLJoystick.h"

#ifdef SDL3INTEGRATION_USDLJoystick_generated_h
#error "USDLJoystick.generated.h already included, missing '#pragma once' in USDLJoystick.h"
#endif
#define SDL3INTEGRATION_USDLJoystick_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USDLJoystick *************************************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRumbleWheel); \
	DECLARE_FUNCTION(execApplyForce); \
	DECLARE_FUNCTION(execStopAllForces); \
	DECLARE_FUNCTION(execApplyForceLeft); \
	DECLARE_FUNCTION(execApplyForceRight); \
	DECLARE_FUNCTION(execGetHapticSupport); \
	DECLARE_FUNCTION(execGetJoystickName);


SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystick_NoRegister();

#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSDLJoystick(); \
	friend struct Z_Construct_UClass_USDLJoystick_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystick_NoRegister(); \
public: \
	DECLARE_CLASS2(USDLJoystick, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SDL3Integration"), Z_Construct_UClass_USDLJoystick_NoRegister) \
	DECLARE_SERIALIZER(USDLJoystick)


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USDLJoystick(USDLJoystick&&) = delete; \
	USDLJoystick(const USDLJoystick&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USDLJoystick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USDLJoystick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USDLJoystick) \
	NO_API virtual ~USDLJoystick();


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h_22_PROLOG
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USDLJoystick;

// ********** End Class USDLJoystick ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystick_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
