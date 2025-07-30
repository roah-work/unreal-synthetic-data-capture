// Copyright Epic Games, Inc. All Rights Reserved.

#include "SynCaptureEditorMode.h"
#include "SynCaptureEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "SynCaptureEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/SynCaptureSimpleTool.h"
#include "Tools/SynCaptureInteractiveTool.h"

// step 2: register a ToolBuilder in FSynCaptureEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "SynCaptureEditorMode"

const FEditorModeID USynCaptureEditorMode::EM_SynCaptureEditorModeId = TEXT("EM_SynCaptureEditorMode");

FString USynCaptureEditorMode::SimpleToolName = TEXT("SynCapture_ActorInfoTool");
FString USynCaptureEditorMode::InteractiveToolName = TEXT("SynCapture_MeasureDistanceTool");


USynCaptureEditorMode::USynCaptureEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(USynCaptureEditorMode::EM_SynCaptureEditorModeId,
		LOCTEXT("ModeName", "SynCapture"),
		FSlateIcon(),
		true);
}


USynCaptureEditorMode::~USynCaptureEditorMode()
{
}


void USynCaptureEditorMode::ActorSelectionChangeNotify()
{
}

void USynCaptureEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FSynCaptureEditorModeCommands& SampleToolCommands = FSynCaptureEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<USynCaptureSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<USynCaptureInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void USynCaptureEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FSynCaptureEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> USynCaptureEditorMode::GetModeCommands() const
{
	return FSynCaptureEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
