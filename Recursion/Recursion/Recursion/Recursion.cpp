// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
unsigned long fib(int);
int main()
{
	cout << fib(200);
}

unsigned long fib(int n)
{
	if(n == 1 || n ==2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
