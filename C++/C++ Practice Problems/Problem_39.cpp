
/*
Problem_39 :-
Take integer inputs till the user enters 0 and print the largest number from all.
 */

#include <iostream>
using namespace std;

void Problem_39()
{
	int num;
	int i;
	int max;
	i = 0;
	max = 0;
	while (true)
	{
		i++;
		cout << "Enter number " << i << " : ";
		cin >> num;
		if (num > max)
		{
			max = num;
		}
		if (num == 0)
		{
			break;
		}
	}
	cout << "Largest number is = " << max;
}