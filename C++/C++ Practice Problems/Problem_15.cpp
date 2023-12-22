
/*
Problem_15 :-
Perimeter Of Equilateral Triangle
 */

#include <iostream>
using namespace std;

void Problem_15()
{
	float base;
	float side;
	double perimeter;
	cout << "Enter the Base length of a parallelogram: ";
	cin >> base;
	cout << "Enter the Side length of a parallelogram: ";
	cin >> side;
	perimeter = 2 * (base + side);
	cout << "Perimeter Of Equilateral Triangle is = " << perimeter;
}