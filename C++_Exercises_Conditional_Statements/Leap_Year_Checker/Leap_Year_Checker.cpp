//Conditional Statements If/Switch
//Task 2 - Check if input year is a leap year or not.

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int inputYear;
	cout << "Please input the year you want to check" << endl;
	cin >> inputYear;
	if(inputYear < 1000)
	{
		cout << "Please enter a year after 1000";
	}
	else if(inputYear > 1000 && inputYear%4 == 0)
	{
		cout << "The year " << inputYear << " is a leap year"<< endl;
	}
	else if(inputYear > 1000 && inputYear % 400 == 0)
	{
		cout << "The year " << inputYear << " is a leap year" << endl;
	}
	else if(inputYear > 1000 && inputYear % 100 != 0)
	{
		cout << "The year " << inputYear << " is a leap year" << endl;
	}
	else
	{
		cout << "The year " << inputYear << " isn't a leap year"<< endl;
	}
}

