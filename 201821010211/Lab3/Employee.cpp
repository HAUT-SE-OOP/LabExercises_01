// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string name,string name,int salary)
{
    setFirstName(name);
    setLastName(name);
    setMonthSalary(salary);
}/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

void Employee::setFirstName(string name)
{
    firstName=name;
}/* Define a set function for the first name data member. */

string Employee::getFirstName()const
{
    return firstName;
}/* Define a get function for the first name data member. */

void Employee::setLastName(string name)
{
    lirstName=name;
}/* Define a set function for the last name data member. */

string Employee::getLirstName()const
{
    return lirstName;
}/* Define a get function for the last name data member. */

void Employee::setMonthSalary(int salary)
{
    if(salary>=0)
       monthSalary=salary;
    if(salary<0)
       monthSalary=0;
}/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

int Employee::getMonthSalary()const
{
    return monthSalary;
}/* Define a get function for the monthly salary data member. */
