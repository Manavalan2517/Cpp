/*
 Problem_29 :-
 Fibonacci Series
*/

#include <iostream>
using namespace std;

void Problem_29()
{
	int num;
	int prevNum1;
	int prevNum2;
	int count;
	int result;

	cout << "Enter a number: ";
	cin >> num;

	count = 3;
	prevNum1 = 0;
	prevNum2 = 1;

	while (count <= num)
	{
		result = prevNum1 + prevNum2;
		prevNum1 = prevNum2;
		prevNum2 = result;
		count++;
	}
	cout << result;
}