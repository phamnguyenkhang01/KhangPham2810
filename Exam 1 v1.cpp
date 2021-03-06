// Name: Nguyen Pham
// Course: COSC 1437
// Objectives: This program is going to prompt, calculate , and
// display the day: the day, the next day, the previous day,
// and certain day.

#include "stdafx.h"
#include "Weekday.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{


	// Variables
	int dayAdd, index, dayrange;
	string choice;
	bool test = false;


	// Set the day
	cout << "What is your choice of day: ";
	cin >> choice;
	cout << endl;

	if (choice == "Sunday")  index = 0;
	else if (choice == "Monday") index = 1;
	else if (choice == "Tuesday") index = 2;
	else if (choice == "Wednesday") index = 3;
	else if (choice == "Thursday") index = 4;
	else if (choice == "Friday") index = 5;
	else if (choice == "Saturday") index = 6;

	// Set class object
	Weekday day(index);

	// Print the day
	cout << "The day you chose is: " << day.printDay() << endl;

	// Print the next day
		// Check inbound
	if (index = 6) {
		cout << "The next day is: " << "Sunday" << endl; }
	else {
		cout << "The next day is: " << day.printNextDay() << endl;
	}

	// Print the previous day
		// Check inbound
	if (index = 0) {
		cout << "The previous day is: " << "Saturday" << endl << endl;
	}
	else {
	cout << "The previous day is: " << day.printPreviousDay() << endl << endl;}

	// Set and print the certain day
	cout << "How many days you want to add: ";
	cin >> dayAdd;

	// Test day
	dayrange = 7 - index;

	while (!test)
	{
		if (dayAdd >= dayrange) {
			dayAdd = dayAdd - 7;
		}
		else
			test = true;

	}

	// Day addition after calculation
	dayAdd = dayAdd + index;

	// Display certain day
	cout << "After calculation,the day is: ";
	cout << day.customDay(dayAdd);
	cout << endl << endl;
    return 0;
}

