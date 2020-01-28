#include "stdafx.h"
#include "PartTimeEmployee.h"


// Functions' declaration

 double PartTimeEmployee::calculatePay() const {
	return payRate * hoursWorked;
}

 void PartTimeEmployee::print() const {
	 Employee::print();
	 cout <<  "Weekly Wages: $" <<PartTimeEmployee::calculatePay()<< endl;
 }

PartTimeEmployee::~PartTimeEmployee()
{
}
