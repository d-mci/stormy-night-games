// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MbR_eSports/MainMenu/ServerSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSlotWidget() {}
// Cross Module References
	MBR_ESPORTS_API UClass* Z_Construct_UClass_UServerSlotWidget_NoRegister();
	MBR_ESPORTS_API UClass* Z_Construct_UClass_UServerSlotWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MbR_eSports();
	MBR_ESPORTS_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
	MBR_ESPORTS_API UClass* Z_Construct_UClass_UMbRGameInstance_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UServerSlotWidget::execOnJoinButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerSlotWidget::execOnServerInfoUpdate)
	{
		P_GET_STRUCT(FServerInfo,Z_Param_serverInfo);
		P_GET_OBJECT(UMbRGameInstance,Z_Param_gameInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerInfoUpdate(Z_Param_serverInfo,Z_Param_gameInstance);
		P_NATIVE_END;
	}
	void UServerSlotWidget::StaticRegisterNativesUServerSlotWidget()
	{
		UClass* Class = UServerSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnJoinButtonClicked", &UServerSlotWidget::execOnJoinButtonClicked },
			{ "OnServerInfoUpdate", &UServerSlotWidget::execOnServerInfoUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerSlotWidget_OnJoinButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerSlotWidget_OnJoinButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerSlotWidget_OnJoinButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerSlotWidget, nullptr, "OnJoinButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerSlotWidget_OnJoinButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerSlotWidget_OnJoinButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerSlotWidget_OnJoinButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerSlotWidget_OnJoinButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics
	{
		struct ServerSlotWidget_eventOnServerInfoUpdate_Parms
		{
			FServerInfo serverInfo;
			UMbRGameInstance* gameInstance;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_serverInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::NewProp_serverInfo = { "serverInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerSlotWidget_eventOnServerInfoUpdate_Parms, serverInfo), Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::NewProp_gameInstance = { "gameInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerSlotWidget_eventOnServerInfoUpdate_Parms, gameInstance), Z_Construct_UClass_UMbRGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::NewProp_serverInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::NewProp_gameInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerSlotWidget, nullptr, "OnServerInfoUpdate", nullptr, nullptr, sizeof(ServerSlotWidget_eventOnServerInfoUpdate_Parms), Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerSlotWidget_NoRegister()
	{
		return UServerSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UServerSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_serverData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverNameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playersNumText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playersNumText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lanText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lanText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pingText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_joinButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_arrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mbRGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mbRGameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MbR_eSports,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerSlotWidget_OnJoinButtonClicked, "OnJoinButtonClicked" }, // 325425512
		{ &Z_Construct_UFunction_UServerSlotWidget_OnServerInfoUpdate, "OnServerInfoUpdate" }, // 802475161
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nServer Slot Widget class created to contain the line slot of server data which will be displayed when servers are found.\nEach slot line will have server name, players numbers, lan info, ping and join button\n*/" },
		{ "IncludePath", "MainMenu/ServerSlotWidget.h" },
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
		{ "ToolTip", "Server Slot Widget class created to contain the line slot of server data which will be displayed when servers are found.\nEach slot line will have server name, players numbers, lan info, ping and join button" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverData_MetaData[] = {
		{ "Category", "ServerSlotWidget" },
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverData = { "serverData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSlotWidget, serverData), Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverNameText = { "serverNameText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSlotWidget, serverNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverNameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_playersNumText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_playersNumText = { "playersNumText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSlotWidget, playersNumText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_playersNumText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_playersNumText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_lanText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_lanText = { "lanText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSlotWidget, lanText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_lanText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_lanText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_pingText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_pingText = { "pingText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSlotWidget, pingText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_pingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_pingText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_joinButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_joinButton = { "joinButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSlotWidget, joinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_joinButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_joinButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_arrayIndex_MetaData[] = {
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_arrayIndex = { "arrayIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSlotWidget, arrayIndex), METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_arrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_arrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_mbRGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "MainMenu/ServerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_mbRGameInstance = { "mbRGameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerSlotWidget, mbRGameInstance), Z_Construct_UClass_UMbRGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_mbRGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_mbRGameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UServerSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_serverNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_playersNumText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_lanText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_pingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_joinButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_arrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerSlotWidget_Statics::NewProp_mbRGameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerSlotWidget_Statics::ClassParams = {
		&UServerSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UServerSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UServerSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerSlotWidget, 2141085952);
	template<> MBR_ESPORTS_API UClass* StaticClass<UServerSlotWidget>()
	{
		return UServerSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerSlotWidget(Z_Construct_UClass_UServerSlotWidget, &UServerSlotWidget::StaticClass, TEXT("/Script/MbR_eSports"), TEXT("UServerSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
