// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMbR_eSports_init() {}
	MBR_ESPORTS_API UFunction* Z_Construct_UDelegateFunction_MbR_eSports_DelegateServer__DelegateSignature();
	MBR_ESPORTS_API UFunction* Z_Construct_UDelegateFunction_MbR_eSports_DelegateCreation__DelegateSignature();
	MBR_ESPORTS_API UFunction* Z_Construct_UDelegateFunction_MbR_eSports_DelegateServerSearching__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MbR_eSports()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MbR_eSports_DelegateServer__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MbR_eSports_DelegateCreation__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MbR_eSports_DelegateServerSearching__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MbR_eSports",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x05E11344,
				0x8BC9BC55,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
