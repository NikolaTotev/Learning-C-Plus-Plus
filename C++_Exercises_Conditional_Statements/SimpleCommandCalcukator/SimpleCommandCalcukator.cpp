// SimpleCommandCalcukator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace  std;
int main()
{
	enum cmds { Additions, Multiplication, Power };

	int inputA;
	int inputB;
	int commandInput;
	cout << "Input your first number" << endl;
	cin >> inputA;
	cout << "Input your second number" << endl;
	cin >> inputB;
	cout << "What command would you like to run?" << endl;
	cout << "1. for addition" << endl << "2. for multiplication" << endl << "3. for power" << endl;
	cin >> commandInput;

	switch (commandInput)
	{
	case(1):
		cout << inputA + inputB;
		break;
	case(2):
		cout << inputA * inputB;
		break;
	case(3):
		cout << pow(inputA, inputB);
		break;
	}

}
