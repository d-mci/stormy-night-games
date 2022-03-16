// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerInfo;
#ifdef MBR_ESPORTS_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define MBR_ESPORTS_MainMenuWidget_generated_h

#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_SPARSE_DATA
#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExitButtonClicked); \
	DECLARE_FUNCTION(execOnBackButtonClicked); \
	DECLARE_FUNCTION(execSearchingForServers); \
	DECLARE_FUNCTION(execCreateServerSlotWidget); \
	DECLARE_FUNCTION(execOnMaxPlayersSliderChanged); \
	DECLARE_FUNCTION(execOnHostCustomServerButtonClicked); \
	DECLARE_FUNCTION(execOnRefreshServersButtonClicked); \
	DECLARE_FUNCTION(execOnServersListButtonClicked); \
	DECLARE_FUNCTION(execOnCustomServerButtonClicked);


#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExitButtonClicked); \
	DECLARE_FUNCTION(execOnBackButtonClicked); \
	DECLARE_FUNCTION(execSearchingForServers); \
	DECLARE_FUNCTION(execCreateServerSlotWidget); \
	DECLARE_FUNCTION(execOnMaxPlayersSliderChanged); \
	DECLARE_FUNCTION(execOnHostCustomServerButtonClicked); \
	DECLARE_FUNCTION(execOnRefreshServersButtonClicked); \
	DECLARE_FUNCTION(execOnServersListButtonClicked); \
	DECLARE_FUNCTION(execOnCustomServerButtonClicked);


#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__customServerButton() { return STRUCT_OFFSET(UMainMenuWidget, customServerButton); } \
	FORCEINLINE static uint32 __PPO__serversListButton() { return STRUCT_OFFSET(UMainMenuWidget, serversListButton); } \
	FORCEINLINE static uint32 __PPO__refreshServersButton() { return STRUCT_OFFSET(UMainMenuWidget, refreshServersButton); } \
	FORCEINLINE static uint32 __PPO__backButton() { return STRUCT_OFFSET(UMainMenuWidget, backButton); } \
	FORCEINLINE static uint32 __PPO__exitButton() { return STRUCT_OFFSET(UMainMenuWidget, exitButton); } \
	FORCEINLINE static uint32 __PPO__customHostButton() { return STRUCT_OFFSET(UMainMenuWidget, customHostButton); } \
	FORCEINLINE static uint32 __PPO__customServerBackButton() { return STRUCT_OFFSET(UMainMenuWidget, customServerBackButton); } \
	FORCEINLINE static uint32 __PPO__widgetSwitcherServerList() { return STRUCT_OFFSET(UMainMenuWidget, widgetSwitcherServerList); } \
	FORCEINLINE static uint32 __PPO__serverListScrollBox() { return STRUCT_OFFSET(UMainMenuWidget, serverListScrollBox); } \
	FORCEINLINE static uint32 __PPO__serverNameEditableTextBox() { return STRUCT_OFFSET(UMainMenuWidget, serverNameEditableTextBox); } \
	FORCEINLINE static uint32 __PPO__maxPlayersNumSlider() { return STRUCT_OFFSET(UMainMenuWidget, maxPlayersNumSlider); } \
	FORCEINLINE static uint32 __PPO__lanCheckBox() { return STRUCT_OFFSET(UMainMenuWidget, lanCheckBox); } \
	FORCEINLINE static uint32 __PPO__maxPlayersNumText() { return STRUCT_OFFSET(UMainMenuWidget, maxPlayersNumText); } \
	FORCEINLINE static uint32 __PPO__mbRGameInstance() { return STRUCT_OFFSET(UMainMenuWidget, mbRGameInstance); } \
	FORCEINLINE static uint32 __PPO__serverSlotWidget() { return STRUCT_OFFSET(UMainMenuWidget, serverSlotWidget); } \
	FORCEINLINE static uint32 __PPO__initialSearchForServers() { return STRUCT_OFFSET(UMainMenuWidget, initialSearchForServers); }


#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_15_PROLOG
#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_RPC_WRAPPERS \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_INCLASS \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_INCLASS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBR_ESPORTS_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MbR_eSports_Source_MbR_eSports_MainMenu_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
