// main.cpp

#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;
// function prototype
void getinput(Fraction& f1, Fraction& f2, char& op);

int main() {

	// variables declaration
	Fraction f1, f2, f3;
	char op;
	int choice;

	do {
		getinput(f1, f2, op);
		cout << "\nOutput" << endl;
		f1.printFraction();
		cout << " " << op << " ";
		f2.printFraction();
		cout << " = ";
		//switch statements
		switch (op)
		{

		case '+':
			f3 = f1.operator+(f2);
			f3.printFraction();
			cout << endl;
			break;

		case '-':
			f3 = f1.operator-(f2);
			f3.printFraction();
			cout << endl;
			break;

		case '*':
			f3 = f1.operator*(f2);
			f3.printFraction();
			cout << endl;

			break;

		case '/':
			f3 = f1.operator/(f2);
			f3.printFraction();
			cout << endl;
			break;

		case '=':
			if (f1 == f2)
				cout << "F1 and F2 are equal" << endl;
			else
				cout << "F1 and F2 are NOT equal" << endl;
			break;

		case '<':
			if (f1 < f2)
				cout << "True" << endl;
			else
				cout << " Greater than  or equals to" << endl;
			break;

		case '>':
			if (f1 > f2)
				cout << "True" << endl;
			else
				cout << " Is less than or equals to" << endl;
			break;

		default:
			// If the operator is not the above operators
			cout << "Error! operator is not correct";
			break;
		}
		//continue or exit the program
		cout << "\n Press 1 to continue or 0 to break and exit: ";
		cin >> choice;
	} while (choice == 1);
	return 0;
}

// function definition and to get the user expression

void getinput(Fraction& f1, Fraction& f2, char& op) {
	cout << "Enter two fractions to compute the output :  ";
	int num1, num2, denom1, denom2;
	char sep;
	cin >> num1 >> sep >> denom1 >> op >> num2 >> sep >> denom2;
	f1.setNum(num1);
	f1.setDenom(denom1);
	f2.setNum(num2);
	f2.setDenom(denom2);
}