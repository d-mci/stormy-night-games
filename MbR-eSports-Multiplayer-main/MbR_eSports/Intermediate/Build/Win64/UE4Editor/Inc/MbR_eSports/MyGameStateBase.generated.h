// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBR_ESPORTS_MyGameStateBase_generated_h
#error "MyGameStateBase.generated.h already included, missing '#pragma once' in MyGameStateBase.h"
#endif
#define MBR_ESPORTS_MyGameStateBase_generated_h

#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_SPARSE_DATA
#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_RPC_WRAPPERS
#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameStateBase(); \
	friend struct Z_Construct_UClass_AMyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(AMyGameStateBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		m_TeamToJoin=NETFIELD_REP_START, \
		m_TeamToMove, \
		NETFIELD_REP_END=m_TeamToMove	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameStateBase(); \
	friend struct Z_Construct_UClass_AMyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(AMyGameStateBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		m_TeamToJoin=NETFIELD_REP_START, \
		m_TeamToMove, \
		NETFIELD_REP_END=m_TeamToMove	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameStateBase(AMyGameStateBase&&); \
	NO_API AMyGameStateBase(const AMyGameStateBase&); \
public:


#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameStateBase(AMyGameStateBase&&); \
	NO_API AMyGameStateBase(const AMyGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameStateBase)


#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET
#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_13_PROLOG
#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_RPC_WRAPPERS \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_INCLASS \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_INCLASS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_MyGameStateBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBR_ESPORTS_API UClass* StaticClass<class AMyGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MbR_eSports_Source_MbR_eSports_MyGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
