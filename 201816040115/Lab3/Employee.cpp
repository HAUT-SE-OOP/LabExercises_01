// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firName,string lasName,int monSalary)
{
    setFirstName(firName);  //initialize first name
    setLastName(lasName);   //initialize last name
    setMonthlySalary(monSalary);    //initialize monthly salary
}

/* Define a set function for the first name data member. */
void Employee::setFirstName(string firName)
{
    firstName=firName;
}

/* Define a get function for the first name data member. */
string Employee::getFirstName() const
{
    return firstName;
}

/* Define a set function for the last name data member. */
void Employee::setLastName(string lasName)
{
    lastName=lasName;
}

/* Define a get function for the last name data member. */
string Employee::getLastName() const
{
    return lastName;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMonthlySalary(int monSalary)
{
    if(monSalary<0)
    {
        monthlySalary=0;
    }
    else
    {
        monthlySalary=monSalary;
    }
}

/* Define a get function for the monthly salary data member. */
int Employee::getMonthlySalary() const
{
    return monthlySalary;
}
