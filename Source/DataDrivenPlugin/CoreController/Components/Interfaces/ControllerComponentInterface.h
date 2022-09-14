// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ControllerComponentInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UControllerComponentInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DATADRIVENPLUGIN_API IControllerComponentInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void IOnPossesPawn(APawn* NewPawn);

	UFUNCTION(BlueprintNativeEvent)
	void IOnUnPossesPawn();
};
