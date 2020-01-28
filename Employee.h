#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	string firstname, lastname;
	int employeeID;
public:
	// Default Constructor
	Employee() {
		employeeID = 0;
		firstname = " ";
		lastname = " ";
	}

	// Constructor
	Employee(int a, string b, string c) {
		employeeID = a;
		firstname = b;
		lastname = c;
	}

	// set functions
	void setemployeeID(int a) {
		employeeID = a;
	}

	void setFirstname(string b) {
		firstname = b;
	}

	void setLastname(string c) {
		lastname = c;
	}

	// get functions
	int getemployeeID() const {
		return employeeID;
	}

	string getFirstname() const {
		return firstname;
	}

	string getLastname() const {
		return lastname;
	}

	// Pure Virtual calculatePay function
	virtual double calculatePay() const {
		return 0;
	}

	// Pure Virtual print function
	virtual void print() const;


	
	~Employee();
};

