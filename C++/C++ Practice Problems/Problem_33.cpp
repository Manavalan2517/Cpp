
/*
 Problem_33 :-
 Check whether a number is even or odd
*/

#include <iostream>
using namespace std;

void Problem_33()
{
	int num;
	cout << "Enter any number: ";
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}
}