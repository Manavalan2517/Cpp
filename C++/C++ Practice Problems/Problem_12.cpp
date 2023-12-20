
/*
Problem_12 :-
Area Of Equilateral Triangle
 */

#include <iostream>
using namespace std;

void Problem_12()
{
	float side;
	double area;
	cout << "Enter the side of the Equilateral Triangle: ";
	cin >> side;
	area = 1.73 * (side * side) / 4;
	cout << "Area Of Equilateral Triangle is = " << area;
}