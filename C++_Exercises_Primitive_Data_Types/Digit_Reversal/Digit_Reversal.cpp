// Digit_Reversal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int numberToReverse;
	int reversedNumber = 0;
	int remainder;

	cout << "Please Input The Number You Want To Reverse" << endl;
	cin >> numberToReverse;

	while (numberToReverse != 0)
	{
		remainder = numberToReverse % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		numberToReverse /= 10;
		cout << numberToReverse << " numberToReverse" << endl;
		cout << " " << endl;
		cout << reversedNumber << " reversedNumber" << endl;
		cout << " " << endl;
		cout << remainder << " remainder" << endl;
		cout << " " << endl;
	}

	cout << "The Reversed Number Is:" << reversedNumber;
}
