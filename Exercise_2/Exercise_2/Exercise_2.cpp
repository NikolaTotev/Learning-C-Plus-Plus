// Exercise_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//NOTES
// Talking about primitive variables.
// Literals - something directly written in the code

#include "pch.h"
#include <iostream>
using namespace std;
float inputNumber;
float a = 5;
float b = 2;

int main()
{
	cout << "Please enter a number:" << endl;
	cin >> inputNumber;
	cout << "The result is:" << endl;
	cout << inputNumber / 2 << endl;
	cout << "Much string, such wow" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
