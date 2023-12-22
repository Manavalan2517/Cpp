
/*
Problem_20 :-
Volume Of Prism
 */

#include <iostream>
using namespace std;

void Problem_20()
{
	float base;
	float length;
	double volume;
	cout << "Enter the Base Area of the prism: ";
	cin >> base;
	cout << "Enter the Length of the prism: ";
	cin >> length;
	volume = base * length;
	cout << "Volume Of Cone is = " << volume;
}