// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SynCapture/Public/SynCaptureEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynCaptureEditorMode() {}

// Begin Cross Module References
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureEditorMode();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureEditorMode_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UEdMode();
UPackage* Z_Construct_UPackage__Script_SynCapture();
// End Cross Module References

// Begin Class USynCaptureEditorMode
void USynCaptureEditorMode::StaticRegisterNativesUSynCaptureEditorMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynCaptureEditorMode);
UClass* Z_Construct_UClass_USynCaptureEditorMode_NoRegister()
{
	return USynCaptureEditorMode::StaticClass();
}
struct Z_Construct_UClass_USynCaptureEditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
#endif
		{ "IncludePath", "SynCaptureEditorMode.h" },
		{ "ModuleRelativePath", "Public/SynCaptureEditorMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynCaptureEditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USynCaptureEditorMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdMode,
	(UObject* (*)())Z_Construct_UPackage__Script_SynCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureEditorMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynCaptureEditorMode_Statics::ClassParams = {
	&USynCaptureEditorMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_USynCaptureEditorMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynCaptureEditorMode()
{
	if (!Z_Registration_Info_UClass_USynCaptureEditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynCaptureEditorMode.OuterSingleton, Z_Construct_UClass_USynCaptureEditorMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynCaptureEditorMode.OuterSingleton;
}
template<> SYNCAPTURE_API UClass* StaticClass<USynCaptureEditorMode>()
{
	return USynCaptureEditorMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynCaptureEditorMode);
// End Class USynCaptureEditorMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCaptureEditorMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USynCaptureEditorMode, USynCaptureEditorMode::StaticClass, TEXT("USynCaptureEditorMode"), &Z_Registration_Info_UClass_USynCaptureEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynCaptureEditorMode), 768345000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCaptureEditorMode_h_1652572337(TEXT("/Script/SynCapture"),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCaptureEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCaptureEditorMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
