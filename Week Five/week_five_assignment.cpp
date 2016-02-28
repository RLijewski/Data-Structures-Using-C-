//Ryan Lijewski
//Week 5 Assignment
//Programming Exercise #2

#include "stdafx.h"
#include <iostream>

#include "unorderedLinkedList.h" 

using namespace std;

int main()
{
	unorderedLinkedList<int> list1;

	list1.insertLast(7);
	list1.insertLast(2);
	list1.insertLast(4);
	list1.insertLast(7);
	list1.insertLast(8);
	list1.insertLast(5);
	list1.print();

	cout << endl;

	list1.deleteSmall();
	list1.print();

	cout << endl;

	list1.deleteAll(7);
	list1.print();

    return 0;
}

