#include "pch.h"
#include "rectangleType.h"
#include "boxType.h"

using namespace std;

double boxType::volume() {
	return length * width * height;
}

boxType boxType::operator + (const boxType &right) {
	boxType temp;

	temp.height = height + right.height;
	temp.length = length + right.length;
	temp.width = width + right.width;
	return temp;
}

boxType boxType::operator - (const boxType &right) {
	boxType temp;

	temp.height = height - right.height;
	temp.length = length - right.length;
	temp.width = width - right.width;
	return temp;
}

boxType boxType::operator * (const boxType &right) {
	boxType temp;

	temp.height = height * right.height;
	temp.length = length * right.length;
	temp.width = width * right.width;
	return temp;
}

boxType boxType::operator ++ () {
	++height;
	++length;
	++width;
	return *this;
}

boxType boxType::operator ++(int) {
	height++;
	length++;
	width++;
	return *this;
}

boxType boxType::operator -- () {
	--height;
	--length;
	--width;
	return *this;
}

bool boxType::operator == ( boxType &right)
{
	bool status;

	if (volume() == right.volume())
		status = true;
	else
		status = false;
	return status;
}

bool boxType::operator != ( boxType &right)
{
	bool status;

	if (volume() != right.volume())
		status = true;
	else
		status = false;
	return status;
}

bool boxType::operator <= (boxType &right)
{
	bool status;

	if (volume() <= right.volume())
		status = true;
	else
		status = false;
	return status;
}

bool boxType::operator < (boxType &right)
{
	bool status;

	if (volume() < right.volume())
		status = true;
	else
		status = false;
	return status;
}

bool boxType::operator >= (boxType &right)
{
	bool status;

	if (volume() >= right.volume())
		status = true;
	else
		status = false;
	return status;
}
bool boxType::operator > (boxType &right)
{
	bool status;

	if (volume() > right.volume())
		status = true;
	else
		status = false;
	return status;
}

istream &operator >> (istream &strm, boxType &obj)
{
	// Prompt the user for the height
	cout << "Length: ";
	strm >> obj.height;

	// Prompt the user for the length
	cout << "Length: ";
	strm >> obj.length;

	//Prompt the user for the width
	cout << "Width: ";
	strm >> obj.width;


	return strm;
}

ostream &operator << (ostream &strm, const boxType &obj)
{
	// Display box's dimensions
	strm << obj.height << " in height, " << obj.length
		<< " in length, " << obj.width << " in width";
	return strm;
}


boxType::~boxType()
{
}

