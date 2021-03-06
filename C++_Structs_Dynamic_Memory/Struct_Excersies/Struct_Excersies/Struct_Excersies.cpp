
#include "pch.h"
#include <iostream>
using namespace std;


struct Point
{
	int x;
	int y;
};

float calculateDistance(Point pos1, Point pos2);

int main()
{
	Point point_1;
	Point point_2;

	point_1.x = 10;
	point_1.y = 2;

	point_2.x = 17.3;
	point_2.y = -11.8;
	cout << calculateDistance(point_1, point_2);
}

float calculateDistance (Point pos1, Point pos2)
{
	return sqrt(pow((pos1.x - pos2.x), 2) + pow((pos1.y - pos2.y), 2));
}
