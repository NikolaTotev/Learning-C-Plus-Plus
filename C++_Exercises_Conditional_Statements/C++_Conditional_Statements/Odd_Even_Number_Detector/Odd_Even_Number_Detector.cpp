//Conditional Statements If/Switch
//Task 1 - Check if input number is even or odd.

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int numberToCheck;
	cout << "Please input the number you want to check." << endl;
	cin >> numberToCheck;

	//Checks if the number is even by checking if the operation numberToCheck%2 == 0. 
	//If it is zero that means the number is even
	if(numberToCheck%2==0)
	{
		cout << "Number " << numberToCheck << " is even" << endl;
	}
	else
	{
		cout << "Number " << numberToCheck << " is odd" << endl;
	}
}