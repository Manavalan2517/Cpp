
/*
Problem_36 :-
Subtract the Product and Sum of Digits of an Integer
 */

#include <iostream>
using namespace std;

void Problem_36()
{
	int num;
	int rem;
	int sum;
	int prod;

	cout << "Enter any number: ";
	cin >> num;
	
	sum = 0;
	prod = 1;

	while (num > 0)
	{
		rem = num % 10;
		sum = sum + rem;
		prod = prod * rem;
		num = num / 10;
	}

	cout << "Product of digits = " << prod << endl;
	cout << "Sum of digits = " <<  sum << endl;
	cout << "Result = " << (prod - sum);

}