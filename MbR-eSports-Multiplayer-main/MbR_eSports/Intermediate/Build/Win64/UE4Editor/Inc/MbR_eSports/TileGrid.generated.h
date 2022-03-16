// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBR_ESPORTS_TileGrid_generated_h
#error "TileGrid.generated.h already included, missing '#pragma once' in TileGrid.h"
#endif
#define MBR_ESPORTS_TileGrid_generated_h

#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_SPARSE_DATA
#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_RPC_WRAPPERS
#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATileGrid(); \
	friend struct Z_Construct_UClass_ATileGrid_Statics; \
public: \
	DECLARE_CLASS(ATileGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(ATileGrid)


#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATileGrid(); \
	friend struct Z_Construct_UClass_ATileGrid_Statics; \
public: \
	DECLARE_CLASS(ATileGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(ATileGrid)


#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATileGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATileGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATileGrid(ATileGrid&&); \
	NO_API ATileGrid(const ATileGrid&); \
public:


#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATileGrid(ATileGrid&&); \
	NO_API ATileGrid(const ATileGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATileGrid)


#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GridWidth() { return STRUCT_OFFSET(ATileGrid, GridWidth); } \
	FORCEINLINE static uint32 __PPO__GridHeight() { return STRUCT_OFFSET(ATileGrid, GridHeight); } \
	FORCEINLINE static uint32 __PPO__TileHorizontalOffset() { return STRUCT_OFFSET(ATileGrid, TileHorizontalOffset); } \
	FORCEINLINE static uint32 __PPO__OddRowHorizontalOffset() { return STRUCT_OFFSET(ATileGrid, OddRowHorizontalOffset); } \
	FORCEINLINE static uint32 __PPO__TileVerticalOffset() { return STRUCT_OFFSET(ATileGrid, TileVerticalOffset); } \
	FORCEINLINE static uint32 __PPO__GrassTile() { return STRUCT_OFFSET(ATileGrid, GrassTile); } \
	FORCEINLINE static uint32 __PPO__WaterTile() { return STRUCT_OFFSET(ATileGrid, WaterTile); } \
	FORCEINLINE static uint32 __PPO__CliffTile() { return STRUCT_OFFSET(ATileGrid, CliffTile); } \
	FORCEINLINE static uint32 __PPO__ForestTile() { return STRUCT_OFFSET(ATileGrid, ForestTile); } \
	FORCEINLINE static uint32 __PPO__TallGrassTile() { return STRUCT_OFFSET(ATileGrid, TallGrassTile); }


#define MbR_eSports_Source_MbR_eSports_TileGrid_h_10_PROLOG
#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_RPC_WRAPPERS \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_INCLASS \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MbR_eSports_Source_MbR_eSports_TileGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_INCLASS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_TileGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBR_ESPORTS_API UClass* StaticClass<class ATileGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MbR_eSports_Source_MbR_eSports_TileGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
