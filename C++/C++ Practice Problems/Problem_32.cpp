/*
 Problem_32 :-
 Calculator
*/

#include <iostream>
using namespace std;

void Problem_32()
{
    char choice;
    char brk;
    int num1;
    int num2;

    while (true)
    {
        cout << endl;
        cout << ("To ADD any two numbers press ( + )") << endl;
        cout << ("To SUBTRACT any two numbers press ( - )") << endl;
        cout << ("To MULTIPLY any two numbers press ( * )") << endl;
        cout << ("To DIVIDE any two numbers press ( / )") << endl;
        cout << ("To find Reminder of any two numbers press ( % )") << endl;
        cout << ("Choose any one from the above: ");
        cin >> choice;

        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;

        if (choice == '+')
        {
            cout << "Added value = " << num1 + num2 << endl;
        }
        
        if (choice == '-')
        {
            cout << "Subracted value = " << num1 - num2 << endl;
        }

        if (choice == '*')
        {
            cout << "Multiplied value = " << num1 * num2 << endl;
        }

        if (choice == '/')
        {
            if (num2 == 0)
            {
                cout << "Denominator should not be zero." << endl;
            }
            else
            {
                cout << "Divided value = " << num1 / num2;
            }
        }

        if (choice == '%')
        {
            if (num2 == 0)
            {
                cout << "Denominator should not be zero.";
            }
            else
            {
                cout << "Remainder value = " << num1 % num2 << endl;
            }
        }
        cout << "Do you want to do any operation again ? [ 'y' , 'n' ]: ";
        cin >> brk;

        if (brk == 'n')
        {
            break;
        }
    }
}