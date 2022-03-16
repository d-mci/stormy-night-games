// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MbR_eSports/MbR_eSportsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMbR_eSportsGameModeBase() {}
// Cross Module References
	MBR_ESPORTS_API UClass* Z_Construct_UClass_AMbR_eSportsGameModeBase_NoRegister();
	MBR_ESPORTS_API UClass* Z_Construct_UClass_AMbR_eSportsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MbR_eSports();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMbR_eSportsGameModeBase::execRemoveMainMenuFromViewport)
	{
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMainMenuFromViewport(Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMbR_eSportsGameModeBase::execCreateMainMenuWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_newWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMainMenuWidget(Z_Param_newWidget);
		P_NATIVE_END;
	}
	void AMbR_eSportsGameModeBase::StaticRegisterNativesAMbR_eSportsGameModeBase()
	{
		UClass* Class = AMbR_eSportsGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMainMenuWidget", &AMbR_eSportsGameModeBase::execCreateMainMenuWidget },
			{ "RemoveMainMenuFromViewport", &AMbR_eSportsGameModeBase::execRemoveMainMenuFromViewport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics
	{
		struct MbR_eSportsGameModeBase_eventCreateMainMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  newWidget;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_newWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::NewProp_newWidget = { "newWidget", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MbR_eSportsGameModeBase_eventCreateMainMenuWidget_Parms, newWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::NewProp_newWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MbR_eSportsGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMbR_eSportsGameModeBase, nullptr, "CreateMainMenuWidget", nullptr, nullptr, sizeof(MbR_eSportsGameModeBase_eventCreateMainMenuWidget_Parms), Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics
	{
		struct MbR_eSportsGameModeBase_eventRemoveMainMenuFromViewport_Parms
		{
			bool successful;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((MbR_eSportsGameModeBase_eventRemoveMainMenuFromViewport_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MbR_eSportsGameModeBase_eventRemoveMainMenuFromViewport_Parms), &Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MbR_eSportsGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMbR_eSportsGameModeBase, nullptr, "RemoveMainMenuFromViewport", nullptr, nullptr, sizeof(MbR_eSportsGameModeBase_eventRemoveMainMenuFromViewport_Parms), Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMbR_eSportsGameModeBase_NoRegister()
	{
		return AMbR_eSportsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mainMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_serverSlotWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultGameMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_defaultGameMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MbR_eSports,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMbR_eSportsGameModeBase_CreateMainMenuWidget, "CreateMainMenuWidget" }, // 2646591468
		{ &Z_Construct_UFunction_AMbR_eSportsGameModeBase_RemoveMainMenuFromViewport, "RemoveMainMenuFromViewport" }, // 761628261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nThe GameModeBase class is being derived from AGameModeBase. Generally meant to define the rules of the game \n(Should be extended to accomplish that task).\nHere the class is utilised to initialise and start the widgets (MainMenu, ServerSlot) and the GameInstance.\nThe variables and functions names are self explanatory.\n*/" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MbR_eSportsGameModeBase.h" },
		{ "ModuleRelativePath", "MbR_eSportsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameModeBase class is being derived from AGameModeBase. Generally meant to define the rules of the game\n(Should be extended to accomplish that task).\nHere the class is utilised to initialise and start the widgets (MainMenu, ServerSlot) and the GameInstance.\nThe variables and functions names are self explanatory." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_mainMenuWidget_MetaData[] = {
		{ "Category", "MbR_eSports" },
		{ "ModuleRelativePath", "MbR_eSportsGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_mainMenuWidget = { "mainMenuWidget", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMbR_eSportsGameModeBase, mainMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_mainMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_mainMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_serverSlotWidget_MetaData[] = {
		{ "Category", "MbR_eSports" },
		{ "ModuleRelativePath", "MbR_eSportsGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_serverSlotWidget = { "serverSlotWidget", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMbR_eSportsGameModeBase, serverSlotWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_serverSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_serverSlotWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_defaultGameMapName_MetaData[] = {
		{ "Category", "MbR_eSports" },
		{ "ModuleRelativePath", "MbR_eSportsGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_defaultGameMapName = { "defaultGameMapName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMbR_eSportsGameModeBase, defaultGameMapName), METADATA_PARAMS(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_defaultGameMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_defaultGameMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_currentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MbR_eSportsGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_currentWidget = { "currentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMbR_eSportsGameModeBase, currentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_currentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_currentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_mainMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_serverSlotWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_defaultGameMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::NewProp_currentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMbR_eSportsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::ClassParams = {
		&AMbR_eSportsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMbR_eSportsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMbR_eSportsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMbR_eSportsGameModeBase, 1018503141);
	template<> MBR_ESPORTS_API UClass* StaticClass<AMbR_eSportsGameModeBase>()
	{
		return AMbR_eSportsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMbR_eSportsGameModeBase(Z_Construct_UClass_AMbR_eSportsGameModeBase, &AMbR_eSportsGameModeBase::StaticClass, TEXT("/Script/MbR_eSports"), TEXT("AMbR_eSportsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMbR_eSportsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
