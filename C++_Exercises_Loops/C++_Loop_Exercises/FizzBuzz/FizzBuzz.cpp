// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int inputNumber = 0;

	cin >> inputNumber;
	for (int i = 0; i < inputNumber; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			if (i % 5 == 0 && i % 3 == 0)
			{
				cout << "FizzBuzz" << endl;
			}
			else if (i % 5 == 0)
			{
				cout << "Fizz" << endl;
			}
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

}
