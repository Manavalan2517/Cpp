
/*
Problem_22
Volume Of Sphere
 */

#include <iostream>
using namespace std;

void Problem_22()
{
	float radius;
	double volume;
	cout << "Enter the radius of the Sphere: ";
	cin >> radius;
	volume = 1.34 * 3.14 * radius * radius * radius;
	cout << "Volume Of Sphere is = " << volume;
}