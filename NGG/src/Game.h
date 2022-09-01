#pragma once
#include "Includes.h"

class Game
{
public:
	void Run()
	{
		int tries = 0;
		std::string userinput;
		srand(time(NULL));
		int randomNumber = rand() % 100 + 1;
		std::cout << "Guess a random number between 1-100" << "\n";
		std::getline(std::cin, userinput);
		while (tries < 10)
		{

			tries++;
		}
	}
};