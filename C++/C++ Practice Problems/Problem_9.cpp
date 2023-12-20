
/*
Problem_9 :-
Area Of Parallelogram
 */

#include <iostream>
using namespace std;

void Problem_9()
{
	float height;
	float base;
	double area;
	cout << "Enter the height of the parallelogram : ";
	cin >> height;
	cout << "Enter the base of the parallelogram: ";
	cin >> base;
	area = height * base;
	cout << "Area Of Parallelogram is = " << area;
}