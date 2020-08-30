//Fraction.h file

#ifndef FRACTION_H

#define FRACTION_H

//Fraction Class

class Fraction

{

private:

	int num;

	int denom;

public:

	// prototypes

	Fraction(); // default constructor

	Fraction(int n); // default constructor

	Fraction(int n, int d);

	void setNum(int n) { num = n; }
	void setDenom(int d) { if (d >= 0) denom = d; }

	int getNum() const { return num; }
	int getDenom() const { return denom; }

	//function prototypes

	Fraction multiply(Fraction);
	Fraction add(Fraction);
	Fraction subtract(Fraction);
	Fraction divide(Fraction);
	void printFraction();
	void printFractionAsFloat();

	bool operator == (const Fraction&);
	bool operator < (const Fraction& f2);
	bool operator > (const Fraction& f2);

};

#endif // !FRACTION_H