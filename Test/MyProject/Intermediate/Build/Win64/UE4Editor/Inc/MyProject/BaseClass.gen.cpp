// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BaseClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseClass() {}
// Cross Module References
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_Fclass_stats();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UClass* Z_Construct_UClass_ABaseClass_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ABaseClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* Fclass_stats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECT_API uint32 Get_Z_Construct_UScriptStruct_Fclass_stats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_Fclass_stats, Z_Construct_UPackage__Script_MyProject(), TEXT("class_stats"), sizeof(Fclass_stats), Get_Z_Construct_UScriptStruct_Fclass_stats_Hash());
	}
	return Singleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<Fclass_stats>()
{
	return Fclass_stats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_Fclass_stats(Fclass_stats::StaticStruct, TEXT("/Script/MyProject"), TEXT("class_stats"), false, nullptr, nullptr);
static struct FScriptStruct_MyProject_StaticRegisterNativesFclass_stats
{
	FScriptStruct_MyProject_StaticRegisterNativesFclass_stats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("class_stats")),new UScriptStruct::TCppStructOps<Fclass_stats>);
	}
} ScriptStruct_MyProject_StaticRegisterNativesFclass_stats;
	struct Z_Construct_UScriptStruct_Fclass_stats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defense_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_defense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magic_attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_magic_attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magic_def_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_magic_def;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xp_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_xp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visibilty_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_visibilty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_actionPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* setting up the struct for the \"classes\" to derive their stats from */" },
		{ "ModuleRelativePath", "BaseClass.h" },
		{ "ToolTip", "setting up the struct for the \"classes\" to derive their stats from" },
	};
#endif
	void* Z_Construct_UScriptStruct_Fclass_stats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Fclass_stats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_health_MetaData[] = {
		{ "Category", "health" },
		{ "ModuleRelativePath", "BaseClass.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, health), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_attack_MetaData[] = {
		{ "Category", "attack" },
		{ "ModuleRelativePath", "BaseClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_attack = { "attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, attack), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_defense_MetaData[] = {
		{ "Category", "defense" },
		{ "ModuleRelativePath", "BaseClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_defense = { "defense", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, defense), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_defense_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_attack_MetaData[] = {
		{ "Category", "magic_attack" },
		{ "ModuleRelativePath", "BaseClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_attack = { "magic_attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, magic_attack), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_def_MetaData[] = {
		{ "Category", "magic_def" },
		{ "ModuleRelativePath", "BaseClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_def = { "magic_def", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, magic_def), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_def_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_def_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "speed" },
		{ "Comment", "/* how many tiles the unit cna move*/" },
		{ "ModuleRelativePath", "BaseClass.h" },
		{ "ToolTip", "how many tiles the unit cna move" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, speed), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_xp_MetaData[] = {
		{ "Category", "xp" },
		{ "Comment", "/* xp required for next level*/" },
		{ "ModuleRelativePath", "BaseClass.h" },
		{ "ToolTip", "xp required for next level" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_xp = { "xp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, xp), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_xp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_xp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_visibilty_MetaData[] = {
		{ "Category", "visibilty" },
		{ "Comment", "/* how many tiles the unit can see (fog of war)*/" },
		{ "ModuleRelativePath", "BaseClass.h" },
		{ "ToolTip", "how many tiles the unit can see (fog of war)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_visibilty = { "visibilty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, visibilty), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_visibilty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_visibilty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_range_MetaData[] = {
		{ "Category", "range" },
		{ "Comment", "/*how many tiles the unit can attack from current pos*/" },
		{ "ModuleRelativePath", "BaseClass.h" },
		{ "ToolTip", "how many tiles the unit can attack from current pos" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, range), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_actionPoints_MetaData[] = {
		{ "Category", "AP" },
		{ "ModuleRelativePath", "BaseClass.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_actionPoints = { "actionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fclass_stats, actionPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_actionPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_actionPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_Fclass_stats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_magic_def,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_xp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_visibilty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fclass_stats_Statics::NewProp_actionPoints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_Fclass_stats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"class_stats",
		sizeof(Fclass_stats),
		alignof(Fclass_stats),
		Z_Construct_UScriptStruct_Fclass_stats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_Fclass_stats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fclass_stats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_Fclass_stats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_Fclass_stats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("class_stats"), sizeof(Fclass_stats), Get_Z_Construct_UScriptStruct_Fclass_stats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_Fclass_stats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_Fclass_stats_Hash() { return 770108240U; }
	void ABaseClass::StaticRegisterNativesABaseClass()
	{
	}
	UClass* Z_Construct_UClass_ABaseClass_NoRegister()
	{
		return ABaseClass::StaticClass();
	}
	struct Z_Construct_UClass_ABaseClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseClass.h" },
		{ "ModuleRelativePath", "BaseClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseClass_Statics::ClassParams = {
		&ABaseClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseClass, 1357333643);
	template<> MYPROJECT_API UClass* StaticClass<ABaseClass>()
	{
		return ABaseClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseClass(Z_Construct_UClass_ABaseClass, &ABaseClass::StaticClass, TEXT("/Script/MyProject"), TEXT("ABaseClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
