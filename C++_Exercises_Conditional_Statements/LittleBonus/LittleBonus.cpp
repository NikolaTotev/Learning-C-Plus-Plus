
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int arrayLength = 0;
	cout << "Please input the length" << endl;
	cin >> arrayLength;
	int numberArray = {};

	for(int i = 0; i < arrayLength; i++)
	{
		numberArray[i] = i;
	}

}
