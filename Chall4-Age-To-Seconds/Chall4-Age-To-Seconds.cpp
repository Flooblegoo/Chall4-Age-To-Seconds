// Challenge 4 - Age to Seconds Converter
// This will start as a simple Years to Seconds converter and eventually convert via dates more accurately
// by Jake R.

#include "stdafx.h"
#include <iostream>

int main()
{
	// Declaring variables needed for calculation (more later for further calculations
	const int SECONDS_IN_YEAR = 31557600;
	int user_age_years;
	int user_age_seconds;

	// Outputting program (with super fancy FX (c) to J. Ralph)
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "   AGE CONVERTER - YEARS TO SECONDS" << std::endl;
	std::cout << "--------------------------------------\n" << std::endl;
	// Acquiring user's age in years
	std::cout << "Please enter your age (years): ";
	std::cin >> user_age_years;

	// User input validation
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nBad entry, no text allowed!" << std::endl;
		std::cout << "Please enter your age (years): ";
		std::cin >> user_age_years;
	}
	// Further case-specific user input validation because of age
	while (user_age_years >= 117)
	{
		std::cout << "Well, considering the oldest person in the world is only 116 years old, pretty hard to believe you are " << user_age_years << " years old!" << std::endl;
		std::cout << "Try again! Please enter age (years): ";
		std::cin >> user_age_years;
	}

	// Make calculation of age in seconds
	user_age_seconds = user_age_years * SECONDS_IN_YEAR;
	// And then output the result so it looks all sexy as 
	std::cout << "\n\nYou are " << user_age_seconds << " seconds old" << std::endl;

	// Clear buffer, wait for input to close program
	std::cout << "\n\nPress Enter to Exit . . .";
	std::cin.clear(); std::cin.ignore(INT_MAX, '\n');
	std::cin.get();

    return 0;
}

