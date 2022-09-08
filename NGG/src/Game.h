#pragma once
#include "Includes.h"

class Game
{
public:
	void Run();

	int Randomnumber();

	void Fail(int randomnumber, int wins);

	int tries = 0;
	int wins = 0;
	bool wincheck = false;
	std::string userinput = "";
	int randomnumber;
	int userguess;
	std::string playagain = "";
};