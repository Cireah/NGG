#pragma once
#include "Includes.h"

class Game
{
public:
	void Run()
	{
		int tries = 0;
		srand(time(NULL));
		int randomNumber = rand() % 100 + 1;
		std::cout << "The number is: " << randomNumber << "\n";
		std::cout << "Guess a random number between 1-100";
		while (tries < 10)
		{
			tries++;
		}
	}
};