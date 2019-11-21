// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string employee1,string employee2,int money)
   {
       setemployeename(employee1);
       setemoloyeesurname(employee2);
       setemployeesalary(money);
   }
/* Define the constructor. Assign each parameter value to the appropriate data
member. 
void Employee::setemployeename(string name)
{
    employeename=name;
}
/* Define a set function for the first name data member. */
string Employee::getemployeename()
{
    return employeename;
}
/* Define a get function for the first name data member. */
void Employee::setemoloyeesurname(string surname)
{
    employeesurname=surname;
}
/* Define a set function for the last name data member. */
string Employee::getemployeesurname()
{
    return employeesurname;
}
/* Define a get function for the last name data member. */
void Employee::setemployeesalary(int salary)
{
    if(salary<=0)
    {
        salary==0;
		employeesalary=salary;
    }
    if(salary>0)
    {
        employeesalary=salary;
    }
}
/* Define a set function for the monthly salary data member.
int Employee::getemployeesalary()
{
    return employeesalary;
}
/* Define a get function for the monthly salary data member. */
