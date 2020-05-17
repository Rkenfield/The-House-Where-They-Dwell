// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheWTD/SplitScreenController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplitScreenController() {}
// Cross Module References
	THEWTD_API UClass* Z_Construct_UClass_ASplitScreenController_NoRegister();
	THEWTD_API UClass* Z_Construct_UClass_ASplitScreenController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheWTD();
	THEWTD_API UFunction* Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASplitScreenController::StaticRegisterNativesASplitScreenController()
	{
		UClass* Class = ASplitScreenController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableSplitScreen", &ASplitScreenController::execDisableSplitScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics
	{
		struct SplitScreenController_eventDisableSplitScreen_Parms
		{
			AActor* Context;
			bool bDisable;
		};
		static void NewProp_bDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::NewProp_bDisable_SetBit(void* Obj)
	{
		((SplitScreenController_eventDisableSplitScreen_Parms*)Obj)->bDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::NewProp_bDisable = { "bDisable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplitScreenController_eventDisableSplitScreen_Parms), &Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::NewProp_bDisable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplitScreenController_eventDisableSplitScreen_Parms, Context), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::NewProp_bDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Splitscreen" },
		{ "ModuleRelativePath", "SplitScreenController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplitScreenController, nullptr, "DisableSplitScreen", nullptr, nullptr, sizeof(SplitScreenController_eventDisableSplitScreen_Parms), Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASplitScreenController_NoRegister()
	{
		return ASplitScreenController::StaticClass();
	}
	struct Z_Construct_UClass_ASplitScreenController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplitScreenController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheWTD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplitScreenController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplitScreenController_DisableSplitScreen, "DisableSplitScreen" }, // 204131301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplitScreenController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplitScreenController.h" },
		{ "ModuleRelativePath", "SplitScreenController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplitScreenController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplitScreenController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplitScreenController_Statics::ClassParams = {
		&ASplitScreenController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplitScreenController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplitScreenController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplitScreenController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplitScreenController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplitScreenController, 2008218147);
	template<> THEWTD_API UClass* StaticClass<ASplitScreenController>()
	{
		return ASplitScreenController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplitScreenController(Z_Construct_UClass_ASplitScreenController, &ASplitScreenController::StaticClass, TEXT("/Script/TheWTD"), TEXT("ASplitScreenController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplitScreenController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
