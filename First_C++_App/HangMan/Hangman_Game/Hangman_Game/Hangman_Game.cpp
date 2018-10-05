// Hangman_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <iostream>
#include <map>
#include <cstdlib>
#include <ctime>
using namespace std;

map<string, string> wordLibrary = { 
	{"Kitten","A furry animal" },
	{"Doggo", "If you know the meme 'Such Meme, Much Wow' you will know what this is"},
	{"Meme Lord", "Something that everyone wants to be but few can achieve"},
	{"Water", "With out it you die, with too much of it you also die. What is this substance?"}
};

int randomWord;
int libraryLength = wordLibrary.count;
int minValue = 0;

void GenerateRandom ()
{
	srand(time(0));
	randomWord = rand() % libraryLength + minValue;
	
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << rand() % libraryLength + minValue << endl;
	}
    return 0;
}

