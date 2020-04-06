// Darts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "FDarts.h"
#include "Player.h"


using FString = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
void PrintGameSummary();
int32 GetDaniActualScore();
int32 GetEndreActualScore();
void ScorePrint();


FDarts DartsGame;
Player DartsPlayer;

int main()
{
    bool bPlayAgain = false;
    do {
        PrintIntro();
		ScorePrint();
		DartsPlayer.WhoStarts();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    } while (bPlayAgain);

    return 0;
    
}

void PrintIntro()
{
	std::cout << "Welcome to Endre's Home Darts.\n";
	std::cout << std::endl;
	std::cout << "-|==> *** <==|-  -|==> *** <==|-  -|==> *** <==|-" << std::endl;
	std::cout << "-|==> *** <==|-  -|==> *** <==|-  -|==> *** <==|-" << std::endl;
	std::cout << "-|==> *** <==|-  -|==> *** <==|-  -|==> *** <==|-" << std::endl;
	std::cout << "-|==> *** <==|-  -|==> *** <==|-  -|==> *** <==|-" << std::endl;
	std::cout << "-|==> *** <==|-  -|==> *** <==|-  -|==> *** <==|-" << std::endl;
	std::cout << "-|==> *** <==|-  -|==> *** <==|-  -|==> *** <==|-" << std::endl;
	std::cout << std::endl;
	std::cout << "Let's see who is the Darts Master!";
	std::cout << std::endl;
	return;
}

void ScorePrint()
{
	int32 ActualScore;
	std::cout << "\nEndre: " << DartsGame.GetEndreStartScore() << std::endl;
	std::cout << "Dani: " << DartsGame.GetDaniStartScore() << std::endl;
}

void PlayGame()
{
	DartsGame.Reset();
	int32 MaxScore = DartsGame.GetMaxScore();

	while (!DartsGame.IsGameWon()) {
		

	}

	PrintGameSummary();
	return;
}


bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	FString Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

int32 GetDaniActualScore()
{
	int32 Score;
	std::cout << "Dani: ";
	std::cin >> Score;
	return Score;
}

int32 GetEndreActualScore()
{
	int32 Score;
	std::cout << "Endre: ";
	std::cin >> Score;
	return Score;
}

void PrintGameSummary()
{
	if (DartsGame.IsGameWon())
	{
		std::cout << "WELL DONE - DANI WON!\n";
	}
	else
	{
		std::cout << "WELL DONE - ENDRE WON!\n";
	}
}


