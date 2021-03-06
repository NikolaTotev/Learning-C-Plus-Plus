// SudokuProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
bool isValidRow(int);
bool isValidCol(int);
bool isValidBlock(int, int);
bool isValidSolution();
bool isValidNumber();
int correct_sudoku[9][9] =
{ 
{ 2, 9, 5,  7, 4, 3,  8, 6, 1 },
{ 4, 3, 1,  8, 6, 5,  9, 2, 7 },
{ 8, 7, 6,  1, 9, 2,  5, 4, 3 },

{ 3, 8, 7,  4, 5, 9,  2, 1, 6 },
{ 6, 1, 2,  3, 8, 7,  4, 9, 5 },
{ 5, 4, 9,  2, 1, 6,  7, 3, 8 },

{ 7, 6, 3,  5, 2, 4,  1, 8, 9 },
{ 9, 2, 8,  6, 7, 1,  3, 5, 4 },
{ 1, 5, 4,  9, 3, 8,  6, 7, 2 } };


int incorrect_sudoku[9][9] =
{
{ 2, 9, 5,  7, 4, 3,  8, 6, 1 },
{ 4, 3, 1,  8, 6, 5,  9, 2, 7 },
{ 8, 7, 6,  1, 9, 2,  5, 4, 3 },

{ 3, 8, 7,  4, 5, 9,  2, 1, 6 },
{ 6, 1, 2,  3, 8, 7,  4, 9, 5 },
{ 5, 4, 9,  2, 1, 6,  7, 3, 8 },

{ 7, 6, 3,  5, 2, 4,  1, 8, 9 },
{ 9, 2, 8,  6, 7, 1,  3, 5, 4 },
{ 1, 5, 4,  9, 3, 8,  6, 7, 2 } };


int unsolved_sudoku[9][9] =
{
{ 2, 9, 5,  7, 4, 3,  8, 6, 1 },
{ 4, 3, 1,  8, 6, 5,  9, 2, 7 },
{ 8, 7, 6,  1, 9, 2,  5, 4, 3 },

{ 3, 8, 7,  4, 5, 9,  2, 1, 6 },
{ 6, 1, 2,  3, 8, 7,  4, 9, 5 },
{ 5, 4, 9,  2, 1, 6,  7, 3, 8 },

{ 7, 6, 3,  5, 2, 4,  1, 8, 9 },
{ 9, 2, 8,  6, 7, 1,  3, 5, 4 },
{ 1, 5, 4,  9, 3, 8,  6, 7, 2 } };

int cube_points[9][2] =
{
	{0,3},
	{0,6},
	{0,9},

	{0,3},
	{0,6},
	{0,9},

	{0,3},
	{0,6},
	{0,9},
};
int main()
{
	const int size = 9;
	for(int i = 0; i < size; i++ )
	{
		for(int j = 0; i < size; i++)
		{
			if(!(unsolved_sudoku[i][j] == 0))
			{
				continue;
			}

			for(int num = 1; num <= 9; num++)
			{
				
			}
		}
	}
}

bool isValidRow(int row)
{
	const int size = 9;
	bool isMet[size];


	for (int i = 0; i < size; i++)
	{
		isMet[i] = false;
	}

	for (int i = 0; i < size; i++)
	{
		int value = correct_sudoku[row][i];

		if (value == 0)
		{
			return false;
		}

		if (isMet[value - 1])
		{
			return false;
		}

		isMet[value - 1] = true;
	}
	return true;
}

bool isValidCol(int column)
{
	const int size = 9;
	bool isMet[size];


	for (int i = 0; i < size; i++)
	{
		isMet[i] = false;
	}

	for (int i = 0; i < size; i++)
	{
		int value = correct_sudoku[i][column];

		if (value == 0)
		{
			return false;
		}

		if (isMet[value - 1])
		{
			return false;
		}

		isMet[value - 1] = true;

	}
	return true;
}

bool isValidBlock(int row, int col)
{
	const int size = 9;
	bool isMet[size];

	for (int i = 0; i < size; i++)
	{
		isMet[i] = false;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; i < 3; i++)
		{
			int value = correct_sudoku[row + i][col + i];
			if (value == 0)
			{
				return false;
			}
			if (isMet[value - 1])
			{
				return false;
			}
			isMet[value - 1] = true;
		}
	}

	return true;
}

bool isValidSolution()
{
	const int size = 9;
	for (int i = 0; i < size; i++)
	{
		if (!isValidRow(i) || !isValidCol(i))
		{
			return false;
		}
	}

	for (int i = 0; i < size; i += 3)
	{
		for (int j = 0; j < size; j += 3)
		{
			if (!isValidBlock(i, j))
			{
				return false;
			}
		}
	}

	return true;
}

bool isValidNumberAtPosition(int row, int col, int value)
{
	const int size = 9;

	for (int i = 0; i < size; i++)
	{
		if(unsolved_sudoku[i][col] == value)
		{
			return false;
		}
		if (unsolved_sudoku[row][i] == value)
		{
			return false;
		}
	}

	for(int i =0; i < size; i ++)
	{
		for(int j = 0; j < size; i++)
		{
			unsolved_sudoku[i][j];
		}
	}
}



