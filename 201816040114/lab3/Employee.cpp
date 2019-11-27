// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Employee::Employee(string a,string b,int c)
   {
       setFirstName(a);
       setLastName(b);
       setMonthlySalary(c);
   }

/* Define a set function for the first name data member. */
void Employee::setFirstName(string a)
{
    firstname=a;
}
/* Define a get function for the first name data member. */
string Employee::getFirstName()
{
    return firstname;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string a)
{
    lastname=a;
}
/* Define a get function for the last name data member. */
string Employee::getLastName()
{
    return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMonthlySalary(int a)
{
    monthlysalary=a;
}
/* Define a get function for the monthly salary data member. */
int Employee::getMonthlySalary()
{
    return monthlysalary;
}
