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
		int randomnumber = rand() % 100 + 1;
		std::cout << "Guess a random number between 1-100 \n";

		while (tries < 10)
		{
			std::getline(std::cin, userinput);
			int userguess = std::stoi(userinput);

			if (userguess > randomnumber)
			{
				std::cout << "The number is smaller. \n";
				tries++;
			}

			if (userguess < randomnumber)
			{
				std::cout << "The number is bigger. \n";
				tries++;
			}

			if (userguess == randomnumber)
			{
				std::cout << "You guessed the right number! Good job! \n";
				tries = 10;
			}
		}
	}
};