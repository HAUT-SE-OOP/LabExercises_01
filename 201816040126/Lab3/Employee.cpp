
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string firstname ,string lastname ,int salary)
{
    setFirstName( firstname );
    setLastName( lastname );
    setSalary( salary );
}

void Employee::setFirstName( string first )
{
   Firstname = first; // store the course name
}/* Define a set function for the first name data member. */

string Employee::getFirstName()
{
   return Firstname;
}/* Define a get function for the first name data member. */

void Employee::setLastName( string last )
{
   Lastname = last; // store the course name
}/* Define a set function for the last name data member. */

string Employee::getLastName()
{
   return Lastname;
}/* Define a get function for the last name data member. */

void Employee::setSalary( int salary )
{
    if(salary >= 0)
   Salary = salary;
   if(salary < 0)
    Salary = 0;// store the course name
}/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

int Employee::getSalary()
{
   return Salary;
}/* Define a get function for the monthly salary data member. */

