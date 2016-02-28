#pragma once

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class personType
{
public:
	void print() const;

	void setFirstName(string first);

	void setLastName(string last);

	void setMiddleName(string middle);

	string getFirstName() const;

	string getLastName() const;

	string getMiddleName() const;

	string checkFirstName(string first);

	string checkLastName(string last);

	personType();

	personType(string first, string middle, string last);

private:
	string firstName;
	string lastName;
	string middleName;
};

void personType::print() const
{
	cout << firstName << " " << middleName << " " << lastName << endl;
}

void personType::setFirstName(string first)
{
	firstName = first;

}

void personType::setMiddleName(string middle)
{
	middleName = middle;
}

void personType::setLastName(string last)
{
	lastName = last;
}

string personType::getFirstName() const
{
	return firstName;
}

string personType::getLastName() const
{
	return lastName;
}

string personType::getMiddleName() const
{
	return middleName;
}

string personType::checkFirstName(string first)
{
	string match;

	if (first == getFirstName())
	{
		match = "true";
	}
	else
	{
		match = "false";
	}

	return match;
}

string personType::checkLastName(string last)
{
	string match;

	if (last == getLastName())
	{
		match = "true";
	}
	else
	{
		match = "false";
	}
	
	return match;
}

personType::personType()
{
	firstName = "";
	lastName = "";
	middleName = "";
}

personType::personType(string first, string middle, string last)
{
	firstName = first;
	lastName = last;
	middleName = middle;
}