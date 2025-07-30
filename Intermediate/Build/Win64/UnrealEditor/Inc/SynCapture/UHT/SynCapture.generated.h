// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SYNCAPTURE_SynCapture_generated_h
#error "SynCapture.generated.h already included, missing '#pragma once' in SynCapture.h"
#endif
#define SYNCAPTURE_SynCapture_generated_h

#define FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportRender);


#define FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASynCapture(); \
	friend struct Z_Construct_UClass_ASynCapture_Statics; \
public: \
	DECLARE_CLASS(ASynCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SynCapture"), NO_API) \
	DECLARE_SERIALIZER(ASynCapture)


#define FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASynCapture(ASynCapture&&); \
	ASynCapture(const ASynCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASynCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASynCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASynCapture) \
	NO_API virtual ~ASynCapture();


#define FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_17_PROLOG
#define FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_20_INCLASS_NO_PURE_DECLS \
	FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNCAPTURE_API UClass* StaticClass<class ASynCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PersonalProjects_Experiments_Plugins_SynCapture_Source_SynCapture_Public_SynCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
