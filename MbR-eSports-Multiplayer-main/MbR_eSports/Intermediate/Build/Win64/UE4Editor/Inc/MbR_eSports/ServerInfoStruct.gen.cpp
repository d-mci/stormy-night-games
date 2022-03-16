// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MbR_eSports/ServerInfoStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerInfoStruct() {}
// Cross Module References
	MBR_ESPORTS_API UScriptStruct* Z_Construct_UScriptStruct_FPassedServerInfo();
	UPackage* Z_Construct_UPackage__Script_MbR_eSports();
	MBR_ESPORTS_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
// End Cross Module References
class UScriptStruct* FPassedServerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBR_ESPORTS_API uint32 Get_Z_Construct_UScriptStruct_FPassedServerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassedServerInfo, Z_Construct_UPackage__Script_MbR_eSports(), TEXT("PassedServerInfo"), sizeof(FPassedServerInfo), Get_Z_Construct_UScriptStruct_FPassedServerInfo_Hash());
	}
	return Singleton;
}
template<> MBR_ESPORTS_API UScriptStruct* StaticStruct<FPassedServerInfo>()
{
	return FPassedServerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassedServerInfo(FPassedServerInfo::StaticStruct, TEXT("/Script/MbR_eSports"), TEXT("PassedServerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MbR_eSports_StaticRegisterNativesFPassedServerInfo
{
	FScriptStruct_MbR_eSports_StaticRegisterNativesFPassedServerInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PassedServerInfo")),new UScriptStruct::TCppStructOps<FPassedServerInfo>);
	}
} ScriptStruct_MbR_eSports_StaticRegisterNativesFPassedServerInfo;
	struct Z_Construct_UScriptStruct_FPassedServerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLan_MetaData[];
#endif
		static void NewProp_isLan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassedServerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassedServerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_serverName_MetaData[] = {
		{ "Category", "PassedServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_serverName = { "serverName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassedServerInfo, serverName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_serverName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_serverName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_maxPlayers_MetaData[] = {
		{ "Category", "PassedServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_maxPlayers = { "maxPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassedServerInfo, maxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_maxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_maxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_isLan_MetaData[] = {
		{ "Category", "PassedServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_isLan_SetBit(void* Obj)
	{
		((FPassedServerInfo*)Obj)->isLan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_isLan = { "isLan", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPassedServerInfo), &Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_isLan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_isLan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_isLan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassedServerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_serverName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_maxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassedServerInfo_Statics::NewProp_isLan,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassedServerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MbR_eSports,
		nullptr,
		&NewStructOps,
		"PassedServerInfo",
		sizeof(FPassedServerInfo),
		alignof(FPassedServerInfo),
		Z_Construct_UScriptStruct_FPassedServerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassedServerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPassedServerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassedServerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MbR_eSports();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassedServerInfo"), sizeof(FPassedServerInfo), Get_Z_Construct_UScriptStruct_FPassedServerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPassedServerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassedServerInfo_Hash() { return 1499977343U; }
class UScriptStruct* FServerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBR_ESPORTS_API uint32 Get_Z_Construct_UScriptStruct_FServerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerInfo, Z_Construct_UPackage__Script_MbR_eSports(), TEXT("ServerInfo"), sizeof(FServerInfo), Get_Z_Construct_UScriptStruct_FServerInfo_Hash());
	}
	return Singleton;
}
template<> MBR_ESPORTS_API UScriptStruct* StaticStruct<FServerInfo>()
{
	return FServerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerInfo(FServerInfo::StaticStruct, TEXT("/Script/MbR_eSports"), TEXT("ServerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MbR_eSports_StaticRegisterNativesFServerInfo
{
	FScriptStruct_MbR_eSports_StaticRegisterNativesFServerInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ServerInfo")),new UScriptStruct::TCppStructOps<FServerInfo>);
	}
} ScriptStruct_MbR_eSports_StaticRegisterNativesFServerInfo;
	struct Z_Construct_UScriptStruct_FServerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLan_MetaData[];
#endif
		static void NewProp_isLan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_serverArrayIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nStruct File created to define Server Info and Passer Server Info as parameters to contain information of the server,\nname, current/max players, lan check, ping and array index\n*/" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
		{ "ToolTip", "Struct File created to define Server Info and Passer Server Info as parameters to contain information of the server,\nname, current/max players, lan check, ping and array index" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverName_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverName = { "serverName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerInfo, serverName), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_currentPlayers_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_currentPlayers = { "currentPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerInfo, currentPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_currentPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_currentPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_maxPlayers_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_maxPlayers = { "maxPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerInfo, maxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_maxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_maxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_isLan_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_isLan_SetBit(void* Obj)
	{
		((FServerInfo*)Obj)->isLan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_isLan = { "isLan", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerInfo), &Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_isLan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_isLan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_isLan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ping_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ping = { "ping", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerInfo, ping), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverArrayIndex_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "ServerInfoStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverArrayIndex = { "serverArrayIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerInfo, serverArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverArrayIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_currentPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_maxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_isLan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_serverArrayIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MbR_eSports,
		nullptr,
		&NewStructOps,
		"ServerInfo",
		sizeof(FServerInfo),
		alignof(FServerInfo),
		Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MbR_eSports();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerInfo"), sizeof(FServerInfo), Get_Z_Construct_UScriptStruct_FServerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerInfo_Hash() { return 1741325007U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
