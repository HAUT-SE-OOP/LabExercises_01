// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string firstname,string lastname,int salary)
{
    setFirstName(firstname);
    setLastName(lastname);
    setSalary(salary);
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
void Employee::setFirstName(string fi)
{
    firstname = fi;
}
/* Define a set function for the first name data member. */
string Employee::getFirstName()
{
    return firstname;
}
/* Define a get function for the first name data member. */
void Employee::setLastName(string la)
{
    lastname = la;
}
/* Define a set function for the last name data member. */
string Employee::getLastName()
{
    return lastname;
}
/* Define a get function for the last name data member. */
void Employee::setSalary(int sa)
{
    salary = sa;
    if(salary<0)
    {
        salary=0;
    }
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
int Employee::getSalary()
{
    return salary;
}
/* Define a get function for the monthly salary data member. */
int Employee::peace()
{
    salary=salary*0.1+salary;
}
