#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;
class PartTimeEmployee : public Employee
{
private:
	double payRate,hoursWorked;
public:

	// Default Constructor
	PartTimeEmployee() : Employee() {
		payRate = 0.0;
		hoursWorked = 0.0;
	}

	// Constructor
	PartTimeEmployee(int a, string b, string c, double d, double e) : Employee(a, b, c) {

		payRate = d;
		hoursWorked = e;
	}

	// Set function
	void setPayRate(double a) {
		payRate = a;
	}

	void setHoursWorked(double a) {
		hoursWorked = a;
	}

	// Get function
	double getPayRate() const {
		return payRate;
	}

	double getHoursWorked() const {
		return hoursWorked;
	}

	// Virtual calculation function
	virtual double calculatePay() const;

	// Virtual print function
	virtual void print() const;


	~PartTimeEmployee();
};

