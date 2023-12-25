
/*
Problem_38 :-
Take integer inputs till the user enters 0 and print the sum of all numbers (HINT: while loop)
 */

#include <iostream>
using namespace std;

void Problem_38()
{
	int num;
	int i;
	int sum;
	i = 0;
	sum = 0;
	while (true)
	{
		i++;
		cout << "Enter number " << i << " : ";
		cin >> num;
		sum = sum + num;
		if (num == 0)
		{
			break;
		}
	}
	cout << "Sum of all numbers = " << sum;
}