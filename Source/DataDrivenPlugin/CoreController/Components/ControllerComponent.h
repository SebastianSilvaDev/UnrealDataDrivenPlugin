// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/ControllerComponentInterface.h"
#include "ControllerComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DATADRIVENPLUGIN_API UControllerComponent : public UActorComponent, public IControllerComponentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UControllerComponent();

	virtual void IOnPossesPawn_Implementation(APawn* NewPawn) override;
	
	virtual void IOnUnPossesPawn_Implementation() override;
};
