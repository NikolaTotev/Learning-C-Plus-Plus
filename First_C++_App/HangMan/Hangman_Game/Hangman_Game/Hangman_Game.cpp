// Hangman_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <iostream>
#include <map>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

map<string, string> wordLibrary = {
	{"Kitten","A furry animal" },
	{"Doggo", "If you know the meme 'Such Meme, Much Wow' you will know what this is"},
	{"Meme Lord", "Something that everyone wants to be but few can achieve"},
	{"Water", "With out it you die, with too much of it you also die. What is this substance?"}
};

int randomWord;
int libraryLength = wordLibrary.size();
int minValue = 0;

int GenerateRandom()
{
	srand(time(0));

	return rand() % libraryLength + minValue;
}

string GetWord()
{
}

void myfunction(int i) {  // function:
	std::cout << ' ' << i;
}

//string myfunction(int i) {  // function:
//	int index = GenerateRandom();
//	if(i==index)
//	{
//		return
//	}
//}

int main()
{
	
	  return 0;
}

