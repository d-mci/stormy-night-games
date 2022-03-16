// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MbR_eSports/MyGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameStateBase() {}
// Cross Module References
	MBR_ESPORTS_API UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister();
	MBR_ESPORTS_API UClass* Z_Construct_UClass_AMyGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_MbR_eSports();
// End Cross Module References
	void AMyGameStateBase::StaticRegisterNativesAMyGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister()
	{
		return AMyGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TeamToJoin_MetaData[];
#endif
		static void NewProp_m_TeamToJoin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_TeamToJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TeamToMove_MetaData[];
#endif
		static void NewProp_m_TeamToMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_TeamToMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MbR_eSports,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameStateBase.h" },
		{ "ModuleRelativePath", "MyGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToJoin_MetaData[] = {
		{ "Category", "MyGameStateBase" },
		{ "ModuleRelativePath", "MyGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToJoin_SetBit(void* Obj)
	{
		((AMyGameStateBase*)Obj)->m_TeamToJoin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToJoin = { "m_TeamToJoin", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyGameStateBase), &Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToJoin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToMove_MetaData[] = {
		{ "Category", "MyGameStateBase" },
		{ "ModuleRelativePath", "MyGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToMove_SetBit(void* Obj)
	{
		((AMyGameStateBase*)Obj)->m_TeamToMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToMove = { "m_TeamToMove", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyGameStateBase), &Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_m_TeamToMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams = {
		&AMyGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameStateBase, 928456991);
	template<> MBR_ESPORTS_API UClass* StaticClass<AMyGameStateBase>()
	{
		return AMyGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameStateBase(Z_Construct_UClass_AMyGameStateBase, &AMyGameStateBase::StaticClass, TEXT("/Script/MbR_eSports"), TEXT("AMyGameStateBase"), false, nullptr, nullptr, nullptr);

	void AMyGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_m_TeamToJoin(TEXT("m_TeamToJoin"));
		static const FName Name_m_TeamToMove(TEXT("m_TeamToMove"));

		const bool bIsValid = true
			&& Name_m_TeamToJoin == ClassReps[(int32)ENetFields_Private::m_TeamToJoin].Property->GetFName()
			&& Name_m_TeamToMove == ClassReps[(int32)ENetFields_Private::m_TeamToMove].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMyGameStateBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
