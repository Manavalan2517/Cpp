
/*
Problem_16 :-
Perimeter Of Rectangle
 */


#include <iostream>
using namespace std;

void Problem_16()
{
	float length;
	float breadth;
	double perimeter;
	cout << "Enter the length of a rectangle: ";
	cin >> length;
	cout << "Enter the Side breadth of a rectangle : ";
	cin >> breadth;
	perimeter = 2 * (length + breadth);
	cout << "Perimeter Of Rectangle is = " << perimeter;
}