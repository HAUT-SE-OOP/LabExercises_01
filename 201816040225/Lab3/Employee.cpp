// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string name1,string name2,int salary1)
    :EmployeefName(name1), EmployeelName(name2), salary(salary1)
{
    /*setEmployeefName(name1);
    setEmployeelName(name2);
    setsalary(salary1);*/
}
/* Define a set function for the first name data member. */
void  Employee::setEmployeefName(string name1)
   {
       EmployeefName = name1;
   }
/* Define a get function for the first name data member. */
string Employee::getEmployeefName()
   {
       return EmployeefName;
   }
/* Define a set function for the last name data member. */
void Employee::setEmployeelName(string name2)
   {
       EmployeelName = name2;
   }
/* Define a get function for the last name data member. */
string Employee::getEmployeelName()
   {
       return EmployeelName;
   }
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setsalary(int salary1)
   {
     salary = salary1;
   }

int Employee::getsalary()
   {
       return salary;
   }
/* Define a get function for the monthly salary data member. */
void Employee::finalsalary()
{
    salary*=1.1;
}
