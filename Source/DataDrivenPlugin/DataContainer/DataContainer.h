// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/Object.h"
#include "DataContainer.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVENPLUGIN_API UDataContainer : public UDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	UObject* GetDataPiece(TSubclassOf<UObject> DataPieceClass);

	template<class T>
	T* GetDataPiece();
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced)
	TArray<UObject*> DataPieces;
};

template <class T>
T* UDataContainer::GetDataPiece()
{
	UObject* FoundObject = GetDataPiece(T::StaticClass);
	return static_cast<T*>(FoundObject);
}
