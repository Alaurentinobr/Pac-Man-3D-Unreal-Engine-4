#include "ProjetoPacMan.h"
#include "PacManCPP.h"

APacManCPP::APacManCPP()
{
	PrimaryActorTick.bCanEverTick = true;

}

void APacManCPP::BeginPlay()
{
	Super::BeginPlay();
	LastTime = 0;
	DeltaSecounds = 0;
	Count = 0;
	GameState = 1;
}

void APacManCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DeltaSecounds = UGameplayStatics::GetRealTimeSeconds(GetWorld());

	if (GameModes[Count][1] == 0) {
		GameMode = GameModes[Count][0];
	}
	else if (DeltaSecounds - LastTime > 10 && GameMode == 2) {
		GameMode = GameModes[Count][0];
		LastTime = UGameplayStatics::GetRealTimeSeconds(GetWorld());
	}
	else if (DeltaSecounds - LastTime > GameModes[Count][1]) {
		++Count;
		GameMode = GameModes[Count][0];
		LastTime = UGameplayStatics::GetRealTimeSeconds(GetWorld());
	}
}

void APacManCPP::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
}