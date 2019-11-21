// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
Employee::Employee( string lastname, string firstname,int salary )
{
   setLastName( lastname ); // initializes LastName
   setFirstName( firstname );//initializes FirstName
   setSalary(salary); // initialiZes Salary
} // end Employee constructor
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

void Employee::setFirstName( string name )
{
   FirstName = name;//name's value to her
}
/* Define a set function for the first name data member. */
string Employee::getFirstName()
{
   return FirstName;//return the data
}
/* Define a get function for the first name data member. */
void Employee::setLastName( string name )
{
   LastName = name;
}
/* Define a set function for the last name data member. */
string Employee::getLastName()
{
   return LastName;
}
/* Define a get function for the last name data member. */
void Employee::setSalary( int money )
{
    if(money<=0)//if the data is less than or equal to zero
        Salary=0;//make the Salary be zero
    else
        Salary = money*12; // make the salary equal to the data
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
int Employee::getSalary()
{
   return Salary;
}

/* Define a get function for the monthly salary data member. */
