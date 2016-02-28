//Ryan Lijewski 
//Week 3 Assignment
//Programming Exercise #10

#pragma once

#include "stdafx.h"
#include <iostream>

using namespace std;

class safeArray
{
public:
	safeArray(int s, int e);
	int getAtIndex(int i);
	void addAtIndex(int n, int i);
	bool checkBounds(int i);
	void print();
	int convertIndex(int i);

private:
	int boundsStart;
	int boundsEnd;
	int arrayLength;
	int *newArray;
};

safeArray::safeArray(int s, int e) {

	if (e > s)
	{
		boundsStart = s;
		boundsEnd = e;
		arrayLength = boundsEnd - boundsStart;

		newArray = new int[arrayLength];
	}
	else
	{
		cout << "The bounds end must be greater than the bounds start." << endl;
		exit(0);
	}
	
}

bool safeArray::checkBounds(int i)
{
	if (i >= boundsStart && i < boundsEnd)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int safeArray::getAtIndex(int i)
{
		return newArray[safeArray::convertIndex(i)];
}

void safeArray::addAtIndex(int n, int i) 
{
		newArray[safeArray::convertIndex(i)] = n;
}

void safeArray::print()
{
	for (int i = 0; i < arrayLength; i++)
	{
		cout << newArray[i] << endl;
	}
}

int safeArray::convertIndex(int i)
{
	if (safeArray::checkBounds(i))
	{
		int index;

		if (boundsStart == 0)
		{
			index = i;
		}
		else if (boundsStart > 0)
		{
			index = i - boundsStart;
		}
		else if (boundsStart < 0)
		{
			index = i + (boundsStart * -1);
		}

		cout << "Converted index is: " << index << endl;
		return index;
	}
	else
	{
		cout << "The index is out of bounds" << endl;
		exit(0);
	}
}
