// Operator Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nguyen Pham
// Course : COSC 1437
// Objectives: This program to prompt, calculate, compare, and display boxes' dimensions


#include "pch.h"
#include <iostream>
#include <iomanip>
#include "boxType.h"

using namespace std;
int main()
{
	boxType box1(12, 9, 6);
	boxType box2(8, 7, 5);
	boxType box3, box4, box5;

	// Format output
	cout << fixed << showpoint << setprecision(2);

	cout << "box1: " << box1 << endl;
	cout << "box2: " << box2 << endl;
	box3 = box1 + box2;
	cout << "box3: " << box3 << endl;
	box4 = box1 - box2;
	cout << "box4: " << box4 << endl;
	box5 = box1 * box2;
	cout << "box5: " << box5 << endl;
	if (box1 > box2)
		cout << "Volume of box1 is greater than the volume of box2." << endl;
	else
		cout << "Volume of box1 is less than or equal to the volume of box2." << endl;
	box1++;
	cout << "After increment the length, width, and height of "
		<< "box1 by one unit, \nbox1: "
		<< box1 << endl;
	box3 = ++box2;
	cout << "New dimension of box2: " << box2 << endl;
	cout << "New dimension of box3: " << box3 << endl;
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
