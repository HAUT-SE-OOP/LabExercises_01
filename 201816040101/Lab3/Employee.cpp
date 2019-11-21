// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname,string lastname,int income)
{
    setFirstname(firstname);
    setLastname(lastname);
    setIncome(income);
}
/* Define a set function for the first name data member. */
void Employee::setFirstname(string name)
{
    firstname=name;
}
/* Define a get function for the first name data member. */
string Employee::getFirstname()
{
    return firstname;
}
/* Define a set function for the last name data member. */
void Employee::setLastname(string name)
{
    lastname=name;
}
/* Define a get function for the last name data member. */
string Employee::getLastname()
{
    return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setIncome(int x)
{
    income=x;
}
/* Define a get function for the monthly salary data member. */
int Employee::getIncome()
{
    return income;
}
