// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovementState : uint8;
#ifdef TOPDOWNSHOOTER_TopDownShooterCharacter_generated_h
#error "TopDownShooterCharacter.generated.h already included, missing '#pragma once' in TopDownShooterCharacter.h"
#endif
#define TOPDOWNSHOOTER_TopDownShooterCharacter_generated_h

#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_SPARSE_DATA
#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMovementState); \
	DECLARE_FUNCTION(execCharacterUpdate); \
	DECLARE_FUNCTION(execMovementTick); \
	DECLARE_FUNCTION(execInputAxisX); \
	DECLARE_FUNCTION(execInputAxisY);


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMovementState); \
	DECLARE_FUNCTION(execCharacterUpdate); \
	DECLARE_FUNCTION(execMovementTick); \
	DECLARE_FUNCTION(execInputAxisX); \
	DECLARE_FUNCTION(execInputAxisY);


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownShooterCharacter(); \
	friend struct Z_Construct_UClass_ATopDownShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopDownShooterCharacter)


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATopDownShooterCharacter(); \
	friend struct Z_Construct_UClass_ATopDownShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopDownShooterCharacter)


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownShooterCharacter(ATopDownShooterCharacter&&); \
	NO_API ATopDownShooterCharacter(const ATopDownShooterCharacter&); \
public:


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownShooterCharacter(ATopDownShooterCharacter&&); \
	NO_API ATopDownShooterCharacter(const ATopDownShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownShooterCharacter)


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATopDownShooterCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATopDownShooterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATopDownShooterCharacter, CursorToWorld); }


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_10_PROLOG
#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_RPC_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_INCLASS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_INCLASS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTER_API UClass* StaticClass<class ATopDownShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
