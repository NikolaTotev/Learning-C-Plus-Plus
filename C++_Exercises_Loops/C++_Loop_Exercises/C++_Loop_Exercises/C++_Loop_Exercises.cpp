//Basic loop exercise.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float loopLength = 0;
	float inputNumber = 0;
	float numberSum = 0;
	cin >> loopLength;
	for (int i = 0; i < loopLength; i++)
	{

		cin >> inputNumber;
		numberSum += inputNumber;
	}
	float finalResult = 0;
	finalResult = numberSum / loopLength;
	cout << finalResult;
}