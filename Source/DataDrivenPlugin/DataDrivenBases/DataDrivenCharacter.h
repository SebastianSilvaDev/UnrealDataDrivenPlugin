// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataDrivenPlugin/CoreCharacter/BaseCharacter.h"
#include "GameFramework/Actor.h"
#include "DataDrivenCharacter.generated.h"

class UDataContainerComponent;
class UDataContainer;

UCLASS()
class DATADRIVENPLUGIN_API ADataDrivenCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADataDrivenCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UDataContainerComponent* DataContainerComponent = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	UDataContainer* DataContainer = nullptr;
};
