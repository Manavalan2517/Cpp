
/*
Problem_25 :-
Total Surface Area Of Cube
 */


#include <iostream>
using namespace std;

void Problem_25()
{
	float side;
	double tsa;
	cout << "Enter the side of the Cube: ";
	cin >> side;
	tsa = 6 * side * side;
	cout << "Total Surface Area Of Cube is = " << tsa;
}