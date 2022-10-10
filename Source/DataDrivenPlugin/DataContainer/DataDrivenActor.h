// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataContainer.h"
#include "DataContainerComponent.h"
#include "GameFramework/Actor.h"
#include "DataDrivenActor.generated.h"

UCLASS()
class DATADRIVENPLUGIN_API ADataDrivenActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADataDrivenActor();

	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UDataContainerComponent* DataContainerComponent = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	UDataContainer* DataContainer = nullptr;
};
