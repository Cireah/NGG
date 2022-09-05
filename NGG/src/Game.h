#pragma once
#include "Includes.h"

class Game
{
public:
	void Run()
	{
		int tries = 0;
		int wins = 0;
		bool wincheck = false;
		std::string userinput = "";
		int randomnumber;
		std::cout << "Guess a random number between 0-100 \n";

		while (tries < 10)
		{
			if (tries == 0)
			{
				randomnumber = Randomnumber();
			}
			wincheck = false;
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
				wins++;
				std::cout << "You guessed the right number! Good job! You have won " << wins << " times!\n";
				std::cout << "Please type in a new number!\n";
				tries = 0;
				userinput = "";
				wincheck = true;
			}
		}

		if (wincheck == false)
		{
			std::cout << "You ran out of attempts. :( \nThe number is: " << randomnumber << "\n";
			std::cout << "You won " << wins << " times\n";
		}
	}
	int Randomnumber()
	{
		srand(time(NULL));
		int randomnumber = rand() % 101;
		return randomnumber;
	}
};