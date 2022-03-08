// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Rogue_generated_h
#error "Rogue.generated.h already included, missing '#pragma once' in Rogue.h"
#endif
#define MYPROJECT_Rogue_generated_h

#define MyProject_Source_MyProject_Rogue_h_15_SPARSE_DATA
#define MyProject_Source_MyProject_Rogue_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetAP); \
	DECLARE_FUNCTION(execsetAP); \
	DECLARE_FUNCTION(execgetHealth); \
	DECLARE_FUNCTION(execsetHealth);


#define MyProject_Source_MyProject_Rogue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetAP); \
	DECLARE_FUNCTION(execsetAP); \
	DECLARE_FUNCTION(execgetHealth); \
	DECLARE_FUNCTION(execsetHealth);


#define MyProject_Source_MyProject_Rogue_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARogue(); \
	friend struct Z_Construct_UClass_ARogue_Statics; \
public: \
	DECLARE_CLASS(ARogue, ABaseClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ARogue)


#define MyProject_Source_MyProject_Rogue_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARogue(); \
	friend struct Z_Construct_UClass_ARogue_Statics; \
public: \
	DECLARE_CLASS(ARogue, ABaseClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ARogue)


#define MyProject_Source_MyProject_Rogue_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARogue(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARogue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARogue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARogue(ARogue&&); \
	NO_API ARogue(const ARogue&); \
public:


#define MyProject_Source_MyProject_Rogue_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARogue(ARogue&&); \
	NO_API ARogue(const ARogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARogue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARogue)


#define MyProject_Source_MyProject_Rogue_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_Rogue_h_12_PROLOG
#define MyProject_Source_MyProject_Rogue_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Rogue_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Rogue_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_Rogue_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_Rogue_h_15_INCLASS \
	MyProject_Source_MyProject_Rogue_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Rogue_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Rogue_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Rogue_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_Rogue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Rogue_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Rogue_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ARogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Rogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
