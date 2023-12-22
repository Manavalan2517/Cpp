/*
 Problem_27 :-
 Take 2 numbers as input and print the largest number.
 */

#include <iostream>
using namespace std;

void Problem_27()
{
	int num1;
	int num2;
	int max;
	
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;

	if (num1 > num2)
	{
		cout << num1 << " is the greatest number.";
	}
	else
	{
		cout << num2 << " is the greatest number.";
	}
}