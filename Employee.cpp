#include "stdafx.h"
#include "Employee.h"


// Function declaration
void Employee::print() const {
	cout << employeeID << ": " << firstname << " " << lastname << endl;
}


Employee::~Employee()
{
}
