// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MbR_eSports/TileGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileGrid() {}
// Cross Module References
	MBR_ESPORTS_API UClass* Z_Construct_UClass_ATileGrid_NoRegister();
	MBR_ESPORTS_API UClass* Z_Construct_UClass_ATileGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MbR_eSports();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MBR_ESPORTS_API UClass* Z_Construct_UClass_ATile_NoRegister();
// End Cross Module References
	void ATileGrid::StaticRegisterNativesATileGrid()
	{
	}
	UClass* Z_Construct_UClass_ATileGrid_NoRegister()
	{
		return ATileGrid::StaticClass();
	}
	struct Z_Construct_UClass_ATileGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileHorizontalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileHorizontalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OddRowHorizontalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OddRowHorizontalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileVerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileVerticalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GrassTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WaterTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CliffTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CliffTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForestTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForestTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TallGrassTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TallGrassTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATileGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MbR_eSports,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TileGrid.h" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_GridWidth_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "//grid variables\n" },
		{ "ModuleRelativePath", "TileGrid.h" },
		{ "ToolTip", "grid variables" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, GridWidth), METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_GridWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_GridWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_GridHeight_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, GridHeight), METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_GridHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_GridHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_TileHorizontalOffset_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_TileHorizontalOffset = { "TileHorizontalOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, TileHorizontalOffset), METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_TileHorizontalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_TileHorizontalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_OddRowHorizontalOffset_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_OddRowHorizontalOffset = { "OddRowHorizontalOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, OddRowHorizontalOffset), METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_OddRowHorizontalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_OddRowHorizontalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_TileVerticalOffset_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_TileVerticalOffset = { "TileVerticalOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, TileVerticalOffset), METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_TileVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_TileVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_GrassTile_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_GrassTile = { "GrassTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, GrassTile), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_GrassTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_GrassTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_WaterTile_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_WaterTile = { "WaterTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, WaterTile), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_WaterTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_WaterTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_CliffTile_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_CliffTile = { "CliffTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, CliffTile), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_CliffTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_CliffTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_ForestTile_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_ForestTile = { "ForestTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, ForestTile), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_ForestTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_ForestTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileGrid_Statics::NewProp_TallGrassTile_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TileGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATileGrid_Statics::NewProp_TallGrassTile = { "TallGrassTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileGrid, TallGrassTile), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::NewProp_TallGrassTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::NewProp_TallGrassTile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_GridWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_GridHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_TileHorizontalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_OddRowHorizontalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_TileVerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_GrassTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_WaterTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_CliffTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_ForestTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGrid_Statics::NewProp_TallGrassTile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATileGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATileGrid_Statics::ClassParams = {
		&ATileGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATileGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATileGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATileGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATileGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATileGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATileGrid, 3973352259);
	template<> MBR_ESPORTS_API UClass* StaticClass<ATileGrid>()
	{
		return ATileGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATileGrid(Z_Construct_UClass_ATileGrid, &ATileGrid::StaticClass, TEXT("/Script/MbR_eSports"), TEXT("ATileGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATileGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
