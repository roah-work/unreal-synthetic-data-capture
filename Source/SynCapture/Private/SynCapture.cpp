// Fill out your copyright notice in the Description page of Project Settings.


#include "SynCapture.h"
#include <algorithm>    // max()
#include "Engine/Engine.h"
#include "Engine/World.h"
#include <fstream>
#include "AssetRegistry/AssetRegistryModule.h"
#include "Serialization/BufferArchive.h"
#include "Slate/SceneViewport.h"
#include "HighResScreenshot.h"
#include "LevelEditorViewport.h"
#include "LevelEditor.h"
#include "SLevelViewport.h"

// Sets default values
ASynCapture::ASynCapture()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AddedRootComponent = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = AddedRootComponent;

	RenderRegion = CreateDefaultSubobject<UBoxComponent>("RenderRegion");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	// InitializeRenderBuffer(RenderBuffers);
}

// Called wb= Screefalse;nshotTaken hen the game starts or when spawned
void ASynCapture::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void ASynCapture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ASynCapture::ExportRender()
{



	//Console Command Method:
	{
		//RGB Screenshot
		// FName LitName = "Lit";
		// SetVizBuffer(LitName);
		// FString RGB_Screenshot = "HighResShot 1 0 0 0 0 0 1 0 1";
		// GEngine->Exec(GWorld, *RGB_Screenshot);

		// //Custom InstanceID_Screenshot
		// FName CustomStencilBufferName = "CustomStencil";
		// SetVizBuffer(CustomStencilBufferName);
		// FString InstanceID_Screenshot = "HighResShot 1 0 0 0 0 0 1 0 1";
		// GEngine->Exec(GWorld, *InstanceID_Screenshot);

		// FString fileName("D:/Personal_Projects/CWorkshop/Saved/ExportedRenders/Instance_Map.png");
		// FScreenshotRequest::RequestScreenshot(fileName, false, true);
	}
	// SetVizBuffer();


	CaptureSyntheticDataFrame();
}

//
// void ASynCapture::SetVizBuffer( )
// {
//
// 	TArray<FString> BuffersToRender;
// 	
// 	for(auto& Buffer: RenderBuffers)
// 	{
// 		if(Buffer.Value)
// 		{
// 			BuffersToRender.Add(Buffer.Key);
// 			// UE_LOG(LogTemp, Warning, TEXT("Adding...%s\n"), *Buffer.Key);
// 		}
// 	}
// 	
// 	
// #if WITH_EDITOR
// 	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");
//
// 	if (TSharedPtr<ILevelEditor> LevelEditor = LevelEditorModule.GetFirstLevelEditor())
// 	{
// 		FName BufferName;
// 		FText BufferNameText;
// 		for (TSharedPtr<SLevelViewport> LevelViewport : LevelEditor->GetViewports())
// 		{
// 			if (LevelViewport.IsValid())
// 			{
// 				if (TSharedPtr<FEditorViewportClient> Viewport = LevelViewport->GetViewportClient())
// 				{
// 					for(FString& BufferNameToRender : BuffersToRender)
// 					{
// 						BufferName = FName(*BufferNameToRender);
// 						BufferNameText = FText::FromString(BufferNameToRender);
// 						Viewport->ChangeBufferVisualizationMode(BufferName);
// 						while(!bScreenshotTaken)
// 						{
// 							if(Viewport->GetCurrentBufferVisualizationModeDisplayName().EqualTo(BufferNameText))
// 							{
// 								UE_LOG(LogTemp, Warning, TEXT("Taking Screenshot..."));
// 								Viewport->TakeHighResScreenShot();
// 								bScreenshotTaken = true;
// 							}
// 							else
// 							{
// 								UE_LOG(LogTemp, Warning, TEXT("Still not changed..."));
// 								continue;
// 							}
// 						}
// 						bScreenshotTaken = false;
// 					}
// 				}
// 			}
// 		}
// 	}
// #endif
//
// 	BuffersToRender.Empty();	
//
// }
//


void ASynCapture::CaptureSyntheticDataFrame()
{
#if WITH_EDITOR

	FHighResScreenshotConfig& HighResScreenshotConfig = GetHighResScreenshotConfig();
	HighResScreenshotConfig.SetHDRCapture(false);
	HighResScreenshotConfig.bDumpBufferVisualizationTargets = true;
	// HighResScreenshotConfig.bMaskEnabled = true;
	HighResScreenshotConfig.bDateTimeBasedNaming = true;
	// HighResScreenshotConfig.SetFilename(FString("CustomScreenshot_2.png"));
	HighResScreenshotConfig.Init();


	FLevelEditorModule& LevelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");
	SLevelViewport* LevelViewport = LevelEditor.GetFirstActiveLevelViewport().Get();

	if (!LevelViewport->IsInGameView() && LevelViewport->CanToggleGameView())
	{
		LevelViewport->ToggleGameView();
	}

	// LevelViewport->GetActiveViewport()->TakeHighResScreenShot();

	// TArray<FString> BuffersToRender;
	//
	// for(auto& Buffer: RenderBuffers)
	// {
	// 	if(Buffer.Value)
	// 	{
	// 		BuffersToRender.Add(Buffer.Key);
	// 		// UE_LOG(LogTemp, Warning, TEXT("Adding...%s\n"), *Buffer.Key);
	// 	}
	// }

	if (TSharedPtr<FEditorViewportClient> ViewportClient = LevelViewport->GetViewportClient())
	{
		FName CustomStencilName = "CustomStencil";
		ViewportClient->ChangeBufferVisualizationMode(CustomStencilName);
		LevelViewport->GetActiveViewport()->TakeHighResScreenShot();
		// FTSTicker::GetCoreTicker().AddTicker(TEXT("ScreenshotDelay"), 0.0, [LevelViewport, ViewportClient, CustomStencilName](float) {
		// 	ViewportClient->ChangeBufferVisualizationMode(CustomStencilName);
		// 		return false;
		// 	}
		// );
	}



	// FName BufferName;
	// FText BufferNameText;
	// for(FString& BufferNameToRender : BuffersToRender)
	// {
	// 	BufferName = FName(*BufferNameToRender);
	// 	BufferNameText = FText::FromString(BufferNameToRender);
	// 	FTSTicker::GetCoreTicker().AddTicker(TEXT("ScreenshotDelay"), 1.0, [LevelViewport, BufferNameToRender, ViewportClient, BufferName](float) {
	// 		ViewportClient->ChangeBufferVisualizationMode(FName(BufferName));
	// 		LevelViewport->GetActiveViewport()->TakeHighResScreenShot();
	// 		UE_LOG(LogTemp, Warning, TEXT("Rendering...%s\n"), *BufferNameToRender);
	// 			return false;
	// 		}
	// 	);
	// }



// FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");
//
// if (TSharedPtr<ILevelEditor> LevelEditor = LevelEditorModule.GetFirstLevelEditor())
// {
// 	for (TSharedPtr<SLevelViewport> LevelViewport : LevelEditor->GetViewports())
// 	{
// 		if (LevelViewport.IsValid())
// 		{
// 			if (TSharedPtr<FEditorViewportClient> ViewportClient = LevelViewport->GetViewportClient())
// 			{
// 				ViewportClient->TakeHighResScreenShot();
// 			}
// 		}
// 	}
// }
#endif
}


//
// void ASynCapture::SetVizBuffer(FName BufferName)
// {
// #if WITH_EDITOR
// 		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");
// 	
// 		if (TSharedPtr<ILevelEditor> LevelEditor = LevelEditorModule.GetFirstLevelEditor())
// 		{
// 			for (TSharedPtr<SLevelViewport> LevelViewport : LevelEditor->GetViewports())
// 			{
// 				if (LevelViewport.IsValid())
// 				{
// 					if (TSharedPtr<FEditorViewportClient> Viewport = LevelViewport->GetViewportClient())
// 					{
// 							Viewport->ChangeBufferVisualizationMode(BufferName);
// 					}
// 				}
// 			}
// 		}
// 	#endif
// }
//
//
// void ASynCapture::InitializeRenderBuffer(TMap<FString, bool> &RenderBuffers_In)
// {
// 	RenderBuffers_In.Add("BaseColor", false);
// 	RenderBuffers_In.Add("CustomDepth", false);
// 	RenderBuffers_In.Add("CustomStencil", false);
// 	RenderBuffers_In.Add("FinalImage", false);
// 	RenderBuffers_In.Add("ShadingModel", false);
// 	RenderBuffers_In.Add("MaterialAO", false);
// 	RenderBuffers_In.Add("Metallic", false);
// 	RenderBuffers_In.Add("Opacity", false);
// 	RenderBuffers_In.Add("Roughness", false);
// 	RenderBuffers_In.Add("SceneColor", false);
// 	RenderBuffers_In.Add("SceneDepth", false);
// 	RenderBuffers_In.Add("SeparateTranslucencyRGB", false);
// 	RenderBuffers_In.Add("SeparateTranslucencyA", false);
// 	RenderBuffers_In.Add("Specular", false);
// 	RenderBuffers_In.Add("SubsurfaceColor", false);
// 	RenderBuffers_In.Add("WorldNormal", false);
// 	RenderBuffers_In.Add("AmbientOcclusion", false);
// 	RenderBuffers_In.Add("CustomDepthWorldUnits", false);
// 	RenderBuffers_In.Add("SceneDepthWorldUnits", false);
// 	RenderBuffers_In.Add("PreTonemapHDRColor", false);
// 	RenderBuffers_In.Add("PostTonemapHDRColor", false);
// }
//
//


