//Ryan Lijewski
//Week 6 Assignment
//Programming Exercise #1

#include "stdafx.h"
#include <iostream>

using namespace std;

int stars(int num)
{
	int x;

	if (num <= 0)
		return  -1;

	for (int i = 0; i < num; i++)
		cout << '*';

	cout << endl;

	x = stars(num - 1);

	for (int i = 0; i < num; i++)
		cout << '*';

	cout << endl;

	return 0;
}

int main()
{
	int number;
	cout << "Enter the number of lines you want" << endl;
	cin >> number;

	stars(number);

    return 0;
}

