// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_BaseClass_generated_h
#error "BaseClass.generated.h already included, missing '#pragma once' in BaseClass.h"
#endif
#define MYPROJECT_BaseClass_generated_h

#define MyProject_Source_MyProject_BaseClass_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_Fclass_stats_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct Fclass_stats>();

#define MyProject_Source_MyProject_BaseClass_h_44_SPARSE_DATA
#define MyProject_Source_MyProject_BaseClass_h_44_RPC_WRAPPERS
#define MyProject_Source_MyProject_BaseClass_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_BaseClass_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseClass(); \
	friend struct Z_Construct_UClass_ABaseClass_Statics; \
public: \
	DECLARE_CLASS(ABaseClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseClass)


#define MyProject_Source_MyProject_BaseClass_h_44_INCLASS \
private: \
	static void StaticRegisterNativesABaseClass(); \
	friend struct Z_Construct_UClass_ABaseClass_Statics; \
public: \
	DECLARE_CLASS(ABaseClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseClass)


#define MyProject_Source_MyProject_BaseClass_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseClass(ABaseClass&&); \
	NO_API ABaseClass(const ABaseClass&); \
public:


#define MyProject_Source_MyProject_BaseClass_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseClass(ABaseClass&&); \
	NO_API ABaseClass(const ABaseClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseClass)


#define MyProject_Source_MyProject_BaseClass_h_44_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_BaseClass_h_40_PROLOG
#define MyProject_Source_MyProject_BaseClass_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BaseClass_h_44_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BaseClass_h_44_SPARSE_DATA \
	MyProject_Source_MyProject_BaseClass_h_44_RPC_WRAPPERS \
	MyProject_Source_MyProject_BaseClass_h_44_INCLASS \
	MyProject_Source_MyProject_BaseClass_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_BaseClass_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BaseClass_h_44_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BaseClass_h_44_SPARSE_DATA \
	MyProject_Source_MyProject_BaseClass_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BaseClass_h_44_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BaseClass_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABaseClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_BaseClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
