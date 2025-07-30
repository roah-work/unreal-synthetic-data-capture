// Copyright Epic Games, Inc. All Rights Reserved.

#include "SynCaptureModule.h"
#include "SynCaptureEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "SynCaptureModule"

void FSynCaptureModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FSynCaptureEditorModeCommands::Register();
}

void FSynCaptureModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FSynCaptureEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSynCaptureModule, SynCaptureEditorMode)