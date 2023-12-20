/*
Problem_6 :-
Area Of Triangle
*/


#include <iostream>
using namespace std;


void Problem_6()
{
	float base;
	float height;
	double area;
	cout << "Enter the base of the triangle: ";
	cin >> base;
	cout << "Enter the height of the triangle: ";
	cin >> height;
	area = 0.5 * base * height;
	cout << "Area of the Triangle is = " << area;
}