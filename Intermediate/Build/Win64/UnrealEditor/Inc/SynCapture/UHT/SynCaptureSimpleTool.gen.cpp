// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SynCapture/Private/Tools/SynCaptureSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynCaptureSimpleTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureSimpleTool();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureSimpleTool_NoRegister();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureSimpleToolBuilder();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureSimpleToolBuilder_NoRegister();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureSimpleToolProperties();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureSimpleToolProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_SynCapture();
// End Cross Module References

// Begin Class USynCaptureSimpleToolBuilder
void USynCaptureSimpleToolBuilder::StaticRegisterNativesUSynCaptureSimpleToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynCaptureSimpleToolBuilder);
UClass* Z_Construct_UClass_USynCaptureSimpleToolBuilder_NoRegister()
{
	return USynCaptureSimpleToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USynCaptureSimpleToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for USynCaptureSimpleTool\n */" },
#endif
		{ "IncludePath", "Tools/SynCaptureSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/SynCaptureSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for USynCaptureSimpleTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynCaptureSimpleToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USynCaptureSimpleToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_SynCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynCaptureSimpleToolBuilder_Statics::ClassParams = {
	&USynCaptureSimpleToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USynCaptureSimpleToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynCaptureSimpleToolBuilder()
{
	if (!Z_Registration_Info_UClass_USynCaptureSimpleToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynCaptureSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_USynCaptureSimpleToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynCaptureSimpleToolBuilder.OuterSingleton;
}
template<> SYNCAPTURE_API UClass* StaticClass<USynCaptureSimpleToolBuilder>()
{
	return USynCaptureSimpleToolBuilder::StaticClass();
}
USynCaptureSimpleToolBuilder::USynCaptureSimpleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynCaptureSimpleToolBuilder);
USynCaptureSimpleToolBuilder::~USynCaptureSimpleToolBuilder() {}
// End Class USynCaptureSimpleToolBuilder

// Begin Class USynCaptureSimpleToolProperties
void USynCaptureSimpleToolProperties::StaticRegisterNativesUSynCaptureSimpleToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynCaptureSimpleToolProperties);
UClass* Z_Construct_UClass_USynCaptureSimpleToolProperties_NoRegister()
{
	return USynCaptureSimpleToolProperties::StaticClass();
}
struct Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings UObject for USynCaptureSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
#endif
		{ "IncludePath", "Tools/SynCaptureSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/SynCaptureSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings UObject for USynCaptureSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
#endif
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/SynCaptureSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynCaptureSimpleToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
{
	((USynCaptureSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USynCaptureSimpleToolProperties), &Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowExtendedInfo_MetaData), NewProp_ShowExtendedInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_SynCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::ClassParams = {
	&USynCaptureSimpleToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynCaptureSimpleToolProperties()
{
	if (!Z_Registration_Info_UClass_USynCaptureSimpleToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynCaptureSimpleToolProperties.OuterSingleton, Z_Construct_UClass_USynCaptureSimpleToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynCaptureSimpleToolProperties.OuterSingleton;
}
template<> SYNCAPTURE_API UClass* StaticClass<USynCaptureSimpleToolProperties>()
{
	return USynCaptureSimpleToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynCaptureSimpleToolProperties);
USynCaptureSimpleToolProperties::~USynCaptureSimpleToolProperties() {}
// End Class USynCaptureSimpleToolProperties

// Begin Class USynCaptureSimpleTool
void USynCaptureSimpleTool::StaticRegisterNativesUSynCaptureSimpleTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynCaptureSimpleTool);
UClass* Z_Construct_UClass_USynCaptureSimpleTool_NoRegister()
{
	return USynCaptureSimpleTool::StaticClass();
}
struct Z_Construct_UClass_USynCaptureSimpleTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * USynCaptureSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
#endif
		{ "IncludePath", "Tools/SynCaptureSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/SynCaptureSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USynCaptureSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/SynCaptureSimpleTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynCaptureSimpleTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynCaptureSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynCaptureSimpleTool, Properties), Z_Construct_UClass_USynCaptureSimpleToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynCaptureSimpleTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynCaptureSimpleTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynCaptureSimpleTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleClickTool,
	(UObject* (*)())Z_Construct_UPackage__Script_SynCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynCaptureSimpleTool_Statics::ClassParams = {
	&USynCaptureSimpleTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USynCaptureSimpleTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureSimpleTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USynCaptureSimpleTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynCaptureSimpleTool()
{
	if (!Z_Registration_Info_UClass_USynCaptureSimpleTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynCaptureSimpleTool.OuterSingleton, Z_Construct_UClass_USynCaptureSimpleTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynCaptureSimpleTool.OuterSingleton;
}
template<> SYNCAPTURE_API UClass* StaticClass<USynCaptureSimpleTool>()
{
	return USynCaptureSimpleTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynCaptureSimpleTool);
USynCaptureSimpleTool::~USynCaptureSimpleTool() {}
// End Class USynCaptureSimpleTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Private_Tools_SynCaptureSimpleTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USynCaptureSimpleToolBuilder, USynCaptureSimpleToolBuilder::StaticClass, TEXT("USynCaptureSimpleToolBuilder"), &Z_Registration_Info_UClass_USynCaptureSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynCaptureSimpleToolBuilder), 483037667U) },
		{ Z_Construct_UClass_USynCaptureSimpleToolProperties, USynCaptureSimpleToolProperties::StaticClass, TEXT("USynCaptureSimpleToolProperties"), &Z_Registration_Info_UClass_USynCaptureSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynCaptureSimpleToolProperties), 309880678U) },
		{ Z_Construct_UClass_USynCaptureSimpleTool, USynCaptureSimpleTool::StaticClass, TEXT("USynCaptureSimpleTool"), &Z_Registration_Info_UClass_USynCaptureSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynCaptureSimpleTool), 3865824123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Private_Tools_SynCaptureSimpleTool_h_3917364661(TEXT("/Script/SynCapture"),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Private_Tools_SynCaptureSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Private_Tools_SynCaptureSimpleTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
