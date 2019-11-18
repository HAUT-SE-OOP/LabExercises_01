// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee( string first, string last, int salary )
{
    // initializes first, last and monthlySalary
    setFirstName( first );
    setLastName( last );
    setMonthlySalary( salary );
} // end Employee constructor

//function for the first name data member
void Employee::setFirstName( string fname )
{
   firstName = fname; // store the first name
} // end function setFirstName

//get the first name data member.
string Employee::getFirstName()
{
   return firstName;
} // end function getFirstName

//function for the last name data member
void Employee::setLastName( string lname )
{
   lastName = lname; // store the last name
} // end function setLastName

//grt the last name data member
string Employee::getLastName()
{
   return lastName;
} // end function getLastName/* Define a get function for the last name data member. */

void Employee::setMonthlySalary( int msalary )
{
    if(msalary>0)
        monthlySalary = msalary; // store the monthly salary
    else
        monthlySalary = 0;
} // end function setLastName

int Employee::getMonthlySalary()
{
   return monthlySalary;
} // end function getLastName
