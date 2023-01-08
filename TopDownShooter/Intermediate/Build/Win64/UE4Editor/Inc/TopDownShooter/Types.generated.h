// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNSHOOTER_Types_generated_h
#error "Types.generated.h already included, missing '#pragma once' in Types.h"
#endif
#define TOPDOWNSHOOTER_Types_generated_h

#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterSpeed_Statics; \
	TOPDOWNSHOOTER_API static class UScriptStruct* StaticStruct();


template<> TOPDOWNSHOOTER_API UScriptStruct* StaticStruct<struct FCharacterSpeed>();

#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_SPARSE_DATA
#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_RPC_WRAPPERS
#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public:


#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes)


#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_PRIVATE_PROPERTY_OFFSET
#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_31_PROLOG
#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_RPC_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_INCLASS \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_INCLASS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTER_API UClass* StaticClass<class UTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooter_Source_TopDownShooter_FunctionLibrary_Types_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Aim_State) \
	op(EMovementState::Walk_State) \
	op(EMovementState::Run_State) 

enum class EMovementState : uint8;
template<> TOPDOWNSHOOTER_API UEnum* StaticEnum<EMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
