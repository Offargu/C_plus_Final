////Fraction.cpp
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
	// validating the denomenator not to be 0
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
//Overload addition 
Fraction Fraction::operator+( Fraction& other)
{
	Fraction result;
	num * other.denom + other.num * denom
		, denom * other.denom;
	return result;
}
// overloading subtraction 
Fraction Fraction::operator-( Fraction& other)
{
	Fraction result;
	num * other.denom - other.num * denom, denom * other.denom;
	return result;
}
//Overload Multiplication function
Fraction Fraction::operator*( Fraction& other)
{
	Fraction result;
		num * other.num
		, denom * other.denom;
	return result;
}
//Overload division function
Fraction Fraction::operator/( Fraction& other)
{
	Fraction result((num * other.denom)
		, (denom * other.num));
	return result;
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
bool Fraction::operator== ( Fraction& f2)
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



