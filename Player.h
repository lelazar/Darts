#pragma once
#include <string>
#include <iostream>

using FString = std::string;
using int32 = int;

struct Players
{
	void Player();
	void Dani();
	void Endre();
} player;

class Player
{
public:
	Player();
	Players WhoStarts();
};

