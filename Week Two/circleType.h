//Ryan Lijewski, Exercise 4

#pragma once
#include "stdafx.h"
#include <iostream>
#include "pointType.h"

using namespace std;

class circleType: public pointType
{
public:
	circleType();

	void setRadius(double r);

	void print() const;

	void calcArea();

	void calcCircumference();

	void setPoint(int x, int y);

	int getX() const;

	int getY() const;

	double getRadius() const;

private:
	double radius;
	const double PIE = 3.14;
};

circleType::circleType()
	: pointType()
{
	radius = 0;
}

void circleType::setRadius(double r)
{
	radius = r;
}

void circleType::print() const
{
	pointType::print();
	cout << "Radius: " << radius << endl;
}

void circleType::calcArea()
{
	cout << (radius * radius) * PIE << endl;
}

void circleType::calcCircumference()
{
	cout << 2 * PIE * radius << endl;
}

void circleType::setPoint(int x, int y)
{
	pointType::setPoint(x, y);
}

int circleType::getX() const
{
	return pointType::getX();
}

int circleType::getY() const
{
	return pointType::getY();
}

double circleType::getRadius() const
{
	return radius;
}