// Grader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int points;
	cin >> points;

	if(points < 20)
	{
		cout << "2 try again in the summer!" << endl;
	}
	else if(points < 40)
	{
		cout << "3 still better than 2" << endl;
	}
	else if (points < 60)
	{
		cout << "4 still better than 3" << endl;
	}
	else if (points < 80)
	{
		cout << "5 very good" << endl;
	}
	else if (points < 100)
	{
		cout << " 6 great job" << endl;
	}

     
}
