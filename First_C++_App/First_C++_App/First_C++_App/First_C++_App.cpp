// First_C++_App.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float CalculatePrice(int count, float price, float discount)
{
	float finalPrice;
	finalPrice = (count * price)*(discount / 100);
	return finalPrice;
}

int main()
{
	int count;
	float price = 1.50; 
	float discountPercent = 10;	
	cout << "Enter the amount of pickles you will be purchasing" << endl;
	cin >> count;
	cout << "Thank you, this is your final price:" << endl;
	cout << CalculatePrice(count, price, discountPercent) << endl;
	cout << "Thank you for shopping at Shoppy McShopface!" << endl;

    return 0;
}



