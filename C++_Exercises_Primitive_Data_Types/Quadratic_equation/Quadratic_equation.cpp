// Quadratic_equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

float CalculateXOne(float a, float b, float determinant)
{
	return (-b + sqrt(determinant)) / (a * 2);
}

float CalculateXTwo(float a, float b, float determinant)
{
	return (-b - sqrt(determinant)) / (a * 2);
}

float CalculateDeterminant(float a, float b, float c)
{
	return (b*b + -4*a * c);
}

int main()
{
	float a;
	float b;
	float c;
    float x1;
	float x2;
	float determinant;

	cout << "Input a" << endl;
	cin >> a;
	cout << "Input b" << endl;
	cin >> b;
	cout << "Input c" << endl;
	cin >> c;
	determinant = CalculateDeterminant(a, b, c);

	if(determinant > 0)
	{
		x1 = CalculateXOne(a, b, determinant);
		x2 = CalculateXTwo(a, b, determinant);
		cout << "The Answers Are:" << endl;
		cout << x1;
		cout << x2;
	}
	else
	{
		cout << "Determinant is negative" << endl;
	}
 
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
