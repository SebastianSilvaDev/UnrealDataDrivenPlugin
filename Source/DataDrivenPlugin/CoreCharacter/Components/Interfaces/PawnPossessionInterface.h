// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PawnPossessionInterface.generated.h"

class AController;

// This class does not need to be modified.
UINTERFACE()
class UPawnPossessionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DATADRIVENPLUGIN_API IPawnPossessionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void IOnPossessedBy(AController* NewController, AController* OldController);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void IOnUnPossessed();
};
