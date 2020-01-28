#pragma once
#include "pch.h"
#include "rectangleType.h"

using namespace std;

class boxType; // Function declaration

// Function Prototypes for Overloaded Stream Operators 

istream &operator >> (istream &, boxType &);
ostream &operator << (ostream &, const boxType &);

class boxType : public rectangleType
{
private:
	double height;
public:
	// Default Constuctor
	boxType() : rectangleType() {
			height = 0.0;
	}

	// Constructor
	boxType(double a, double b, double c) : rectangleType(b, c) {
		height = a;
	}
	// Accessor function
	double getHeight() const {
		return height;
	}

	// Mutator function
	void setDimension(double l, double w, double h) {
		rectangleType::setDimension(l, w);
		height = h;
	}

	// Area function
	virtual double area() {
		return rectangleType::area();
	}

	// Volume function
	double volume();

	// Overload operator functions
	boxType operator + (const boxType &);
	boxType operator - (const boxType &);
	boxType operator * (const boxType &);
	boxType operator ++ ();
	boxType operator ++(int);
	boxType operator -- ();
	bool operator == ( boxType &);
	bool operator != ( boxType &);
	bool operator <= (boxType &);
	bool operator < (boxType &);
	bool operator >= (boxType &);
	bool operator > (boxType &);

	// Friends
	friend istream &operator >> (istream &, boxType &);
	friend ostream &operator << (ostream &, const boxType &);

	~boxType();
};

