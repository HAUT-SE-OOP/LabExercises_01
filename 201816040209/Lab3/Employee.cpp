// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname,string lastname,int yearsalary)
{
    setFirstName(firstname);
    setLastName(lastname);
    setYearSalary(yearsalary);
}

/* Define a set function for the first name data member. */
void Employee::setFirstName(string name)
{
    firstname = name;
}

/* Define a get function for the first name data member. */
string Employee::getFirstName()
{
    return firstname;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string name)
{
    lastname = name;
}
/* Define a get function for the last name data member. */
string Employee::getLastname()
{
    return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setYearSalary(int salary)
{
    yearsalary = salary;
}
/* Define a get function for the monthly salary data member. */
int Employee::getYearSalary()
{
    return yearsalary;
}
void Employee::setRaiseSalary()
{
    yearsalary *= 1.1;
}

