// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string a,string b,int c)
{
    firstname=a;
    lastname=b;
    salary=c;
}
    /* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

void Employee::setFirstName(string a)
{
    firstname=a;
}/* Define a set function for the first name data member. */

string Employee::getFirstName()
{
    return firstname;
}/* Define a get function for the first name data member. */

void Employee::setLastName(string b)
{
    lastname=b;
}
/* Define a set function for the last name data member. */

string Employee::getLastName()
{
    return lastname;
}
/* Define a get function for the last name data member. */

void Employee::setSalary(int c)
{
    salary=c*1.1;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

int Employee::getSalary()
{
    return salary;
}
/* Define a get function for the monthly salary data member. */
