#include "pch.h"
#include "rectangleType.h"

double rectangleType::area() {
	return length * width;
}

// Overload operator functions
rectangleType rectangleType::operator + (const rectangleType &right) {
	rectangleType temp;

	temp.length = length + right.length;
	temp.width = width + right.width;
	return temp;
}

rectangleType rectangleType::operator - (const rectangleType &right) {
	rectangleType temp;

	temp.length = length - right.length;
	temp.width = width - right.width;
	return temp;
}

rectangleType rectangleType::operator * (const rectangleType &right) {
	rectangleType temp;

	temp.length = length * right.length;
	temp.width = width * right.width;
	return temp;
}

rectangleType rectangleType::operator ++ () {
	++length;
	++width;

	return *this;
}
rectangleType rectangleType::operator ++(int) {
	
	length++;
	width++;
	return *this;
}

rectangleType rectangleType::operator -- () {
	--length;
	--width;

	return *this;
}

bool rectangleType::operator == ( rectangleType &right)
{
	bool status;

	if (area() == right.area())
		status = true;
	else
		status = false;
	return status;
}

bool rectangleType::operator != ( rectangleType &right)
{
	bool status;

	if (area() != right.area())
		status = true;
	else
		status = false;
	return status;
}

bool rectangleType::operator <= ( rectangleType &right)
{
	bool status;

	if (area() <= right.area())
		status = true;
	else
		status = false;
	return status;
}

bool rectangleType::operator < ( rectangleType &right)
{
	bool status;

	if (area() < right.area())
		status = true;
	else
		status = false;
	return status;
}

bool rectangleType::operator >= ( rectangleType &right)
{
	bool status;

	if (area() >= right.area())
		status = true;
	else
		status = false;
	return status;
}
bool rectangleType::operator > ( rectangleType &right)
{
	bool status;

	if (area() > right.area())
		status = true;
	else
		status = false;
	return status;
}

istream &operator >> (istream &strm, rectangleType &obj)
{
	// Prompt the user for the length
	cout << "Length: ";
	strm >> obj.length;

	//Prompt the user for the width
	cout << "Width: ";
	strm >> obj.width;

	return strm;
}

ostream &operator << (ostream &strm, const rectangleType &obj)
{

	// Display dimensions
	strm << obj.length << " in length, " << obj.width << " in width";


	return strm;
}
rectangleType::~rectangleType()
{
}
