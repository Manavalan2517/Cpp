
/*
Problem_35:-
To find Armstrong Number between two given number.
*/ 

#include <iostream>
using namespace std;

void Problem_35()
{
	int lowerRange;
	int higherRange;
    int rem;
	cout << "Enter the lower range value: ";
	cin >> lowerRange;
	cout << "Enter the upper range value: ";
	cin >> higherRange;

    for (int i = lowerRange; i <= higherRange; i++)
    {
        int num = i;
        int sum = 0;

        while (num > 0)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if (sum == i)
        {
            cout << sum << " ";
        }
    }
}