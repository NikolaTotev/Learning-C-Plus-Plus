// Years_Months_Weeks_From_Age_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int age;
	int years;
	int months;
	int weeks;
	int hours;
	int seonds;
	cout << "Enter your age" << endl;
	cin >> age;
	years = age;
	months = age * 12;
	weeks = age * 52;
	hours = age * 356 * 24;

	cout << "You Have Lived" << years << " Years" << endl;
	cout << "You Have Lived" << months <<  " Months" << endl;
	cout << "You Have Lived" << weeks << " Weeks" << endl;
	cout << "You Have Lived" << hours << " Hours" << endl;
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
