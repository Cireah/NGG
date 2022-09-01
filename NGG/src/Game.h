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
		while (tries < 10)
		{
			std::cout << "hi" << tries+1 << "\n";
			tries++;
		}
	}
};