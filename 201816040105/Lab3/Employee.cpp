// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

Employee::Employee(string FirstName,string LastName,int x) 
{
   	setFirstName(FirstName);
   	setLastName(LastName);
   	setIncome(x);
}

void Employee:: setFirstName(string FirstName)
{
	first=FirstName;
}

string Employee:: getFirstName()
{
	return first;
}

void Employee:: setLastName(string LastName)
{
	last=LastName;
}

string Employee:: getLastName()
{
	return last;
}

void Employee::setIncome(int income)
{
	Income=income;
}
int Employee::getIncome()
{
	return Income;
}
