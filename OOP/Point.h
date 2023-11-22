#pragma once
#include <iostream>

using namespace std;
class Point
{
private:
	int x;
	int y;
	int z;

public:
	Point()
	{
		this->x = this->y = this->z = 0;
	}

	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Print();

};

