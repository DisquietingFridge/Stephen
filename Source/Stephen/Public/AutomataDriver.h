// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutomataCell.h"
#include "AutomataDriver.generated.h"

UCLASS()
class STEPHEN_API AAutomataDriver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAutomataDriver();

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAutomataCell> Cell_Type;

	UPROPERTY(Blueprintable, EditAnywhere)
		int32 Xdim= 10;
	UPROPERTY(Blueprintable, EditAnywhere)
		int32 Ydim = 10;

	UPROPERTY(Blueprintable, EditAnywhere)
		int32 offset = 100;

	TArray<UAutomataCell*> Cell_Array;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
