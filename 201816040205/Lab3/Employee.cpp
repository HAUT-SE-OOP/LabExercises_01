// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string firstn,string lastn,int sal)
{
    setFirstName(firstn);
    setLastName(lastn);
    setSalary(sal);
}
 /* Define the constructor. Assign each parameter value to the appropriate data
   {member. Write code that validates the value of salary to ensure that it is
   not negative. */

void Employee::setFirstName(string name)
{
    firstName=name;
} /* Define a set function for the first name data member. */

void Employee::setLastName(string name)
{
    lastName=name;
}
 /* Define a get function for the first name data member. */
void Employee::setSalary(int sal)
{
    salary=sal;
}

string Employee::getFirstName()
{
    return firstName;
}

string Employee::getLastName()
{
    return lastName;
}

int Employee::getSalary()
{
    return salary;
}




/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
