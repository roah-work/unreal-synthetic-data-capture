// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SynCapture/Private/Tools/SynCaptureInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynCaptureInteractiveTool() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureInteractiveTool();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureInteractiveTool_NoRegister();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureInteractiveToolBuilder();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureInteractiveToolBuilder_NoRegister();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureInteractiveToolProperties();
SYNCAPTURE_API UClass* Z_Construct_UClass_USynCaptureInteractiveToolProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_SynCapture();
// End Cross Module References

// Begin Class USynCaptureInteractiveToolBuilder
void USynCaptureInteractiveToolBuilder::StaticRegisterNativesUSynCaptureInteractiveToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynCaptureInteractiveToolBuilder);
UClass* Z_Construct_UClass_USynCaptureInteractiveToolBuilder_NoRegister()
{
	return USynCaptureInteractiveToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USynCaptureInteractiveToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for USynCaptureInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/SynCaptureInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/SynCaptureInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for USynCaptureInteractiveTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynCaptureInteractiveToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USynCaptureInteractiveToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_SynCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynCaptureInteractiveToolBuilder_Statics::ClassParams = {
	&USynCaptureInteractiveToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USynCaptureInteractiveToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynCaptureInteractiveToolBuilder()
{
	if (!Z_Registration_Info_UClass_USynCaptureInteractiveToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynCaptureInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_USynCaptureInteractiveToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynCaptureInteractiveToolBuilder.OuterSingleton;
}
template<> SYNCAPTURE_API UClass* StaticClass<USynCaptureInteractiveToolBuilder>()
{
	return USynCaptureInteractiveToolBuilder::StaticClass();
}
USynCaptureInteractiveToolBuilder::USynCaptureInteractiveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynCaptureInteractiveToolBuilder);
USynCaptureInteractiveToolBuilder::~USynCaptureInteractiveToolBuilder() {}
// End Class USynCaptureInteractiveToolBuilder

// Begin Class USynCaptureInteractiveToolProperties
void USynCaptureInteractiveToolProperties::StaticRegisterNativesUSynCaptureInteractiveToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynCaptureInteractiveToolProperties);
UClass* Z_Construct_UClass_USynCaptureInteractiveToolProperties_NoRegister()
{
	return USynCaptureInteractiveToolProperties::StaticClass();
}
struct Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Property set for the USynCaptureInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/SynCaptureInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/SynCaptureInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property set for the USynCaptureInteractiveTool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/SynCaptureInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Second point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/SynCaptureInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Second point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current distance measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/SynCaptureInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current distance measurement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynCaptureInteractiveToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynCaptureInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynCaptureInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynCaptureInteractiveToolProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_SynCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::ClassParams = {
	&USynCaptureInteractiveToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynCaptureInteractiveToolProperties()
{
	if (!Z_Registration_Info_UClass_USynCaptureInteractiveToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynCaptureInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_USynCaptureInteractiveToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynCaptureInteractiveToolProperties.OuterSingleton;
}
template<> SYNCAPTURE_API UClass* StaticClass<USynCaptureInteractiveToolProperties>()
{
	return USynCaptureInteractiveToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynCaptureInteractiveToolProperties);
USynCaptureInteractiveToolProperties::~USynCaptureInteractiveToolProperties() {}
// End Class USynCaptureInteractiveToolProperties

// Begin Class USynCaptureInteractiveTool
void USynCaptureInteractiveTool::StaticRegisterNativesUSynCaptureInteractiveTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynCaptureInteractiveTool);
UClass* Z_Construct_UClass_USynCaptureInteractiveTool_NoRegister()
{
	return USynCaptureInteractiveTool::StaticClass();
}
struct Z_Construct_UClass_USynCaptureInteractiveTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * USynCaptureInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
#endif
		{ "IncludePath", "Tools/SynCaptureInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/SynCaptureInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USynCaptureInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Properties of the tool are stored here */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/SynCaptureInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties of the tool are stored here" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynCaptureInteractiveTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynCaptureInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynCaptureInteractiveTool, Properties), Z_Construct_UClass_USynCaptureInteractiveToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynCaptureInteractiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynCaptureInteractiveTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynCaptureInteractiveTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_SynCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynCaptureInteractiveTool_Statics::ClassParams = {
	&USynCaptureInteractiveTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USynCaptureInteractiveTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynCaptureInteractiveTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USynCaptureInteractiveTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynCaptureInteractiveTool()
{
	if (!Z_Registration_Info_UClass_USynCaptureInteractiveTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynCaptureInteractiveTool.OuterSingleton, Z_Construct_UClass_USynCaptureInteractiveTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynCaptureInteractiveTool.OuterSingleton;
}
template<> SYNCAPTURE_API UClass* StaticClass<USynCaptureInteractiveTool>()
{
	return USynCaptureInteractiveTool::StaticClass();
}
USynCaptureInteractiveTool::USynCaptureInteractiveTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynCaptureInteractiveTool);
USynCaptureInteractiveTool::~USynCaptureInteractiveTool() {}
// End Class USynCaptureInteractiveTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Private_Tools_SynCaptureInteractiveTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USynCaptureInteractiveToolBuilder, USynCaptureInteractiveToolBuilder::StaticClass, TEXT("USynCaptureInteractiveToolBuilder"), &Z_Registration_Info_UClass_USynCaptureInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynCaptureInteractiveToolBuilder), 1817901203U) },
		{ Z_Construct_UClass_USynCaptureInteractiveToolProperties, USynCaptureInteractiveToolProperties::StaticClass, TEXT("USynCaptureInteractiveToolProperties"), &Z_Registration_Info_UClass_USynCaptureInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynCaptureInteractiveToolProperties), 3970545927U) },
		{ Z_Construct_UClass_USynCaptureInteractiveTool, USynCaptureInteractiveTool::StaticClass, TEXT("USynCaptureInteractiveTool"), &Z_Registration_Info_UClass_USynCaptureInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynCaptureInteractiveTool), 3820511489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Private_Tools_SynCaptureInteractiveTool_h_2644199562(TEXT("/Script/SynCapture"),
	Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Private_Tools_SynCaptureInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Private_Tools_SynCaptureInteractiveTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
