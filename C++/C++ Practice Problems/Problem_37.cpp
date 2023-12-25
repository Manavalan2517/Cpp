
/*
Problem_37 :-
Input a number and print all the factors of that number (use loops).
 */

#include <iostream>
using namespace std;

void Problem_37()
{
	int num;

	cout << "Enter a number: ";
	cin >> num;
	
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << endl;
		}
	}
}