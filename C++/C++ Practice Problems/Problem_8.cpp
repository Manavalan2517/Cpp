
/*
Problem_8 :-
Area Of an Isosceles Triangle
 */

#include <iostream>
using namespace std;

void Problem_8()
{
	float base;
	float height;
	double area;
	cout << "Enter the base of the Isosceles triangle : ";
	cin >> base;
	cout << "Enter the height of the Isosceles triangle: ";
	cin >> height;
	area = 0.5 * base * height;
	cout << "Area Of an Isosceles Triangle is = " << area;
}