// Copyright Epic Games, Inc. All Rights Reserved.

#include "SynCaptureEditorModeToolkit.h"
#include "SynCaptureEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "SynCaptureEditorModeToolkit"

FSynCaptureEditorModeToolkit::FSynCaptureEditorModeToolkit()
{
}

void FSynCaptureEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FSynCaptureEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FSynCaptureEditorModeToolkit::GetToolkitFName() const
{
	return FName("SynCaptureEditorMode");
}

FText FSynCaptureEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "SynCaptureEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
