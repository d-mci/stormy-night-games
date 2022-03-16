// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerInfo;
struct FPassedServerInfo;
#ifdef MBR_ESPORTS_MbRGameInstance_generated_h
#error "MbRGameInstance.generated.h already included, missing '#pragma once' in MbRGameInstance.h"
#endif
#define MBR_ESPORTS_MbRGameInstance_generated_h

#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_19_DELEGATE \
struct _Script_MbR_eSports_eventDelegateServerSearching_Parms \
{ \
	bool searchingForServers; \
}; \
static inline void FDelegateServerSearching_DelegateWrapper(const FMulticastScriptDelegate& DelegateServerSearching, bool searchingForServers) \
{ \
	_Script_MbR_eSports_eventDelegateServerSearching_Parms Parms; \
	Parms.searchingForServers=searchingForServers ? true : false; \
	DelegateServerSearching.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_18_DELEGATE \
struct _Script_MbR_eSports_eventDelegateCreation_Parms \
{ \
	bool successful; \
}; \
static inline void FDelegateCreation_DelegateWrapper(const FMulticastScriptDelegate& DelegateCreation, bool successful) \
{ \
	_Script_MbR_eSports_eventDelegateCreation_Parms Parms; \
	Parms.successful=successful ? true : false; \
	DelegateCreation.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_17_DELEGATE \
struct _Script_MbR_eSports_eventDelegateServer_Parms \
{ \
	FServerInfo serversListDel; \
}; \
static inline void FDelegateServer_DelegateWrapper(const FMulticastScriptDelegate& DelegateServer, FServerInfo serversListDel) \
{ \
	_Script_MbR_eSports_eventDelegateServer_Parms Parms; \
	Parms.serversListDel=serversListDel; \
	DelegateServer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_SPARSE_DATA
#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAssignSearchResults); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execFindServersOfFriends); \
	DECLARE_FUNCTION(execFindServers); \
	DECLARE_FUNCTION(execCreateServer);


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAssignSearchResults); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execFindServersOfFriends); \
	DECLARE_FUNCTION(execFindServers); \
	DECLARE_FUNCTION(execCreateServer);


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMbRGameInstance(); \
	friend struct Z_Construct_UClass_UMbRGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMbRGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(UMbRGameInstance)


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMbRGameInstance(); \
	friend struct Z_Construct_UClass_UMbRGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMbRGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(UMbRGameInstance)


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMbRGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMbRGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMbRGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMbRGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMbRGameInstance(UMbRGameInstance&&); \
	NO_API UMbRGameInstance(const UMbRGameInstance&); \
public:


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMbRGameInstance(UMbRGameInstance&&); \
	NO_API UMbRGameInstance(const UMbRGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMbRGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMbRGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMbRGameInstance)


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__defaultSessionName() { return STRUCT_OFFSET(UMbRGameInstance, defaultSessionName); }


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_21_PROLOG
#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_RPC_WRAPPERS \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_INCLASS \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_INCLASS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_MbRGameInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBR_ESPORTS_API UClass* StaticClass<class UMbRGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MbR_eSports_Source_MbR_eSports_MbRGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
