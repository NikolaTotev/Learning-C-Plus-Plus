// Function_Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int returnMax(int, int);
bool numAreEqual(int, int);
bool isDivisable(int, int);
int sumify(int);
int reverser(int);
int main()
{
	int inputOne = 0;
	int inputTwo = 0;
	cin >> inputOne >> inputTwo;
	//cout << returnMax(inputOne, inputTwo);
	//cout << numAreEqual(inputOne, inputTwo);
	//cout << isDivisable(inputOne, inputTwo);
	//cout << sumify(inputOne);
	cout << reverser(inputOne);
	return 0;
}
int sumify(int nIndex)
{
	int sum = 0;
	for (int i = 0; i < nIndex; i++)
	{
		sum++;
	}
	return sum;
}
int returnMax(int numOne, int numTwo)
{
	if (numOne > numTwo)
	{
		return numOne;
	}
	return numTwo;
}

bool numAreEqual(int numOne, int numTwo)
{
	if (numOne == numTwo)
	{
		return true;
	}

	return false;
}

bool isDivisable(int numOne, int numTwo)
{
	if (numOne%numTwo == 0)
	{
		return true;
	}

	return false;
}

int reverser(int inputNumber)
{
	int result = 1;
	int remainder = 0;
	while (inputNumber > 0)
	{
		remainder = inputNumber % 10;

		result *= 10;
		result += result;
		inputNumber = inputNumber / 10;
	}
	return result;
}

bool checkIfPrime(int inputNum)
{
	
}