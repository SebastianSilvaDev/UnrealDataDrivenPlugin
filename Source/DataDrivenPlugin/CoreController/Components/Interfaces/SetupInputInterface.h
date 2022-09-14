// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SetupInputInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class USetupInputInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DATADRIVENPLUGIN_API ISetupInputInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent)
	void ISetupInputComponent(UInputComponent* InputComponent);
};
