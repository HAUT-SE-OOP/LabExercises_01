// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Employee::Employee (string fname,string lname,int salary)
   :firstname(fname),lastname(lname),monthlysalary(salary)
   {

   }

/* Define a set function for the first name data member. */
void Employee::setFirstName(string fname)
{
    firstname = fname;
}
/* Define a get function for the first name data member. */
string Employee::getFirstName() const
{
    return firstname;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string lname)
{
    lastname = lname;
}
/* Define a get function for the last name data member. */
string Employee::getLastName() const
{
    return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMonthlySalary(int salary)
{
    if(salary < 0)
        monthlysalary = 0;
    else
        monthlysalary = salary;
}
/* Define a get function for the monthly salary data member. */
int Employee::getMonthlySalary() const
{
    return monthlysalary;
}
