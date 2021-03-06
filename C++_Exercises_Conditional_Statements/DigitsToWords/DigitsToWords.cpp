//An app that "translates" digits to words
#include "pch.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int inputDigit = 0;
	string output;
	map <int, string> singleDigitTranslations = 
	{
		{1, "one"},
		{2, "two"},
		{3, "three"},
		{4, "four"},
		{5, "five"},
		{6, "six"},
		{7, "seven"},
		{8, "eight"},
		{9, "nine"},
	};

	map <int, string> tensDigitTranslation =
	{
		{1, "onety"},
		{2, "twenty"},
		{3, "thirty"},
		{4, "forty"},
		{5, "fifty"},
		{6, "sixty"},
		{7, "seventy"},
		{8, "eighty"},
		{9, "ninety"},
	};

	cout << "Input a number" << endl;
	cin >> inputDigit;

	int firstDigit = inputDigit / 10;
	int secondDigit = inputDigit % 10;
	output = tensDigitTranslation.at(firstDigit) + "-" + singleDigitTranslations.at(secondDigit);

	cout << output;
}


