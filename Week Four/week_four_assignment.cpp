//Ryan Lijewski
//Week 4 Assignment
//Programming Exercise #3

#include "stdafx.h"
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;


int main()
{
	vector<double> realVector;
	vector<double>::iterator one;

	realVector.push_back(6);
	realVector.push_back(2);
	realVector.push_back(1);
	realVector.push_back(9);
	realVector.push_back(5);

	one = realVector.begin();

	double high = *one;
	double low = *one;
	double sum = 0;
	double average;

	for (one; one != realVector.end(); ++one)
	{
			if (*one >= high)
			{
				high = *one;
			}

			else if (*one <= low)
			{
				low = *one;
			}

		sum += *one;
	}

	average = sum / realVector.size();

	cout << "The largest number in the vetor is " << high << endl;
	cout << "The smallest number in the vetor is " << low << endl;
	cout << "The average of all the numbers in the vetor is " << average << endl;

    return 0;
}

