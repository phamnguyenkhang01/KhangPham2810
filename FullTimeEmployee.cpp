#include "stdafx.h"
#include "FullTimeEmployee.h"

// Functions' declaration
 double FullTimeEmployee::calculatePay() const {
	return weekSalary;
}

 void FullTimeEmployee::print() const {
	 Employee::print();
	 cout << "Weekly Salary: $"<< FullTimeEmployee::calculatePay()<< endl;
 }


FullTimeEmployee::~FullTimeEmployee()
{
}
