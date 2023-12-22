/*
 Problem_28 :-
 Alphabet check case
*/

#include <iostream>
using namespace std;

void Problem_28()
{
	char str;
	cout << "Enter any character: ";
	cin >> str;

	if (str >= 'a' and str <= 'z')
	{
		cout << "LowerCase";
	}
	else
	{
		cout << "UpperCase";
	}
}