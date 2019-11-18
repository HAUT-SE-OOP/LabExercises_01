// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include <iomanip>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee (string a,string b,int c)
{
	setFirstName(a);
	setLastName(b);
	setMonthlySalary(c);
}/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

void Employee::setFirstName(string a)
{
	firstName=a;
}/* Define a set function for the first name data member. */

string Employee::getFirstName()
{
	return firstName;
}/* Define a get function for the first name data member. */

void Employee::setLastName( string b )
{
	lastName=b;
}/* Define a set function for the last name data member. */

string Employee::getLastName()
{
	return lastName;
}/* Define a get function for the last name data member. */

void Employee::setMonthlySalary( int c )
{
	if ( c>0 )
	monthlySalary=c;
	else
	monthlySalary=0;
}/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

int Employee::getMonthlySalary()
{
	return monthlySalary;
}/* Define a get function for the monthly salary data member. */
