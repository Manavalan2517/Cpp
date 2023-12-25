
/*
Problem_15 :-
Calculate average Of all numbers
 */

#include <iostream>
using namespace std;

void Problem_41()
{
	int num;
	int sum;
	int i;
	char brk;

	i = 0;
	sum = 0;

	while (true)
	{
		i++;
		cout << "Enter number " << i << " : ";
		cin >> num;
		sum = sum + num;
		
		cout << "Do you want to add another number: { 'y' , 'n' } : ";
		cin >> brk;

		if (brk == 'n')
		{
			break;
		}
	}
	cout << "Average = " << sum / i;
}