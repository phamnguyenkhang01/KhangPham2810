// Implementation file for the Weekday class
#include "stdafx.h"
#include "Weekday.h"
#include <iostream>
#include <string>
using namespace std;



	// Default Constructor
	Weekday::Weekday()
	{
		int daychoice = 0;
	}

	// Overloaded Constructor
	Weekday::Weekday(int initiate)
	{
		daychoice = initiate;
	}
	// Member functions to display the results
	string Weekday::printDay() const {
		return Weekday::dayName[daychoice];
	}

	string Weekday::printNextDay() const {
		return Weekday::dayName[daychoice + 1];
	}

	string Weekday::printPreviousDay() const {
		return Weekday::dayName[daychoice - 1];
	}

	string Weekday::customDay(int count) const {
		return Weekday::dayName[count];
	}




