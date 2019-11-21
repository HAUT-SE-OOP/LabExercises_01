// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string last,string first,int monthly)
{
       setlastname(last);
       setfirstname(first);
       setmonthlysalary(monthly);
}

/* Define a set function for the first name data member. */
void Employee::setlastname(string last)
{
 lastname=last;
}
/* Define a get function for the first name data member. */
string Employee::getlastname()
{
    return lastname;
}
/* Define a set function for the last name data member. */
void Employee::setfirstname(string first)
{
 firstname=first;
}
/* Define a get function for the last name data member. */
string Employee::getfirstname()
{
    return firstname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setmonthlysalary(int monthly)
{
    monthlysalary=0;
    if(monthly>0)
    monthlysalary=monthly;
}
/* Define a get function for the monthly salary data member. */
int Employee::getmonthlysalary()
{
    return monthlysalary;
}
