// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/PawnPossessionInterface.h"
#include "DDPawnComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DATADRIVENPLUGIN_API UDDPawnComponent : public UActorComponent, public IPawnPossessionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDDPawnComponent();

	virtual void IOnPossessedBy_Implementation(AController* NewController, AController* OldController) override;
	
	virtual void IOnUnPossessed_Implementation() override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

};
