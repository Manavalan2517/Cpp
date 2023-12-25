
/*
 Problem_8 :-
 To find out whether the given String is Palindrome or not.
*/

#include <iostream>
using namespace std;

void Problem_34()
{
	string str;
	int len;
	int i;
	int count;
	cout << "Enter any word: ";
	cin >> str;
	i = 0;
	count = 0;
	len = str.length() - 1;

	while (len > 0)
	{
		if (str[len] == str[i])
		{
			count++;
			i++;
			len--;
		}
		else
		{
			cout << "Its not a Palindrome.";
			break;
		}
	}
	if (i == (str.length()-1))
	{
		cout << "Its a Palindrome.";
	}
}