// Exam2.cpp : Defines the entry point for the console application.
// Name: Nguyen Pham
// Course: COSC 1437
// Objectives: Calculate and display Weekly Salary of employees

#include "stdafx.h"
#include <iostream>

#include "PartTimeEmployee.h"
#include "FullTimeEmployee.h"

using namespace std;

int main()
{
	// Prompt employee's information
	FullTimeEmployee ftEmp(1, "Steve", "Jobs", 1500);
	PartTimeEmployee ptEmp(2, "Bill", "Gates", 25.50, 30);

	// Display employee's information 
	cout << "Full - time Employee" << endl;
	ftEmp.print();
	cout << endl << "Part - time Employee" << endl;
	ptEmp.print();

	return 0;
}