// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isSaw(int[100], int);
int main()
{
	int myArr[100];
	int numberOfInputs = 0;
	int currentInput = 0;
	int sum = 0;
	int avrgSum = 0;
	int currentMax = 0;
	cout << "Please input how many inputs" << endl;
	cin >> numberOfInputs;
	if (numberOfInputs < 100)
	{
		for (int i = 0; i <= numberOfInputs - 1; i++)
		{
			//cout << "Please input a number" << endl;
			cin >> currentInput;
			myArr[i] = currentInput;
			sum += currentInput;
		}

		if (isSaw(myArr, numberOfInputs))
		{
			cout << "Is Saw" << endl;
		}
		else
		{
			cout << "Isn't saw" << endl;
		}
	}
}
bool isSaw(int inputArray[], int numberOfInputs)
{
	for (int i = 0; i < numberOfInputs-1; i++)
	{
		if (i == 0)
		{
			if (inputArray[i] < inputArray[i + 1] || inputArray[i] > inputArray[i + 1])
			{
				continue;
			}

			return false;

		}

		if (i > 0 && i < numberOfInputs-1)
		{
			if (inputArray[i - 1] < inputArray[i] && inputArray[i] > inputArray[i + 1] || inputArray[i - 1] > inputArray[i] && inputArray[i] < inputArray[i + 1])
			{
				continue;
			}


			return false;
		}
		if (i == numberOfInputs-1)
		{

			if (inputArray[i] > inputArray[i - 1] || inputArray[i] < inputArray[i - 1])
			{
				continue;
			}
			return false;
		}
	}
	return  true;
}
//
//void reverse(int inputArr[100], int numberOfInputs)
//{
//	int newArr[100];
//	int tracker = 0;
//	int currentNum = 0;
//	for (int i = numberOfInputs - 1; i >= 0; i--)
//	{
//		currentNum = inputArr[i];
//		newArr[tracker] = currentNum;
//		tracker++;
//	}
//
//	for (int i = 0; i <= numberOfInputs - 1; i++)
//	{
//		inputArr[i] = newArr[i];
//		cout << inputArr[i] << endl;
//	}
//}