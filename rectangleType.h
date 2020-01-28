#pragma once

#include <iostream>
#include "pch.h"

using namespace std;
class rectangleType
{
protected:
	double length;
	double width;
public:

	// Default Constructor
	rectangleType() {
		length = 0.0;
		width = 0.0;
	}

	// Constructor
	rectangleType(double a, double b) {
		length = a;
		width = b;
	}

	// get Functions
	double getLength() const {
		return length;
	}
	
	double getWidth() const {
		return width;
	}

	// set Function
	void setDimension(double a, double b) {
		length = a;
		width = b;
	}

	// Virtual area() function
	virtual double area();


	// Overload operator functions
	rectangleType operator + (const rectangleType &);
	rectangleType operator - (const rectangleType &);
	rectangleType operator * (const rectangleType &);
	rectangleType operator ++ ();
	rectangleType operator ++ (int);
	rectangleType operator -- ();
	bool operator == ( rectangleType &);
	bool operator != ( rectangleType &);
	bool operator <= ( rectangleType &);
	bool operator < ( rectangleType &);
	bool operator >= ( rectangleType &);
	bool operator > ( rectangleType &);

	// Friends
	friend istream &operator >> (istream &strm, rectangleType &obj);
	friend ostream &operator << (ostream &strm, const rectangleType &obj);


	~rectangleType();
};

