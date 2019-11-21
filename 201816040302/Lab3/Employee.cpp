// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
Employee::Employee(string fname,string lname,int salary1)
{
    setfristname(fname);
    setlastname(lname);
    setsalary(salary1);
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
void Employee::setfristname(string fname)
{
    fristname=fname;
}
/* Define a set function for the first name data member. */
string Employee::getfristname()
{
    return fristname;
}
/* Define a get function for the first name data member. */
void Employee::setlastname(string lname)
{
    lastname=lname;
}
/* Define a set function for the last name data member. */
string Employee::getlastname()
{
    return lastname;
}
/* Define a get function for the last name data member. */
void Employee::setsalary(int salary1)
{
    salary=salary1;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
int Employee::getsalary()
{
    return salary;
}
/* Define a get function for the monthly salary data member. */
void Employee::func()
{
    salary=salary+salary*0.1;
}
