// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string, string, double)
{
    setEmployeefirstname(firstname);
    setEmployeelastname(lastname);
    setEmployeemonthlysalary(monthly);
}
/* Define a set function for the first name data member. */
void Employee::setEmployeefirstname(string Firstname1);
{
    firstname = Firstname1;
}
/* Define a get function for the first name data member. */
void Employee::get1Employeefirstname()
{
    return firstname;
}

/* Define a set function for the last name data member. */
void Employee::setEmployeelastname(string Lastname1);
{
    lastname = Lastname1;
}
/* Define a get function for the last name data member. */
void Employee::get1Employeelastname()
{
    return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setEmployeemonthlysalary(double salary1);
{
    monthlysalary = salary1;
}
/* Define a get function for the monthly salary data member. */
void Employee::get1Employeemonthlysalary()
{
    return salary1;
}
