// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MbR_eSports/MainMenu/MainMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}
// Cross Module References
	MBR_ESPORTS_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
	MBR_ESPORTS_API UClass* Z_Construct_UClass_UMainMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MbR_eSports();
	MBR_ESPORTS_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	MBR_ESPORTS_API UClass* Z_Construct_UClass_UMbRGameInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenuWidget::execOnExitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnBackButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execSearchingForServers)
	{
		P_GET_UBOOL(Z_Param_isSearching);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchingForServers(Z_Param_isSearching);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execCreateServerSlotWidget)
	{
		P_GET_STRUCT(FServerInfo,Z_Param_serverInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateServerSlotWidget(Z_Param_serverInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnMaxPlayersSliderChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMaxPlayersSliderChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnHostCustomServerButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHostCustomServerButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnRefreshServersButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRefreshServersButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnServersListButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServersListButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnCustomServerButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomServerButtonClicked();
		P_NATIVE_END;
	}
	void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
	{
		UClass* Class = UMainMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateServerSlotWidget", &UMainMenuWidget::execCreateServerSlotWidget },
			{ "OnBackButtonClicked", &UMainMenuWidget::execOnBackButtonClicked },
			{ "OnCustomServerButtonClicked", &UMainMenuWidget::execOnCustomServerButtonClicked },
			{ "OnExitButtonClicked", &UMainMenuWidget::execOnExitButtonClicked },
			{ "OnHostCustomServerButtonClicked", &UMainMenuWidget::execOnHostCustomServerButtonClicked },
			{ "OnMaxPlayersSliderChanged", &UMainMenuWidget::execOnMaxPlayersSliderChanged },
			{ "OnRefreshServersButtonClicked", &UMainMenuWidget::execOnRefreshServersButtonClicked },
			{ "OnServersListButtonClicked", &UMainMenuWidget::execOnServersListButtonClicked },
			{ "SearchingForServers", &UMainMenuWidget::execSearchingForServers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics
	{
		struct MainMenuWidget_eventCreateServerSlotWidget_Parms
		{
			FServerInfo serverInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_serverInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::NewProp_serverInfo = { "serverInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainMenuWidget_eventCreateServerSlotWidget_Parms, serverInfo), Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::NewProp_serverInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "CreateServerSlotWidget", nullptr, nullptr, sizeof(MainMenuWidget_eventCreateServerSlotWidget_Parms), Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnBackButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnBackButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnBackButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnBackButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnBackButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnBackButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnBackButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnCustomServerButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnCustomServerButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnCustomServerButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnCustomServerButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnCustomServerButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnCustomServerButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnCustomServerButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnCustomServerButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnExitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnExitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnExitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnExitButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnExitButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnExitButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnExitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnExitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnHostCustomServerButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnHostCustomServerButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnHostCustomServerButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnHostCustomServerButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnHostCustomServerButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnHostCustomServerButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnHostCustomServerButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnHostCustomServerButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics
	{
		struct MainMenuWidget_eventOnMaxPlayersSliderChanged_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainMenuWidget_eventOnMaxPlayersSliderChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnMaxPlayersSliderChanged", nullptr, nullptr, sizeof(MainMenuWidget_eventOnMaxPlayersSliderChanged_Parms), Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnRefreshServersButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnRefreshServersButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnRefreshServersButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnRefreshServersButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnRefreshServersButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnRefreshServersButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnRefreshServersButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnRefreshServersButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnServersListButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnServersListButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnServersListButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnServersListButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnServersListButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnServersListButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnServersListButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnServersListButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics
	{
		struct MainMenuWidget_eventSearchingForServers_Parms
		{
			bool isSearching;
		};
		static void NewProp_isSearching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSearching;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::NewProp_isSearching_SetBit(void* Obj)
	{
		((MainMenuWidget_eventSearchingForServers_Parms*)Obj)->isSearching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::NewProp_isSearching = { "isSearching", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MainMenuWidget_eventSearchingForServers_Parms), &Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::NewProp_isSearching_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::NewProp_isSearching,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "SearchingForServers", nullptr, nullptr, sizeof(MainMenuWidget_eventSearchingForServers_Parms), Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_SearchingForServers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_SearchingForServers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
	{
		return UMainMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customServerButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customServerButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serversListButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serversListButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refreshServersButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_refreshServersButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_backButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_exitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_exitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customHostButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customHostButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customServerBackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customServerBackButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetSwitcherServerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetSwitcherServerList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverListScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverListScrollBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverNameEditableTextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverNameEditableTextBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPlayersNumSlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_maxPlayersNumSlider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lanCheckBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lanCheckBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPlayersNumText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_maxPlayersNumText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mbRGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mbRGameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_serverSlotWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialSearchForServers_MetaData[];
#endif
		static void NewProp_initialSearchForServers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_initialSearchForServers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MbR_eSports,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_CreateServerSlotWidget, "CreateServerSlotWidget" }, // 2768437371
		{ &Z_Construct_UFunction_UMainMenuWidget_OnBackButtonClicked, "OnBackButtonClicked" }, // 3217066217
		{ &Z_Construct_UFunction_UMainMenuWidget_OnCustomServerButtonClicked, "OnCustomServerButtonClicked" }, // 375029113
		{ &Z_Construct_UFunction_UMainMenuWidget_OnExitButtonClicked, "OnExitButtonClicked" }, // 4197832223
		{ &Z_Construct_UFunction_UMainMenuWidget_OnHostCustomServerButtonClicked, "OnHostCustomServerButtonClicked" }, // 3380451075
		{ &Z_Construct_UFunction_UMainMenuWidget_OnMaxPlayersSliderChanged, "OnMaxPlayersSliderChanged" }, // 3328103128
		{ &Z_Construct_UFunction_UMainMenuWidget_OnRefreshServersButtonClicked, "OnRefreshServersButtonClicked" }, // 3672931731
		{ &Z_Construct_UFunction_UMainMenuWidget_OnServersListButtonClicked, "OnServersListButtonClicked" }, // 2056021447
		{ &Z_Construct_UFunction_UMainMenuWidget_SearchingForServers, "SearchingForServers" }, // 1584509414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nThe MainMenuWidget class derived from UserWidget to bind and create functionalities of UI elements such as buttons,\ntexts, scrollbox, slider, checkbox created in the MainMenu along with the widget switcher.\nThe variables and functions names are self explanatory.\n*/" },
		{ "IncludePath", "MainMenu/MainMenuWidget.h" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
		{ "ToolTip", "The MainMenuWidget class derived from UserWidget to bind and create functionalities of UI elements such as buttons,\ntexts, scrollbox, slider, checkbox created in the MainMenu along with the widget switcher.\nThe variables and functions names are self explanatory." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerButton = { "customServerButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, customServerButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serversListButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serversListButton = { "serversListButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, serversListButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serversListButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serversListButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_refreshServersButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_refreshServersButton = { "refreshServersButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, refreshServersButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_refreshServersButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_refreshServersButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_backButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_backButton = { "backButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, backButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_backButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_backButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_exitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_exitButton = { "exitButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, exitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_exitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_exitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customHostButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customHostButton = { "customHostButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, customHostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customHostButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customHostButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerBackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerBackButton = { "customServerBackButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, customServerBackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerBackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerBackButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_widgetSwitcherServerList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_widgetSwitcherServerList = { "widgetSwitcherServerList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, widgetSwitcherServerList), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_widgetSwitcherServerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_widgetSwitcherServerList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverListScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverListScrollBox = { "serverListScrollBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, serverListScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverListScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverListScrollBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverNameEditableTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverNameEditableTextBox = { "serverNameEditableTextBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, serverNameEditableTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverNameEditableTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverNameEditableTextBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumSlider = { "maxPlayersNumSlider", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, maxPlayersNumSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumSlider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_lanCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_lanCheckBox = { "lanCheckBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, lanCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_lanCheckBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_lanCheckBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumText = { "maxPlayersNumText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, maxPlayersNumText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_mbRGameInstance_MetaData[] = {
		{ "Category", "MainMenuWidget" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_mbRGameInstance = { "mbRGameInstance", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, mbRGameInstance), Z_Construct_UClass_UMbRGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_mbRGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_mbRGameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverSlotWidget_MetaData[] = {
		{ "Category", "MbR_eSports" },
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverSlotWidget = { "serverSlotWidget", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, serverSlotWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverSlotWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_initialSearchForServers_MetaData[] = {
		{ "ModuleRelativePath", "MainMenu/MainMenuWidget.h" },
	};
#endif
	void Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_initialSearchForServers_SetBit(void* Obj)
	{
		((UMainMenuWidget*)Obj)->initialSearchForServers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_initialSearchForServers = { "initialSearchForServers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMainMenuWidget), &Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_initialSearchForServers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_initialSearchForServers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_initialSearchForServers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serversListButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_refreshServersButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_backButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_exitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customHostButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_customServerBackButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_widgetSwitcherServerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverListScrollBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverNameEditableTextBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumSlider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_lanCheckBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_maxPlayersNumText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_mbRGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_serverSlotWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_initialSearchForServers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
		&UMainMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenuWidget, 867265225);
	template<> MBR_ESPORTS_API UClass* StaticClass<UMainMenuWidget>()
	{
		return UMainMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuWidget(Z_Construct_UClass_UMainMenuWidget, &UMainMenuWidget::StaticClass, TEXT("/Script/MbR_eSports"), TEXT("UMainMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
