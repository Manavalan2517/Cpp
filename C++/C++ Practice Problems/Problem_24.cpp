
/*
Problem_24
Curved Surface Area Of Cylinder
 */

#include <iostream>
using namespace std;

void Problem_24()
{
	float radius;
	float height;
	double csa;
	cout << "Enter the radius of the Cylinder: ";
	cin >> radius;
	cout << "Enter the height of the Cylinder: ";
	cin >> height;
	csa = 2 * 3.14 * radius * height;
	cout << "Curved Surface Area Of Cylinder is = " << csa;
}