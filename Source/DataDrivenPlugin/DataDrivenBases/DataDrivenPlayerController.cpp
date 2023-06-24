// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenPlayerController.h"

#include "DataDrivenPlugin/DataContainer/DataContainerComponent.h"
#include "DataDrivenPlugin/DataDrivenHelpers/DataDrivenHelpers.h"
#include "DataDrivenPlugin/Initialization/InitializableInterface.h"


// Sets default values
ADataDrivenPlayerController::ADataDrivenPlayerController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DataContainerComponent = CreateDefaultSubobject<UDataContainerComponent>(TEXT("DataContainerComponent"));
}

// Called when the game starts or when spawned
void ADataDrivenPlayerController::BeginPlay()
{
	Super::BeginPlay();
	INITIALIZE_COMPONENTS(DataContainerComponent)
}

void ADataDrivenPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}
