// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname,string lastname,int monthlysalary)
{
    setEmployee_firstname(firstname);
    setEmployee_lastname(lastname);
    setEmployee_monthlysalary(monthlysalary);
}

/* Define a set function for the first name data member. */
void Employee::setEmployee_firstname(string firstname)
{
    Employee_firstname = firstname;
}

/* Define a get function for the first name data member. */
string Employee::getEmployee_firstname()
{
    return Employee_firstname;
}
/* Define a set function for the last name data member. */
void Employee::setEmployee_lastname(string lastname)
{

    Employee_lastname = lastname;
}
/* Define a get function for the last name data member. */
string Employee::getEmployee_lastname()
{
    return Employee_lastname;
}


/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setEmployee_monthlysalary(int monthlysalary)
{
    if(monthlysalary < 0)
        Employee_monthlysalary = 0;
    else
        Employee_monthlysalary = monthlysalary;
}
/* Define a get function for the monthly salary data member. */
int Employee::getEmployee_monthlysalary()
{
    return Employee_monthlysalary;
}
