
/*
Problem_21 :-
Volume Of Cylinder
 */

#include <iostream>
using namespace std;

void Problem_21()
{
	float radius;
	float height;
	double volume;
	cout << "Enter the radius of the Cylinder: ";
	cin >> radius;
	cout << "Enter the height of the Cylinder: ";
	cin >> height;
	volume = 3.14 * radius * radius * height;
	cout << "Volume Of Cylinder is = " << volume;
}