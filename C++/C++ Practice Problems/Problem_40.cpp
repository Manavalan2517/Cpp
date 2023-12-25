
/*
Problem_40 :-
Calculate Electricity Bill
 */

#include <iostream>
using namespace std;

void Problem_40()
{
    int unit;
    int amount;
    int amount1;
    int amount2;
    int amount3;
    int amount4;

    cout << "Enter the total units: ";
    cin >> unit;


    if (unit <= 100)
    {
        amount = unit * 10;
        cout << "Amount =" << amount;
    }
    else if (unit > 100 && unit <= 200)
    {
        amount1 = 100 * 10;
        unit -= 100;
        amount2 = unit * 15;
        cout << "Amount =" << (amount1 + amount2);
    }
    else if (unit > 200 && unit <= 300)
    {
        amount1 = 100 * 10;
        amount2 = 100 * 15;
        unit -= 200;
        amount3 = unit * 20;
        cout << "Amount =" << (amount1 + amount2 + amount3);
    }
    else
    {
        amount1 = 100 * 10;
        amount2 = 100 * 15;
        amount3 = 100 * 20;
        unit -= 300;
        amount4 = unit * 25;
        cout << "Amount =" << (amount1 + amount2 + amount3 + amount4);
    }

}