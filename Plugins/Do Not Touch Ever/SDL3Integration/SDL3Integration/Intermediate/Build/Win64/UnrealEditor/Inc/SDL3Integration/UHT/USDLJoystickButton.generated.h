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

enum class EOutputs : uint8;

// ********** Begin Delegate FOnButtonTriggered ****************************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_12_DELEGATE \
SDL3INTEGRATION_API void FOnButtonTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnButtonTriggered, int32 ButtonID, bool value, float elapsedTime);


// ********** End Delegate FOnButtonTriggered ******************************************************

// ********** Begin Class USDLJoystickButton *******************************************************
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InputEventSDL3_Implementation(EOutputs& OutputPins); \
	DECLARE_FUNCTION(execInputEventSDL3);


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_CALLBACK_WRAPPERS
SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickButton_NoRegister();

#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSDLJoystickButton(); \
	friend struct Z_Construct_UClass_USDLJoystickButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SDL3INTEGRATION_API UClass* Z_Construct_UClass_USDLJoystickButton_NoRegister(); \
public: \
	DECLARE_CLASS2(USDLJoystickButton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SDL3Integration"), Z_Construct_UClass_USDLJoystickButton_NoRegister) \
	DECLARE_SERIALIZER(USDLJoystickButton)


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USDLJoystickButton(USDLJoystickButton&&) = delete; \
	USDLJoystickButton(const USDLJoystickButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USDLJoystickButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USDLJoystickButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USDLJoystickButton) \
	NO_API virtual ~USDLJoystickButton();


#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_24_PROLOG
#define FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_CALLBACK_WRAPPERS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USDLJoystickButton;

// ********** End Class USDLJoystickButton *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DLLTest_1028_AL_2_Plugins_SDL3Integration_SDL3Integration_Source_SDL3Integration_Public_USDLJoystickButton_h

// ********** Begin Enum EOutputs ******************************************************************
#define FOREACH_ENUM_EOUTPUTS(op) \
	op(EOutputs::OutputOne) \
	op(EOutputs::OutputTwo) \
	op(EOutputs::OutputThree) \
	op(EOutputs::OutputFour) 

enum class EOutputs : uint8;
template<> struct TIsUEnumClass<EOutputs> { enum { Value = true }; };
template<> SDL3INTEGRATION_API UEnum* StaticEnum<EOutputs>();
// ********** End Enum EOutputs ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
