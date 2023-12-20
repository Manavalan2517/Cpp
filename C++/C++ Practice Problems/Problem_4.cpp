/*
 Problem_4 :-
 Program to input principal, time, and rate (P, T, R) from the user and find Simple Interest.
*/

#include <iostream>
using namespace std;

void Problem_4()
{
	int P;
	int T;
	double R;
	double PRT;

	cout << "Enter the Principle Amount: ";
	cin >> P;
	cout << "Enter the interest rate (in percentage): ";
	cin >> R;
	cout << "Enter the time duration (in years): ";
	cin >> T;

	PRT = ((P * R * T) / 100);
	cout << "Total Interest = " << PRT << endl;
	cout << "End Balance = " << (PRT + P);
}