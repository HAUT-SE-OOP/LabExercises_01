// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee( string first, string last ,int monthlySalary)
{
    setFirstName( first ); // initializes firstName
    setLastName( last );// initialiZes lastName
    setMonthlySalary( monthlySalary);// initialiZes monthlySalary
}
/* Define a set function for the first name data member. */
void Employee::setFirstName( string name )
{
    firstName = name; // store the firstname
} // end function setFirstName

/* Define a get function for the first name data member. */
string Employee::getFirstName()
{
    return firstName;
}

/* Define a set function for the last name data member. */
void Employee::setLastName( string name )
{
    lastName = name;// store the lastname
} // end function setLastName
/* Define a get function for the last name data member. */
string Employee::getLastName()
{
    return lastName;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMonthlySalary( int number  )
{
    if(number<0)
        number=0;
    monthlySalary = number; // store the MonthlySalary
} // end function setMonthlySalary
/* Define a get function for the monthly salary data member. */
int Employee::getMonthlySalary()
{
    return monthlySalary;
}
