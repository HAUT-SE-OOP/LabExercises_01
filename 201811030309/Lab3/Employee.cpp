// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Employee::Employee(string cname, string cfamilyname, int csalary)
        :name(cname),familyname(cfamilyname),salary(csalary/12)
   {

   }

/* Define a set function for the first name data member. */
void Employee::setname( string cname )
{
    name=cname;
}

/* Define a get function for the first name data member. */
string Employee::getname()
{
    return name;
}

/* Define a set function for the last name data member. */
void Employee::setfamilyname( string cfamilyname )
{
    familyname=cfamilyname;
}

/* Define a get function for the last name data member. */
string Employee::getfamilyname()
{
    return familyname;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setsalary( int csalary )
{
    if(csalary>=0)
    salary=csalary/12;
    else
        salary=0;
}

/* Define a get function for the monthly salary data member. */
int Employee::getsalary()
{
    return salary*12;
}
