#pragma once
#include "FDarts.h"

using int32 = int;

FDarts::FDarts() { Reset(); }  // default constructor
bool FDarts::IsGameWon() const { return bGameIsWon; }


int32 FDarts::GetMaxScore() const
{
	int32 MaxScore = 301;
	return MaxScore;
}

void FDarts::Reset()
{
	const int32 ScoreToWin = 0;
	DaniScore = FDarts::GetDaniStartScore();
	EndreScore = FDarts::GetEndreStartScore();
	bGameIsWon = false;
	return;
}


