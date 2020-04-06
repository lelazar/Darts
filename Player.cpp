#pragma once
#include <string>
#include "Player.h"

using int32 = int;
using FString = std::string;

Player::Player() { }


Players Player::WhoStarts()
{
	Players ActualPlayer;
	std::cout << "\nWho starts first? (E = Endre / D = Dani): ";
	FString Response = "";
	std::getline(std::cin, Response);
	if ((Response[0] == 'd') || (Response[0] == 'D'))
	{
		//ActualPlayer.Dani;
		return &player.Dani;
	}
	else
	{
		//ActualPlayer.Endre;
		return &player.Endre;
	}
}

void Players::Player()
{
}

void Players::Dani()
{
}

void Players::Endre()
{
}
