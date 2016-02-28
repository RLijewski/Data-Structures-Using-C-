//Ryan Lijewski 
//Week 3 Assignment
//Programming Exercise #10

#include "stdafx.h"
#include <iostream>
#include "safeArray.h"

using namespace std;

int main()
{
	safeArray myArray(2, 13);
	myArray.addAtIndex(45, 2);
	myArray.addAtIndex(76, 3);
	myArray.addAtIndex(65, 12);
	myArray.print();
	cout << myArray.getAtIndex(3) << endl;

	safeArray mySecondArray(-5, 9);
	mySecondArray.addAtIndex(45, -5);
	mySecondArray.addAtIndex(76, -4);
	mySecondArray.addAtIndex(65, 8);
	mySecondArray.print();
	cout << mySecondArray.getAtIndex(-4) << endl;

	safeArray myThirdArray(0, 10);
	myThirdArray.addAtIndex(45, 0);
	myThirdArray.addAtIndex(76, 1);
	myThirdArray.addAtIndex(65, 9);
	myThirdArray.print();
	cout << myThirdArray.getAtIndex(1) << endl;

	safeArray myfourthArray(4, -5);

    return 0;
}

