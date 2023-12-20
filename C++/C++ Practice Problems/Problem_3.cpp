/*
Problem_3 :-
Convert Celsius to Fahrenheit
 */

#include <iostream>
using namespace std;

void Problem_3()
{
	float celsius;
	float fahrenheit;

	cout << "Enter the celsius: ";
	cin >> celsius;
	fahrenheit = (celsius * 9 / 5) + 32;
	cout << "Fahrenheit = " << fahrenheit;
}