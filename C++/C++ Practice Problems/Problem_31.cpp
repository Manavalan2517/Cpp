/*
 Problem_31 :-
 Reverse
*/

#include <iostream>
using namespace std;

void Problem_31()
{
	int num;
	int rem;
	int res;
	cout << "Enter any number: ";
	cin >> num;
	res = 0;
	while (num > 0)
	{
		rem = num % 10;
		num = num / 10;
		res = res * 10 + rem;
	}
	cout << res;
}