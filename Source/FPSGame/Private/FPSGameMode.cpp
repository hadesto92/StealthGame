// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSGameMode.h"
#include "FPSHUD.h"
#include "FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "FPSGameState.h"
#include "EngineUtils.h"
#include "FPSPlayerController.h"

AFPSGameMode::AFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHUD::StaticClass();

	GameStateClass = AFPSGameState::StaticClass();

}

void AFPSGameMode::CompleteMission(APawn* InstigatorPawn, bool bMissionSuccess)
{

	if (InstigatorPawn)
	{

		//InstigatorPawn->DisableInput(nullptr);

		if (SpectatingViewpointClass)
		{

			TArray<AActor*> ReturnedActors;
			UGameplayStatics::GetAllActorsOfClass(this, SpectatingViewpointClass, ReturnedActors);

			//prze��czanie mi�dzy kamerami w momencie kiedy znajdzie odpowiedniego aktora (drug� kamer� w tym przypadku) kiedy misja si� zako�czy
			if (ReturnedActors.Num() > 0)
			{

				AActor* NewViewTarget = ReturnedActors[0];

				for (TPlayerControllerIterator<AFPSPlayerController>::ServerAll It(GetWorld()); It; ++It)
				{

					AFPSPlayerController* PC = *It;
					if (PC && PC->IsLocalController())
					{

						PC->SetViewTargetWithBlend(NewViewTarget, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic);

					}

				}

			}

		}
		else
		{

			UE_LOG(LogTemp, Warning, TEXT("SpectatingViewpointClass is nullptr. Please update GameMode class with subclass. Cannot change spectrating view target."));

		}

	}

	AFPSGameState* GS = GetGameState<AFPSGameState>();
	if (GS)
	{

		GS->MulticastOnMissionComplete(InstigatorPawn, bMissionSuccess);

	}

	OnMissionCompleted(InstigatorPawn, bMissionSuccess);

}
