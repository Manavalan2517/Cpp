/*
 Problem_5 :-
 Input currency in rupees and output in USD.
*/

#include <iostream>
using namespace std;

void Problem_5()
{
	float inr;
	double usd;
	cout << "Enter Currencies is Rupees: ";
	cin >> inr;
	usd = inr * 0.012;
	cout << "USD = " << usd;
}