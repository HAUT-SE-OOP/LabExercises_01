// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee( string firstname,string lastname, int yearlysalary )
{
    setFirstName ( firstname );
    setLastName ( lastname );
    setYearlySalary ( yearlysalary );
}
  /* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

void Employee::setFirstName( string name )
{
    firstName = name;
}/* Define a set function for the first name data member. */

string Employee::getFirstName()/* Define a get function for the first name data member. */
{
    return firstName;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string name2)
{
    lastName = name2;
}
/* Define a get function for the last name data member. */
string Employee::getLastName()
{
    return lastName;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setYearlySalary(int salary01)
{
    yearlySalary = salary01;
}
/* Define a get function for the monthly salary data member. */
int Employee::getYearlySalary()
{
    return yearlySalary;
}

void Employee::Amount()
{
    yearlySalary *= 1.1;
}
