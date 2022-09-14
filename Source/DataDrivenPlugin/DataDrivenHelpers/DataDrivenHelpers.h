// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DataDrivenHelpers.generated.h"

class UDataContainerComponent;

UENUM()
enum EValidationPin
{
	Valid = 0,
	Invalid = 1
};

/**
 * 
 */
UCLASS()
class DATADRIVENPLUGIN_API UDataDrivenHelpers : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable,
		meta=(ExpandEnumAsExecs=ExecOutput, ComponentClass="ActorComponent", DeterminesOutputType=ComponentClass))
	static UActorComponent* GetValidatedComponentByClass(AActor* Target, TSubclassOf<UActorComponent> ComponentClass,
	                                                     TEnumAsByte<EValidationPin>& ExecOutput);

	UFUNCTION(BlueprintCallable,
		meta=(ExpandEnumAsExecs=ExecOutput, DataPieceClass="Object", DeterminesOutputType=DataPieceClass))
	static UObject* GetValidatedDataPiece(UDataContainerComponent* Target, TSubclassOf<UObject> DataPieceClass,
	                                      TEnumAsByte<EValidationPin>& ExecOutput);
};

#define INITIALIZE_COMPONENTS(DataContainerComponent) \
	TArray<UActorComponent*> InitializableComponents = GetComponentsByInterface(UInitializableInterface::StaticClass()); \
	for (auto& Component : InitializableComponents) \
	{ \
		IInitializableInterface::Execute_IFinishInitialization(Component); \
		if (!Component->Implements<UDataDrivenComponentInterface>()) continue; \
		IDataDrivenComponentInterface::Execute_IRegisterDataContainerComponent(Component, DataContainerComponent); \
	}
