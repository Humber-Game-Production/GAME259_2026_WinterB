// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDLJoystickSubsystem.h"

#ifdef SDL3INTEGRATION_USDLJoystickSubsystem_generated_h
#error "USDLJoystickSubsystem.generated.h already included, missing '#pragma once' in USDLJoystickSubsystem.h"
#endif
#define SDL3INTEGRATION_USDLJoystickSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnJoystickAxisMoved **************************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_11_DELEGATE \
SDL3INTEGRATION_API void FOnJoystickAxisMoved_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickAxisMoved, int32 DeviceId, int32 Axis, int32 Value);


// ********** End Delegate FOnJoystickAxisMoved ****************************************************

// ********** Begin Delegate FOnJoystickButtonPressed **********************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_12_DELEGATE \
SDL3INTEGRATION_API void FOnJoystickButtonPressed_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickButtonPressed, int32 DeviceId, int32 Button);


// ********** End Delegate FOnJoystickButtonPressed ************************************************

// ********** Begin Delegate FOnJoystickButtonReleased *********************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_13_DELEGATE \
SDL3INTEGRATION_API void FOnJoystickButtonReleased_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickButtonReleased, int32 DeviceId, int32 Button);


// ********** End Delegate FOnJoystickButtonReleased ***********************************************

// ********** Begin Delegate FOnJoystickConnected **************************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_14_DELEGATE \
SDL3INTEGRATION_API void FOnJoystickConnected_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickConnected, int32 DeviceId);


// ********** End Delegate FOnJoystickConnected ****************************************************

// ********** Begin Delegate FOnJoystickDisconnected ***********************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_15_DELEGATE \
SDL3INTEGRATION_API void FOnJoystickDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnJoystickDisconnected, int32 DeviceId);


// ********** End Delegate FOnJoystickDisconnected *************************************************

// ********** Begin Class USDLJoystickSubsystem ****************************************************
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickSubsystem_NoRegister();

#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSDLJoystickSubsystem(); \
	friend struct Z_Construct_UClass_USDLJoystickSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USDLJoystickSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SDL3Integration"), Z_Construct_UClass_USDLJoystickSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USDLJoystickSubsystem)


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USDLJoystickSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USDLJoystickSubsystem(USDLJoystickSubsystem&&) = delete; \
	USDLJoystickSubsystem(const USDLJoystickSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USDLJoystickSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USDLJoystickSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USDLJoystickSubsystem) \
	NO_API virtual ~USDLJoystickSubsystem();


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_17_PROLOG
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USDLJoystickSubsystem;

// ********** End Class USDLJoystickSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
