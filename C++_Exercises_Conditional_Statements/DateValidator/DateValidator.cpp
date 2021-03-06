//An app that validates a date that the user entered;
#include "pch.h"
#include <iostream>
using namespace std;

int getDaysInMonth(int);
bool validate(int, int, int);

int main()
{
	int inputDay = 0;
	int inputMonth = 0;
	int inputYear = 0;

	cout << "Please input day" << endl;
	cin >> inputDay;

	cout << "Please input a month" << endl;
	cin >> inputMonth;

	cout << "Please input a day" << endl;
	cin >> inputYear;

	bool dateIsValid = validate(inputDay, inputMonth, inputYear);

	if (dateIsValid)
	{
		cout << "This is a valid date!";
	}
	else
	{
		cout << "This date is invalid!";
	}
}

bool validate(int inputDay, int inputMonth, int inputYear)
{
	int daysInInputMonth = getDaysInMonth(inputMonth);

	if (inputDay > daysInInputMonth)
	{
		return false;
	}
	if (inputMonth > 12)
	{
		return false;
	}
	if (inputYear < 1900)
	{
		return false;
	}

	return true;
}

int getDaysInMonth(int inputMonth)
{

	int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return daysInMonth[inputMonth + 1];

}
