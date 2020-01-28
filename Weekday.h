#pragma once
// Specification file for the Weekday class

#ifndef WEEKDAY_H
#define WEEKDAY_H

#include "stdafx.h"
#include <iostream>
#include <string>
using std::string;


// Weekday class declaration
class Weekday
{
private:
	string dayName[7] = { "Sunday","Monday","Tuesday","Wednesday",
						  "Thursday","Friday","Saturday" };
	int daychoice;
public:
	Weekday();
	Weekday(int);
	string printDay() const;
	string printNextDay() const;
	string printPreviousDay() const;
	string customDay(int) const;
};


#endif