/*
 Problem_30 :-
 Counting occurrences
*/


#include <iostream>
using namespace std;

void Problem_30()
{
	int num;
	int choice;
	int rem;
	int count;
	
	cout << "Enter any number: ";
	cin >> num;
	cout << "Which number do you want to count: ";
	cin >> choice;

	count = 0;

	while (num > 0)
	{
		rem = num % 10;
		if (rem == choice)
		{
			count++;
		}
		num = num / 10;
	}
	cout << count;
}