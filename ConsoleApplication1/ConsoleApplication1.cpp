// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int loan, year;
	double rate, pay = 0.0;

	cout << "Enter loan amount: ";
	cin >> loan;
	cout << "Enter annual interest rate: ";
	cin >> rate;
	cout << "Enter number of years: ";
	cin >> year;

	pay = (((loan*(rate / 100))*year) + loan)/(year*12);
	cout << "RM"<<pay;
	return 0;
}
