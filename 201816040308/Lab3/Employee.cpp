// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string xx,string yy,int zz)
{
    name1=xx;
    name2=yy;
    salary=zz;
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

void Employee::setname1(string xx)
{
    name1=xx;
}
/* Define a set function for the first name data member. */

string Employee::getname1()
{
    return name1;
}
/* Define a get function for the first name data member. */

void Employee::setname2(string xx)
{
    name2=xx;
}
/* Define a set function for the last name data member. */

string Employee::getname2()
{
    return name2;
}
/* Define a get function for the last name data member. */

void Employee::setsalary(int xx)
{
    if(xx<=0){
        salary=0;
    }
    else
        salary=xx;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

int Employee::getsalary()
{
    return salary;
}
/* Define a get function for the monthly salary data member. */
