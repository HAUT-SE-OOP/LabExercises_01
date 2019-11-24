// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
Employee::Employee(string first, string last, int salary)
{
    setfirstName(first);
    setlastName(last);
    setmonthlySalary(salary);

}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

void Employee::setfirstName(string name)
{
  firstname=name;
}
/* Define a set function for the first name data member. */

string Employee::getfirstName()
{
    return firstname;
}
/* Define a get function for the first name data member. */

void Employee::setlastName(string name)
{
    lastname=name;
}
/* Define a set function for the last name data member. */

string Employee::getlastName( )
{
    return lastname;
}
/* Define a get function for the last name data member. */

void Employee::setmonthlySalary(int salary)

{
      if(salary>0)
      {
          monthlySalary=salary;
      }
      else
      {
          monthlySalary=0;
      }
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

int Employee::getmonthlySalqry()
{
    return monthlySalary;
}
/* Define a get function for the monthly salary data member. */
