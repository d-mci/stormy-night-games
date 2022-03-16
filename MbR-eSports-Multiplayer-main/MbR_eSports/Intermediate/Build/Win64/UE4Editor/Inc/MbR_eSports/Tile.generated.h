// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MBR_ESPORTS_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define MBR_ESPORTS_Tile_generated_h

#define MbR_eSports_Source_MbR_eSports_Tile_h_25_SPARSE_DATA
#define MbR_eSports_Source_MbR_eSports_Tile_h_25_RPC_WRAPPERS
#define MbR_eSports_Source_MbR_eSports_Tile_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define MbR_eSports_Source_MbR_eSports_Tile_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define MbR_eSports_Source_MbR_eSports_Tile_h_25_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MbR_eSports"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define MbR_eSports_Source_MbR_eSports_Tile_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define MbR_eSports_Source_MbR_eSports_Tile_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define MbR_eSports_Source_MbR_eSports_Tile_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TileType() { return STRUCT_OFFSET(ATile, TileType); } \
	FORCEINLINE static uint32 __PPO__TileMesh() { return STRUCT_OFFSET(ATile, TileMesh); }


#define MbR_eSports_Source_MbR_eSports_Tile_h_22_PROLOG
#define MbR_eSports_Source_MbR_eSports_Tile_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_RPC_WRAPPERS \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_INCLASS \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MbR_eSports_Source_MbR_eSports_Tile_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_PRIVATE_PROPERTY_OFFSET \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_SPARSE_DATA \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_INCLASS_NO_PURE_DECLS \
	MbR_eSports_Source_MbR_eSports_Tile_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MBR_ESPORTS_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MbR_eSports_Source_MbR_eSports_Tile_h


#define FOREACH_ENUM_ETILETYPE(op) \
	op(ETileType::INVALID) \
	op(ETileType::GRASS) \
	op(ETileType::WATER) \
	op(ETileType::CLIFF) \
	op(ETileType::FOREST) \
	op(ETileType::TALLGRASS) 

enum class ETileType : uint8;
template<> MBR_ESPORTS_API UEnum* StaticEnum<ETileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
