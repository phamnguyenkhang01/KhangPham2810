#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;
class FullTimeEmployee : public Employee
{
private: 
	double weekSalary;
public:

	// Default Constructor
	FullTimeEmployee() : Employee() {
		weekSalary = 0.0;
	}

	// Constructor
	FullTimeEmployee(int a, string b, string c, double d) : Employee(a, b, c) {

		weekSalary = d;
		
	}

	// Set function
	void setWeekSalary(double a) {
		weekSalary = a;
	}

	// Get function
	double getWeekSalary() const {
		return weekSalary;
	}

	// Virtual calculation function
	virtual double calculatePay() const;

	// Virtual print function
	virtual void print() const;

	
	~FullTimeEmployee();
};

