#include <thread>
#include <chrono>
#include "windows.h"
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14
int main() {
	HWND myconsole = GetConsoleWindow();
	HDC mydc = GetDC(myconsole);
	int pixel = 0;
	int pixel_1 = 0;
	COLORREF COLOR = RGB(255, 0, 0);
	COLORREF COLOR_2 = RGB(255, 0, 0);
	COLORREF COLOR_3 = RGB(255, 0, 0);
	COLORREF COLOR_4 = RGB(255, 0, 0);

	int offset_X;
	int offset_Y;

	int offset_X_H;
	int offset_Y_H;
	int size = 20;

	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_SHOWMAXIMIZED);

	int R;
	int G;
	int B;
	//Draw pixels

	double theta;
	double x;
	double y;
	double amplitude= 40;
	double k;
	double k1;
	double k2;
	double d = 4*4 +1;
	for (int i = 0; i < 10000; i++)
	{
		offset_X = 25 + (std::rand() % (3000 - 25 + 1));
		offset_Y = 25 + (std::rand() % (3000 - 25 + 1));


		size = 1 + (std::rand() % (3 - 1 + 1));
		R = 100 + (std::rand() % (255 - 100 + 1));
		G = 0 + (std::rand() % (255 - 0 + 1));
		B = 0 + (std::rand() % (255 - 0 + 1));
		COLOR = RGB(R, 0, 0);
		k = 0.8;
		k1 = 0.5;
		k2 = 2;
		for (double i = 0; i < 200; i += 0.1)
		{

			/*SetPixel(mydc, pixel, (double)(-20 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(-15 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(-10 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(-5 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(0 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(5 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(10 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(15 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(20 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(25 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(30 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(35 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(40 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(45 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(50 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(55 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(60 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(65 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(70 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(75 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(80 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(85 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(90 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(95 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(100 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(105 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(110 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(115 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(120 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(125 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(130 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel,  (double)(135 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(140 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(145 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(150 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(155 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(160 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(165 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(170 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(175 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(180 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(185 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(190 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(195 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(200 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(205 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(210 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(215 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(220 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(225 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(230 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(235 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(240 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(245 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(250 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(255 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(260 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(265 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(270 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(275 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(280 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(285 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(290 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(295 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(300 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);

			SetPixel(mydc, pixel, (double)(305 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
	*/

			theta = i / 2 * 3.14;
			x = amplitude * cos(k*theta)*cos(theta);
			y = amplitude * cos(k*theta)*sin(theta);
			SetPixel(mydc, offset_X + 400 + x, offset_Y + 300 + y, COLOR);

			x = amplitude * cos(k1*theta)*cos(theta);
			y = amplitude * cos(k1*theta)*sin(theta);
			SetPixel(mydc, offset_X  + x, offset_Y  + y, COLOR);

			x = amplitude * cos(k2*theta)*cos(theta);
			y = amplitude * cos(k2*theta)*sin(theta);
			SetPixel(mydc, offset_X + 169 + x, offset_Y + 369 + y, COLOR);

			SetPixel(mydc, offset_X+200 + (int)-(16 * sin(i)* sin(i)* sin(i)) * size, offset_Y+300 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * size, COLOR);

			SetPixel(mydc, offset_X + x , offset_Y +y, COLOR);




			/*SetPixel(mydc, 600 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 3, 200 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 3, COLOR_2);
			SetPixel(mydc, 90 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 2, 33 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 2, COLOR_3);
			SetPixel(mydc, 140 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 2, 60 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 2, COLOR_3);

			SetPixel(mydc, 180 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 2, 132 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 2, COLOR_3);

			SetPixel(mydc, 223 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 3, 50 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 3, COLOR_4);
			SetPixel(mydc, 190 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 3, 200 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 3, COLOR_2);
			SetPixel(mydc, 180 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 3, 400 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 3, COLOR_2);
			SetPixel(mydc, 150 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 3, 300 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 3, COLOR_2);
			SetPixel(mydc, 350 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 5, 400 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 5, COLOR_2);

			SetPixel(mydc, 456 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 3, 10 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 3, COLOR_2);
			SetPixel(mydc, 750 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 3, 230 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 3, COLOR_2);
			SetPixel(mydc, 652 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 4, 300 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 4, COLOR_2);

			SetPixel(mydc, 850 + (int)-(16 * sin(i)* sin(i)* sin(i)) * 3, 200 + (int)-(13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i)) * 3, COLOR_2);
	*/
	//-(16*Math.Sin(i)* Math.Sin(i)* Math.Sin(i))*scale+canvas.Width/2, (int)-(13*Math.Cos(i)-5*Math.Cos(2*i)-2*Math.Cos(3*i)-Math.Cos(4*i))*scale

			//SetPixel(mydc, pixel, (double)(400 + 2+sin(i/pow(3, i))), COLOR);

			std::this_thread::sleep_for(std::chrono::milliseconds(1));

			pixel += 1 * pow(i, 0.5);
			pixel_1 += 1;
		}
	}




	ReleaseDC(myconsole, mydc);
	cin.ignore();
	return 0;
}
