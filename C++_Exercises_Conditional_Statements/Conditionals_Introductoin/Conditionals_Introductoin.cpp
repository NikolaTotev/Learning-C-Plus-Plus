// Conditionals_Introductoin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a=0;
	int b= 0;
	char myChar;
	cin >> myChar;
	bool ILoveSpaghetti = true;

	if (a == b && a % 2 == 0)
	{
		cout << "You get a cookie" << endl;
	}
	else
	{
		cout << "You don't get a cookie" << endl;
	}

	if (a % 2 == 0)
	{
		cout << "You get an atom of cookie" << endl;
	}
	else
	{
		cout << "Stop trying to get a cookie" << endl;
	}
	return 0;
}
