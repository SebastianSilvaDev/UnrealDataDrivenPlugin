﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataContainer.h"
#include "Components/ActorComponent.h"
#include "DataDrivenPlugin/DataContainer/DataPiece.h"
#include "DataContainerComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DATADRIVENPLUGIN_API UDataContainerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDataContainerComponent();

	UFUNCTION(BlueprintCallable)
	void RegisterDataContainer(UDataContainer* NewDataContainer);

	UFUNCTION(BlueprintCallable)
	UDataPiece* GetDataPiece(TSubclassOf<UDataPiece> DataPieceClass);

	template<class T>
	T* GetDataPiece()
	{
		if(!DataContainer) return nullptr;
		UDataPiece* DataPiece = DataContainer->GetDataPiece(T::StaticClass());
		if (!IsValid(DataPiece)) return nullptr;
		return Cast<T>(DataPiece);
	}
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Data Driven")
	UDataContainer* DataContainer = nullptr;
};
