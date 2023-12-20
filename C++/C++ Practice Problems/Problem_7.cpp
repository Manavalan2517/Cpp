/*
Problem_7 :-
Area Of a Rectangle Program
 */

#include <iostream>
using namespace std;

void Problem_7()
{
	float length;
	float breadth;
	double area;
	cout << "Enter the Length of a rectangle: ";
	cin >> length;
	cout << "Enter the breadth of a rectangle: ";
	cin >> breadth;
	area = length * breadth;
	cout << "Area = " << area;
}