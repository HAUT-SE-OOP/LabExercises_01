// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee( string firstname,string lastname,int monthsalary )
{
    setFirstName( firstname );
    setLastName( lastname );
    setMonthSalary( monthsalary );

}
/*Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative.*/

void Employee::setFirstName( string fname )
{
    firstName = fname;
}
// Define a set function for the first name data member.

string Employee::getFirstName()
{
    return firstName;
}
// Define a get function for the first name data member.

void Employee::setLastName( string lname )
{
    lastName = lname;
}
// Define a set function for the last name data member.

string Employee::getLastName()
{
    return lastName;
}
// Define a get function for the last name data member.

void Employee::setMonthSalary( int msalary )
{
    if( msalary>0 )
    {
        monthSalary = msalary;
    }
    else
    {
        monthSalary = 0;
    }
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
int Employee::getMonthSalary()
{
    return monthSalary;
}
// Define a get function for the monthly salary data member.
