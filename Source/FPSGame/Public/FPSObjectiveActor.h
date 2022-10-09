// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

class USphereComponent;

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Components") //Tworzenie metadanych (w�a�ciwo�ci) - nowej kategori - w obiekcie dla MeshComp
	UStaticMeshComponent* MeshComp; //Utworzenie w klasie statycznego komponentu o nazwie MeshComp

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* PickupFX;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PlayEffects(); //Utworzenie nowej funkcji effekt kt�ra b�dzie nak�ada�a na obiekt np. dym

public:	

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override; //Daje mo�liwo�c nadpisania (override) funkcji kt�ra b�dzie odpowiedzialna za interkacj� w momencie kiedy gracz wejdzie w kolizj� z obiektem, zmieniamy ju� utworzon� funkcj� dlatego b�dziemy musieli doda� zabezpieczenie w cpp aby stara implementacja te� by�a



};
