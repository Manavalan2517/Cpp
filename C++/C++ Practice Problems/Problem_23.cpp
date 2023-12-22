
/*
Problem_23 :-
Volume Of Pyramid
 */

#include <iostream>
using namespace std;

void Problem_23()
{
	float side;
	float height;
	double volume;
	cout << "Enter the Side length of the Pyramid: ";
	cin >> side;
	cout << "Enter the height of the Pyramid: "; 
	cin >> height;
	volume = 0.34 * side * side * height;
	cout << "Volume Of Pyramid is = " << volume;
}