
#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "GameFramework/Actor.h"
#include "ImageUtils.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include <string>
#include "HighResScreenshot.h"
#include "SynCapture.generated.h"

UCLASS()
class SYNCAPTURE_API ASynCapture : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASynCapture();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* AddedRootComponent;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* RenderRegion;

	UPROPERTY(EditDefaultsOnly)
	UCameraComponent* Camera;

	// UPROPERTY(EditAnywhere, Category = Defaults)
	// TMap<FString, bool> RenderBuffers;

	bool bScreenshotTaken;

	UFUNCTION(CallInEditor, Category = Defaults)
	void ExportRender();

	//void SetVizBuffer();

	void CaptureSyntheticDataFrame();

	// void SetVizBuffer(FName BufferName);

	//void InitializeRenderBuffer(TMap<FString, bool> &RenderBuffers);



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;





};

