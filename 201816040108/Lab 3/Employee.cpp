// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname,string lastname,int salary)
{
    setfirstname(firstname);
    setlastname(lastname);
    setsalary(salary);
}
/* Define a set function for the first name data member. */
void Employee::setfirstname(string name)
{
    firstname=name;
}
/* Define a get function for the first name data member. */
string Employee::getfirstname()
{
    return firstname;
}
/* Define a set function for the last name data member. */
void Employee::setlastname(string name)
{
    lastname=name;
}
/* Define a get function for the last name data member. */
string Employee::getlastname()
{
    return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setsalary(int money)
{
    if(money>0)
        salary=money;
    else
        salary=0;
}
/* Define a get function for the monthly salary data member. */
int Employee::getsalary()
{
    return salary*12;
}
