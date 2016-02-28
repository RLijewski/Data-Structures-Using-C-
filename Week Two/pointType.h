//Ryan Lijewski, Exercise 3

#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class pointType
{
public:
	void print() const;

	void setPoint(int x, int y);

	int getX() const;

	int getY() const;

	pointType();

protected:
	int pointX;
	int pointY;
};

pointType::pointType() 
{
	pointX = 0;
	pointY = 0;
}

void pointType::print() const
{
	cout << "Coordinate x: " << pointX << endl;
	cout << "Coordinate y: " << pointY << endl;
}

void pointType::setPoint(int x, int y)
{
	pointX = x;
	pointY = y;
}

int pointType::getX() const
{
	return pointX;
}

int pointType::getY() const
{
	return pointY;
}