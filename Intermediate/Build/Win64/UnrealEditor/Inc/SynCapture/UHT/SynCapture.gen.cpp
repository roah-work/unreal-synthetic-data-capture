// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SynCapture/Public/SynCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynCapture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
SYNCAPTURE_API UClass* Z_Construct_UClass_ASynCapture();
SYNCAPTURE_API UClass* Z_Construct_UClass_ASynCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_SynCapture();
// End Cross Module References

// Begin Class ASynCapture Function ExportRender
struct Z_Construct_UFunction_ASynCapture_ExportRender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/SynCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASynCapture_ExportRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASynCapture, nullptr, "ExportRender", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASynCapture_ExportRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASynCapture_ExportRender_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASynCapture_ExportRender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASynCapture_ExportRender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASynCapture::execExportRender)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportRender();
	P_NATIVE_END;
}
// End Class ASynCapture Function ExportRender

// Begin Class ASynCapture
void ASynCapture::StaticRegisterNativesASynCapture()
{
	UClass* Class = ASynCapture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportRender", &ASynCapture::execExportRender },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASynCapture);
UClass* Z_Construct_UClass_ASynCapture_NoRegister()
{
	return ASynCapture::StaticClass();
}
struct Z_Construct_UClass_ASynCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SynCapture.h" },
		{ "ModuleRelativePath", "Public/SynCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddedRootComponent_MetaData[] = {
		{ "Category", "SynCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SynCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderRegion_MetaData[] = {
		{ "Category", "SynCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SynCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "SynCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SynCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderRegion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASynCapture_ExportRender, "ExportRender" }, // 940362792
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASynCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASynCapture_Statics::NewProp_AddedRootComponent = { "AddedRootComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASynCapture, AddedRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddedRootComponent_MetaData), NewProp_AddedRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASynCapture_Statics::NewProp_RenderRegion = { "RenderRegion", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASynCapture, RenderRegion), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderRegion_MetaData), NewProp_RenderRegion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASynCapture_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASynCapture, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASynCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASynCapture_Statics::NewProp_AddedRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASynCapture_Statics::NewProp_RenderRegion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASynCapture_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASynCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASynCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SynCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASynCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASynCapture_Statics::ClassParams = {
	&ASynCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASynCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASynCapture_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASynCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_ASynCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASynCapture()
{
	if (!Z_Registration_Info_UClass_ASynCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASynCapture.OuterSingleton, Z_Construct_UClass_ASynCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASynCapture.OuterSingleton;
}
template<> SYNCAPTURE_API UClass* StaticClass<ASynCapture>()
{
	return ASynCapture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASynCapture);
ASynCapture::~ASynCapture() {}
// End Class ASynCapture

// Begin Registration
struct Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASynCapture, ASynCapture::StaticClass, TEXT("ASynCapture"), &Z_Registration_Info_UClass_ASynCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASynCapture), 2663089996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_3806274236(TEXT("/Script/SynCapture"),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
