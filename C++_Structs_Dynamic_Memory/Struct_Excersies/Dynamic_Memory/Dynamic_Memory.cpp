
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
struct Point
{
	int x;
	int y;
};

void print(Point pointOne, Point pointTwo);
float calculateDistance(Point pos1, Point pos2);

int main()
{
	int numberOfPoints = 0;

	cout << "How many point do you want?" << endl;
	cin >> numberOfPoints;

	Point* points = new Point[numberOfPoints];

	int x;
	int y;

	for (int i = 0; i < numberOfPoints; i++)
	{
		cin >> x >> y;
		points[i].x = x;
		points[i].y = y;
	}

	for (int i = 0; i < numberOfPoints; i++)
	{
		if (i < numberOfPoints - 1)
		{
			print(points[i], points[i + 1]);
		}

	}

	delete[] points;

}

void print(Point pointOne, Point pointTwo)
{
	cout << "Coord X Point 1: " << pointOne.x << " ";
	
	int* stuf[];
	vector<int> stuff;

	cout << "Coord X Point 2: " << pointTwo.x << " ";
	cout << "Coord Y Point 2: " << pointTwo.y << endl;

	cout << "Distance between these two points is: " << calculateDistance(pointOne, pointTwo) << " " << endl;
}

float calculateDistance(Point pos1, Point pos2)
{
	return sqrt(pow((pos1.x - pos2.x), 2) + pow((pos1.y - pos2.y), 2));
}

class List
{
	std::string* s = new std::string("abc");
	string* stuff;

};
