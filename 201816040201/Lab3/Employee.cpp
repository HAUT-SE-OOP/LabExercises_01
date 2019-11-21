// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string first,string last,int qian)
{
    setfirstname(first);
    setlastname(last);
    setmoney(qian);
}
void Employee::setfirstname(string first)
{
    firstname=first;
}
void Employee::setlastname(string last)
{
    lastname=last;
}
void Employee::setmoney(int qian)
{
    money=0;
    if(qian>0)
    money=qian;
}
string Employee::getfirstname()
{
    return firstname;
}
string Employee::getlastname()
{
    return lastname;
}
int Employee::getmoney()
{
    return money*12;
}
void Employee::changmoney()
{
    money=money+money*0.1;
}
/* Define a set function for the first name data member. */

/* Define a get function for the first name data member. */

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
