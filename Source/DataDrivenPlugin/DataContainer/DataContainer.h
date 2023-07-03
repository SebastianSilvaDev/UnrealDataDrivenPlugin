// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/Object.h"
#include "DataContainer.generated.h"

class UDataPiece;
/**
 * 
 */
UCLASS()
class DATADRIVENPLUGIN_API UDataContainer : public UDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	UDataPiece* GetDataPiece(TSubclassOf<UDataPiece> DataPieceClass);

	template<class T>
	T* GetDataPiece();
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced)
	TArray<UDataPiece*> DataPieces;
};

template <class T>
T* UDataContainer::GetDataPiece()
{
	UDataPiece* FoundObject = GetDataPiece(T::StaticClass());
	return static_cast<T*>(FoundObject);
}
