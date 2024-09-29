#include "LobbyGameMode.h"

void ALobbyGameMode::HostLanGame()
{
	GetWorld()->ServerTravel(GameMapURL);
}

void ALobbyGameMode::JoinLanGame()
{
	if (APlayerController* PlayerController = GetGameInstance()->GetFirstLocalPlayerController())
	{
		PlayerController->ClientTravel(LocalIPAddress, TRAVEL_Absolute);
	}
}
