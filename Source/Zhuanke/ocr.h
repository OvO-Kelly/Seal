// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Python.h>
#include "ocr.generated.h"

UCLASS()
class ZHUANKE_API Aocr : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aocr();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
