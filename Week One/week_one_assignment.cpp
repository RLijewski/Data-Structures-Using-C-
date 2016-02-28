// week_one_assignment.cpp
// Ryan Lijewski
// Programming Exercise #4

#include "stdafx.h"
#include <string>
#include <iostream>
#include "personType.h"

using namespace std;

int main()
{
	personType newPerson("Ryan", "Michael", "Lijewski");

	newPerson.print();

	newPerson.setFirstName("Jerry");
	newPerson.setLastName("Mavis");
	newPerson.setMiddleName("Robert");

	newPerson.print();

	cout << newPerson.checkFirstName("Ryan") << endl;
	cout << newPerson.checkLastName("Lijewski") << endl;

	cout << newPerson.checkFirstName("Jerry") << endl;
	cout << newPerson.checkLastName("Mavis") << endl;

    return 0;
}