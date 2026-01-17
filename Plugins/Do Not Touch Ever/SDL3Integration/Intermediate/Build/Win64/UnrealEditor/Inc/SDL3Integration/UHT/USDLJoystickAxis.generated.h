// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDLJoystickAxis.h"

#ifdef SDL3INTEGRATION_USDLJoystickAxis_generated_h
#error "USDLJoystickAxis.generated.h already included, missing '#pragma once' in USDLJoystickAxis.h"
#endif
#define SDL3INTEGRATION_USDLJoystickAxis_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EInputType : uint8;

// ********** Begin Delegate FOnAxisTriggered ******************************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h_13_DELEGATE \
SDL3INTEGRATION_API void FOnAxisTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnAxisTriggered, int32 AxisID, EInputType inputType, FVector2D Value, float ElapsedTime);


// ********** End Delegate FOnAxisTriggered ********************************************************

// ********** Begin Class USDLJoystickAxis *********************************************************
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickAxis_NoRegister();

#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSDLJoystickAxis(); \
	friend struct Z_Construct_UClass_USDLJoystickAxis_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickAxis_NoRegister(); \
public: \
	DECLARE_CLASS2(USDLJoystickAxis, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SDL3Integration"), Z_Construct_UClass_USDLJoystickAxis_NoRegister) \
	DECLARE_SERIALIZER(USDLJoystickAxis)


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USDLJoystickAxis(USDLJoystickAxis&&) = delete; \
	USDLJoystickAxis(const USDLJoystickAxis&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USDLJoystickAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USDLJoystickAxis); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USDLJoystickAxis) \
	NO_API virtual ~USDLJoystickAxis();


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h_18_PROLOG
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USDLJoystickAxis;

// ********** End Class USDLJoystickAxis ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickAxis_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
