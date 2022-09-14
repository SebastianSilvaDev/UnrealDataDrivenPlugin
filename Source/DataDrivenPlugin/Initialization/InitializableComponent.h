// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InitializableInterface.h"
#include "Components/ActorComponent.h"
#include "InitializableComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DATADRIVENPLUGIN_API UInitializableComponent : public UActorComponent, public IInitializableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInitializableComponent();

	virtual void IFinishInitialization_Implementation() override;
	
};
