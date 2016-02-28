// week_two_assignment.cpp : Defines the entry point for the console application.
// Ryan Lijewski, Exercises 3 and 4.

#include "stdafx.h"
#include <iostream>
#include "pointType.h"
#include "circleType.h"

using namespace std;

int main()
{
	// Exercise 3
	pointType newPoint = pointType();

	newPoint.print();

	newPoint.setPoint(7, 12);

	newPoint.print();

	cout << newPoint.getX() << endl;
	cout << newPoint.getY() << endl;

	// Exercise 4
	circleType newCircle = circleType();

	newCircle.print();

	newCircle.setRadius(12);

	newCircle.setPoint(2, 3);

	newCircle.print();

	newCircle.calcArea();

	newCircle.calcCircumference();

	double radius = newCircle.getRadius();
	int x = newCircle.getX();
	int y = newCircle.getY();

	cout << "Coordinate x: " << x << endl;
	cout << "Coordinate y: " << y << endl;
	cout << "Radius: " << radius << endl;

    return 0;
}

