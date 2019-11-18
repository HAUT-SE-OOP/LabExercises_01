// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname, string lastname, int salary)
{
    setFirstname(firstname);
    setLastname(lastname);
    if(salary < 0)
    {
        salary=0;
    }
    setSalary(salary);
}

/* Define a set function for the first name data member. */
void Employee::setFirstname(string firstname)
{
    first_name=firstname;
}
/* Define a get function for the first name data member. */
string Employee::getFirstname()
{
    return first_name;
}
/* Define a set function for the last name data member. */
void Employee::setLastname(string lastname)
{
    last_name=lastname;
}
/* Define a get function for the last name data member. */
string Employee::getLastname()
{
    return last_name;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::addSalary()
{
    Salary*=1.1;
}

/* Define a get function for the monthly salary data member. */
void Employee::setSalary(int salary)
{
    Salary=salary;
}

int Employee::getSalary()
{
    return Salary;
}