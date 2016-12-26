#pragma once

#include "GameFramework/Pawn.h"
#include "PacManCPP.generated.h"

UCLASS()
class PROJETOPACMAN_API APacManCPP : public APawn
{
	GENERATED_BODY()

public:
	APacManCPP();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	int Count;
	float LastTime;
	float DeltaSecounds;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GameMode)
		int32 GameMode;
	enum EGameMode {
		DIVIDE = 0,
		CHASE = 1,
		SCARED = 2
	};

	const int GameModes[8][2] = { { EGameMode::DIVIDE, 7 },
								 { EGameMode::CHASE, 20 },
								 { EGameMode::DIVIDE, 7 },
								 { EGameMode::CHASE, 20 },
								 { EGameMode::DIVIDE, 5 },
								 { EGameMode::CHASE, 20 },
								 { EGameMode::DIVIDE, 5 },
								 { EGameMode::CHASE,  0 } };
};