#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyGameMode.generated.h"

UCLASS()
class GDTVCOOPADVENTURE_API ALobbyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString GameMapURL = "/Game/ThirdPerson/Maps/ThirdPersonMap?listen";

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString LocalIPAddress = "192.168.0.173";

	UFUNCTION(BlueprintCallable)
	void HostLanGame();

	UFUNCTION(BlueprintCallable)
	void JoinLanGame();
};
