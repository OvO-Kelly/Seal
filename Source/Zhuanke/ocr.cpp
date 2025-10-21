// Fill out your copyright notice in the Description page of Project Settings.


#include "ocr.h"

// Sets default values
Aocr::Aocr()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aocr::BeginPlay()
{
	Super::BeginPlay();
    Py_Initialize();
    PyObject* obj = Py_BuildValue("s", "rec.py");
    FILE* file = _Py_fopen_obj(obj, "r+");
    if (file != NULL) {
        PyRun_SimpleFile(file, "rec.py");
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("File not found"));
	}
    Py_Finalize();
	
}

// Called every frame
void Aocr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

