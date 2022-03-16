// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerInfo;
class UMbRGameInstance;
#ifdef MBR_ESPORTS_ServerSlotWidget_generated_h
#error "ServerSlotWidget.generated.h already included, missing '#pragma once' in ServerSlotWidget.h"
#endif
#define MBR_ESPORTS_ServerSlotWidget_generated_h

#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_SPARSE_DATA
#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnJoinButtonClicked); \
	DECLARE_FUNCTION(execOnServerInfoUpdate);


#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnJoinButtonClicked); \
	DECLARE_FUNCTION(execOnServerInfoUpdate);


#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerSlotWidget(); \
	friend struct Z_Construct_UClass_UServerSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UServerSlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(UServerSlotWidget)


#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUServerSlotWidget(); \
	friend struct Z_Construct_UClass_UServerSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UServerSlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(UServerSlotWidget)


#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerSlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerSlotWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerSlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerSlotWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerSlotWidget(UServerSlotWidget&&); \
	NO_API UServerSlotWidget(const UServerSlotWidget&); \
public:


#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerSlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerSlotWidget(UServerSlotWidget&&); \
	NO_API UServerSlotWidget(const UServerSlotWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerSlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerSlotWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerSlotWidget)


#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__serverNameText() { return STRUCT_OFFSET(UServerSlotWidget, serverNameText); } \
	FORCEINLINE static uint32 __PPO__playersNumText() { return STRUCT_OFFSET(UServerSlotWidget, playersNumText); } \
	FORCEINLINE static uint32 __PPO__lanText() { return STRUCT_OFFSET(UServerSlotWidget, lanText); } \
	FORCEINLINE static uint32 __PPO__pingText() { return STRUCT_OFFSET(UServerSlotWidget, pingText); } \
	FORCEINLINE static uint32 __PPO__joinButton() { return STRUCT_OFFSET(UServerSlotWidget, joinButton); } \
	FORCEINLINE static uint32 __PPO__arrayIndex() { return STRUCT_OFFSET(UServerSlotWidget, arrayIndex); } \
	FORCEINLINE static uint32 __PPO__mbRGameInstance() { return STRUCT_OFFSET(UServerSlotWidget, mbRGameInstance); }


#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_14_PROLOG
#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_RPC_WRAPPERS \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_INCLASS \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_INCLASS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBR_ESPORTS_API UClass* StaticClass<class UServerSlotWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MbR_eSports_Source_MbR_eSports_MainMenu_ServerSlotWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
