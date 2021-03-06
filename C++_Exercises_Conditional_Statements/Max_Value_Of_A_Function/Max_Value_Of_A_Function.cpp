//Conditional Statements If/Switch
//Task 3 - Finds max value of a function in the interval [x1, x2];

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	//Equation Related Variables
	float arg_a = 0;
	float arg_b = 0;
	float arg_c = 0;

	//X Related Variables
	float xOne = 0;
	float xTwo = 0;
	float xZero = 0;

	//Final Variables
	float max_Value = 0;
	float min_Value = 0;

	//Input stuff
	cout << "Please input a, b, c, x1, x2 in this order" << endl;
	cin >> arg_a;
	cin >> arg_b;
	cin >> arg_c;
	cin >> xOne;
	cin >> xTwo;

	cout << "Calculating MAX value";

	//Calculates x0 by the formula -b/2a
	xZero = -arg_b / 2 * arg_a;

	//Checks the value of f(x1) and f(x2)
	float f_xOne = arg_a * pow(xOne, 2) + arg_b * xOne + arg_c;
	float f_xTwo = arg_a * pow(xTwo, 2) + arg_b * xTwo + arg_c;
	float f_xZero = arg_a * pow(xZero, 2) + arg_b * xZero + arg_c;

	if (arg_a < 0)
	{
		//Parabola is like an empty glass;
		// X0 would be the max Value if it is inside the interval [x1, x2];			
		if (xZero < xTwo && xZero > xOne)
		{
			max_Value = f_xZero;
			cout << "A is < 0 which means the parabola is upside down. This means the max value of the function is X0;" << endl;
			cout << "X Zero = " << max_Value << endl;
		}
		else
		{
			//Since x0 ! in the interval [x1, x2], compare if f(x1) or f(x2) is bigger.		
			if (f_xOne > f_xTwo)
			{
				max_Value = xOne;
				cout << "The Max Value Is: " << endl;
				cout << max_Value;
			}
			else if (f_xOne < f_xTwo)
			{
				max_Value = xTwo;
				cout << "The Max Value Is: " << endl;
				cout << max_Value;
			}
		}
	}
	else if (arg_a > 0)
	{
		//Since the parabola is upright, x0 is the min value of the function. This means either f(x1) or f(x2) 
		//is the biggest value.
		if (f_xOne > f_xTwo)
		{
			max_Value = xOne;
			cout << "The Max Value Is: " << endl;
			cout << max_Value << endl;
		}
		else if (f_xOne < f_xTwo)
		{
			max_Value = xTwo;
			cout << "The Max Value Is: " << endl;
			cout << max_Value << endl;

		}
	}
}
