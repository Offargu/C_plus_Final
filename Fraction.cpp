//Fraction.cpp
#include <iostream>
#include <cmath>
#include "Fraction.h" 
using namespace std;

Fraction::Fraction()
{
	num = denom = 1;
}

Fraction::Fraction(int n)
{

	num = n;
	denom = 1;
}

Fraction::Fraction(int n, int d)
{

	num = n;
	// validating the denomenator to reject 0
	if (d == 0)
		denom = 1;
	else
		denom = d;
	if (denom < 0)
	{
		num = -num;
		denom = -denom;
	}
}
//Multiply
Fraction Fraction::multiply(Fraction n)
{

	Fraction t(n.num * num, n.denom * denom);
	return t;

}
// addition
Fraction Fraction::add(Fraction other) {

	int commonDen = denom * other.denom;

	int numerator = num * other.denom + other.num * denom;

	Fraction f(numerator, commonDen);

	return f;
}
// subtraction function

Fraction Fraction::subtract(Fraction other)
{
	int e = num;

	int fra = denom;

	int c = other.num;

	int d = other.denom;

	int subnumer = (e * d - fra * c);

	int denom = (fra * d);

	Fraction f(subnumer, denom);
	return f;
}
// can't divide anything by 0

Fraction Fraction::divide(Fraction other)
{
	Fraction f(num * other.denom, other.num * denom);
	return f;
}
//printFraction
void Fraction::printFraction()
{
	cout << num << "/" << denom;

}
//printFractionAsFloat

void Fraction::printFractionAsFloat() {
	if (denom == 0)
		cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
	else
		cout << float(num) / float(denom);
}

//bool functions
bool Fraction::operator== (const Fraction& f2)
{
	return(num * f2.denom == denom * f2.num);
}
bool Fraction:: operator < (const Fraction& f2)
{
	return(num * f2.denom < denom * f2.num);
}
bool Fraction:: operator > (const Fraction& f2)
{
	return(num * f2.denom > denom* f2.num);
}

