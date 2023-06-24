// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataDrivenPlugin/CoreController/BasePlayerController.h"
#include "DataDrivenPlayerController.generated.h"

class UDataContainerComponent;
class UDataContainer;

UCLASS()
class DATADRIVENPLUGIN_API ADataDrivenPlayerController : public ABasePlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADataDrivenPlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	UPROPERTY(Category="DataDrivenPlayerController" ,VisibleAnywhere, BlueprintReadOnly)
	UDataContainerComponent* DataContainerComponent = nullptr;
};
