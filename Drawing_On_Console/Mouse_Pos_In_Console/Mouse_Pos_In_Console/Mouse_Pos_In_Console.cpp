// Mouse_Pos_In_Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <windows.h>
#include <winuser.h>
#include <conio.h>
using namespace std;

HWND myconsole = GetConsoleWindow();
HDC mydc = GetDC(myconsole);
int pixel = 0;
int pixel_1 = 0;
COLORREF COLOR = RGB(255, 255, 255);



void drawcircle(int x, int y, int a, int b) {

	

	POINT Center;
	Center.x = x;
	Center.y = y;
	double radius = a;
	const double PI = 3.14159;

	for (double angle = 0; angle <= 2 * PI; angle += 0.001)
	{		
		SetPixel(mydc, Center.x + radius * cos(angle), Center.y + radius * sin(angle), COLOR);

	}//You are using radians so you will have to increase by a very small amount
		 //This will have the coordinates  you want to draw a point at
		
}


int main()
{
	int x = 0;
	int y = 0;
	int w = 0;
	int z = 0;
	int c = 0;
	c = 0;

	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_SHOWMAXIMIZED);
	while (1)
	{
		mouse_event(MOUSEEVENTF_MOVE, x, y, w, z);
		POINT pt;
		GetCursorPos(&pt);
		x = pt.x;
		y = pt.y;
		if((GetKeyState(VK_RBUTTON) & 0x100) != 0)
		{
			SetConsoleMode(myconsole, ENABLE_QUICK_EDIT_MODE);

			//SetPixel(mydc, x, y, COLOR);
			drawcircle(x, y, 10, 10);


		}
		//SetPixel(mydc, x+1, y+1, COLOR);
		//SetPixel(mydc, x-1, y-1, COLOR);
		
		
		//cout << " " << endl;
		Sleep(20);
		x = 0;
		y = 0;
		c = c + 1;
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
