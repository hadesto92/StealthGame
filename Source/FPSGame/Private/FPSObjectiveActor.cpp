// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSObjectiveActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.h"

// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp")); //Tworzy mesh do objektu
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); //Ustawia mesh �e nie ma �adnej kolizji
	RootComponent = MeshComp; //Przypisuje MeshComp do g��wnej struktury objektu

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp")); //Tworzy sfer� kolizji
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly); //Ustawienie kolizji sfery w trybie zapytania dzi�ki czemu mo�emy rozbi� to na kana�y
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore); //Ustawienie �e kolizja i reakcja na wszystkie kana�y zostan� zignorowane
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); //Ustawienie rekacji tylko na jeden kana� dla PAWN oraz aby si� nak�ada� (Overlap)
	SphereComp->SetupAttachment(MeshComp); //Do��cza sfer� do MeshComp

	SetReplicates(true);

}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();
	
	PlayEffects(); //na pocz�tu gry ma wywo�a� si� funkcja efektu 

}

void AFPSObjectiveActor::PlayEffects()
{

	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation()); //Po wywo�aniu funkci ma ona w lokalizacji objektu utworzy� efekt np. dym

}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor* OtherActor)
{

	Super::NotifyActorBeginOverlap(OtherActor); //Poniewa� zmieniamy efekt juz utworzonej funkcji jest to upewnienie si� �e podstawowa implenetacja wywo�a si� i robimy to za pomoc� super aktor�w

	PlayEffects();

	if (GetLocalRole() == ROLE_Authority)
	{

		AFPSCharacter* MyCharacter = Cast<AFPSCharacter>(OtherActor); //Utworzenie nowego gracza kt�ry ma interakcj� z objektem

		if (MyCharacter) //je�li zosta� utworzony nowy gracz nalezy ustawi� �e podnus� obiekt oraz go zniszczy� na koniec
		{

			MyCharacter->bIsCarryingObjective = true;

			Destroy();

		}

	}

}

