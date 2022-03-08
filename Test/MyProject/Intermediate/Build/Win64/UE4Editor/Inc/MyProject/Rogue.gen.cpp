// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Rogue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRogue() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ARogue_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ARogue();
	MYPROJECT_API UClass* Z_Construct_UClass_ABaseClass();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_Fclass_stats();
// End Cross Module References
	DEFINE_FUNCTION(ARogue::execgetAP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getAP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARogue::execsetAP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_dmgTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setAP(Z_Param_dmgTaken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARogue::execgetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARogue::execsetHealth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_dmgTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setHealth(Z_Param_dmgTaken);
		P_NATIVE_END;
	}
	void ARogue::StaticRegisterNativesARogue()
	{
		UClass* Class = ARogue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getAP", &ARogue::execgetAP },
			{ "getHealth", &ARogue::execgetHealth },
			{ "setAP", &ARogue::execsetAP },
			{ "setHealth", &ARogue::execsetHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARogue_getAP_Statics
	{
		struct Rogue_eventgetAP_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARogue_getAP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rogue_eventgetAP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARogue_getAP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARogue_getAP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARogue_getAP_Statics::Function_MetaDataParams[] = {
		{ "Category", "ap" },
		{ "ModuleRelativePath", "Rogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARogue_getAP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARogue, nullptr, "getAP", nullptr, nullptr, sizeof(Rogue_eventgetAP_Parms), Z_Construct_UFunction_ARogue_getAP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARogue_getAP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARogue_getAP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARogue_getAP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARogue_getAP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARogue_getAP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARogue_getHealth_Statics
	{
		struct Rogue_eventgetHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARogue_getHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rogue_eventgetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARogue_getHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARogue_getHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARogue_getHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "dmg" },
		{ "ModuleRelativePath", "Rogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARogue_getHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARogue, nullptr, "getHealth", nullptr, nullptr, sizeof(Rogue_eventgetHealth_Parms), Z_Construct_UFunction_ARogue_getHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARogue_getHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARogue_getHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARogue_getHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARogue_getHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARogue_getHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARogue_setAP_Statics
	{
		struct Rogue_eventsetAP_Parms
		{
			int32 dmgTaken;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_dmgTaken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARogue_setAP_Statics::NewProp_dmgTaken = { "dmgTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rogue_eventsetAP_Parms, dmgTaken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARogue_setAP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARogue_setAP_Statics::NewProp_dmgTaken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARogue_setAP_Statics::Function_MetaDataParams[] = {
		{ "Category", "ap" },
		{ "ModuleRelativePath", "Rogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARogue_setAP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARogue, nullptr, "setAP", nullptr, nullptr, sizeof(Rogue_eventsetAP_Parms), Z_Construct_UFunction_ARogue_setAP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARogue_setAP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARogue_setAP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARogue_setAP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARogue_setAP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARogue_setAP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARogue_setHealth_Statics
	{
		struct Rogue_eventsetHealth_Parms
		{
			int32 dmgTaken;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_dmgTaken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARogue_setHealth_Statics::NewProp_dmgTaken = { "dmgTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rogue_eventsetHealth_Parms, dmgTaken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARogue_setHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARogue_setHealth_Statics::NewProp_dmgTaken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARogue_setHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "dmg" },
		{ "ModuleRelativePath", "Rogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARogue_setHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARogue, nullptr, "setHealth", nullptr, nullptr, sizeof(Rogue_eventsetHealth_Parms), Z_Construct_UFunction_ARogue_setHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARogue_setHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARogue_setHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARogue_setHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARogue_setHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARogue_setHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARogue_NoRegister()
	{
		return ARogue::StaticClass();
	}
	struct Z_Construct_UClass_ARogue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARogue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARogue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARogue_getAP, "getAP" }, // 1639396547
		{ &Z_Construct_UFunction_ARogue_getHealth, "getHealth" }, // 1987123914
		{ &Z_Construct_UFunction_ARogue_setAP, "setAP" }, // 1914477551
		{ &Z_Construct_UFunction_ARogue_setHealth, "setHealth" }, // 3008388227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARogue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Rogue.h" },
		{ "ModuleRelativePath", "Rogue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARogue_Statics::NewProp_stats_MetaData[] = {
		{ "Category", "Class stats" },
		{ "ModuleRelativePath", "Rogue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARogue_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARogue, stats), Z_Construct_UScriptStruct_Fclass_stats, METADATA_PARAMS(Z_Construct_UClass_ARogue_Statics::NewProp_stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARogue_Statics::NewProp_stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogue_Statics::NewProp_stats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARogue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARogue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARogue_Statics::ClassParams = {
		&ARogue::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARogue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARogue_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARogue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARogue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARogue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARogue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARogue, 122195596);
	template<> MYPROJECT_API UClass* StaticClass<ARogue>()
	{
		return ARogue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARogue(Z_Construct_UClass_ARogue, &ARogue::StaticClass, TEXT("/Script/MyProject"), TEXT("ARogue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARogue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
