//Calculates days bewteen two dates
//

#include "pch.h"
#include <iostream>
using namespace std;
int getDaysInMonth(int);
int calcDaysInBetween(int, int);
void calcTotalDays(int, int, int, int, int, int, int);
int main()
{
	int startDay= 0;
	int endDay = 0;

	int startMonth= 0;
	int endMonth = 0 ;

	int daysLeftInStartMonth = 0;
	int daysLeftInEndMonth = 0;
	int daysInStartMonth = 0;
	int daysInEndMonth = 0;
	int daysInBetween = 0;

	cout << "Please input your start day and start month" << endl;
	cin >> startDay >> startMonth;
	cout << "Please input your start day and start month" << endl;
	cin >> endDay >> endMonth;

	if(startDay != getDaysInMonth(startMonth))
	{
		daysLeftInStartMonth = getDaysInMonth(startMonth) - startDay;
	}
	else
	{
		daysLeftInStartMonth = getDaysInMonth(startMonth);
	}

	if (endDay != getDaysInMonth(endMonth))
	{
		daysLeftInEndMonth = getDaysInMonth(endMonth) - endDay;
	}
	else
	{
		daysLeftInEndMonth = getDaysInMonth(endMonth);
	}

	daysInBetween = calcDaysInBetween(startMonth, endMonth);

	calcTotalDays(daysLeftInStartMonth, daysLeftInEndMonth, daysInBetween, startDay, startMonth, endDay, endMonth);

}

void calcTotalDays(int daysInStart, int daysInEnd, int daysInBetween, int startDay, int startMonth, int endDay, int endMonth)
{
	int totalDays = daysInStart + daysInBetween + daysInEnd;
	cout << "There are " << totalDays << "Days Between " << startDay << "." << startMonth << " and " << endDay << "." << endMonth << endl;
}

int getDaysInMonth(int inputMonth)
{
						
	int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	return daysInMonth[inputMonth +1];

}

int calcDaysInBetween(int startMonth, int endMonth)
{
	int daysInBetween = 0;
	for (int i = startMonth; i < endMonth; i++)
	{
		daysInBetween += getDaysInMonth(i);
	}

	return daysInBetween;
}

