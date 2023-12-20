
/*
Problem_11 :-
Area Of Rhombus
 */

#include <iostream>
using namespace std;

void Problem_11()
{
	float diagonal1;
	float diagonal2;
	double perimeter;
	cout << "Enter the length of the first diagonal: ";
	cin >> diagonal1;
	cout << "Enter the length of the second diagonal: ";
	cin >> diagonal2;
	perimeter = (diagonal1 * diagonal2) / 2;
	cout << "Area Of Rhombus is = " << perimeter;
}