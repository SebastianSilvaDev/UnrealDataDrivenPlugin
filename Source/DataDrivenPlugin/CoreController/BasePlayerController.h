// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePlayerController.generated.h"

UCLASS(Blueprintable, BlueprintType)
class DATADRIVENPLUGIN_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABasePlayerController();

	virtual void AcknowledgePossession(APawn* P) override;
protected:
	virtual void OnPossess(APawn* aPawn) override;
	
	virtual void OnUnPossess() override;
	
	virtual void SetupInputComponent() override;
};
