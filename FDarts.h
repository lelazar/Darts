#pragma once
#include <string>

using FString = std::string;
using int32 = int;


class FDarts
{
public:
	FDarts(); // constructor
	int32 GetMaxScore() const;
	int32 GetDaniStartScore() const { return 301; };
	int32 GetEndreStartScore() const { return 301; };
	bool IsGameWon() const;
	void Reset();

private:
	int32 DaniScore;
	int32 EndreScore;
	bool bGameIsWon;
};