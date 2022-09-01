#pragma once
#include "Includes.h"

class Game
{
public:
	void Run()
	{
		int tries = 0;

		while (tries < 10)
		{
			std::cout << "hi" << tries+1 << "\n";
			tries++;
		}
		std::cin.get();
	}
};