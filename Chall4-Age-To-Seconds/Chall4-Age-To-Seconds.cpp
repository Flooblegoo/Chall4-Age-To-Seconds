// Challenge 4 - Age to Seconds Converter
// This will start as a simple Years to Seconds converter and eventually convert via dates more accurately
// by Jake R.

#include "stdafx.h"
#include <iostream>

int main()
{
	// Declaring variables needed for calculation (more later for further calculations
	const int SEC_IN_MIN = 60;
	const int MIN_IN_HR = 60;
	const int HRS_IN_DAY = 24;
	const int DAYS_IN_YR = 365.25;
	int user_age_years;
	int user_age_seconds;
	int user_age_minutes;
	int user_age_hours;
	int user_age_days;

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
		std::cout << "Well, considering the oldest person in the world is only 116 years old, I doubt you are " << user_age_years << " years old!" << std::endl;
		std::cout << "\nTry again! Please enter age (years): ";
		std::cin >> user_age_years;
	}

	// Make all valid calculations
	user_age_seconds = SEC_IN_MIN * MIN_IN_HR * HRS_IN_DAY * DAYS_IN_YR * user_age_years;
	user_age_minutes = MIN_IN_HR * HRS_IN_DAY * DAYS_IN_YR * user_age_years;
	user_age_hours = HRS_IN_DAY * DAYS_IN_YR * user_age_years;
	user_age_days = DAYS_IN_YR * user_age_years;

	// And then output the result so it looks all sexy as 
	std::cout << "\nYou are " << user_age_days << " days, " << user_age_hours << " hours, " << user_age_minutes << " minutes and " << user_age_seconds << " seconds old!" << std::endl;

	// Clear buffer, wait for input to close program
	std::cout << "\nPress Enter to Exit . . .";
	std::cin.clear(); std::cin.ignore(INT_MAX, '\n');
	std::cin.get();

    return 0;
}

