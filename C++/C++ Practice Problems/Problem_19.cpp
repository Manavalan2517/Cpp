
/*
Problem_19 :-
Volume Of Cone
 */

#include <iostream>
using namespace std;

void Problem_19()
{
	float radius;
	float height;
	double perimeter;
	cout << "Enter the radius of the cone: ";
	cin >> radius;
	cout << "Enter the height of the cone: ";
	cin >> height;
	perimeter = 0.34 * 3.14 * radius * radius * height;
	cout << "Volume Of Cone is = " << perimeter;
}