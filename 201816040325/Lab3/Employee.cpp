// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string name,string surname,int income)
    :employeeName(name),employeeSurname(surname),employeeIncome(income)
    {

    }

/* Define a set function for the first name data member. */
void Employee::setEmployeeName(string name)
    {
        employeeName=name;
    }
/* Define a get function for the first name data member. */
string Employee::getEmployeeName()
    {
        return employeeName;
    }
/* Define a set function for the last name data member. */
void Employee::setEmployeeSurname(string surname)
    {
        employeeSurname=surname;
    }
/* Define a get function for the last name data member. */
string Employee::getEmployeeSurname()
    {
        return employeeSurname;
    }
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setEmployeeIncome(int income)
    {
        employeeIncome=income;
    }
/* Define a get function for the monthly salary data member. */
int Employee::getEmployeeIncome()
    {
        if(employeeIncome<0)
        {
            return 0;
        }
        else
        {
            return employeeIncome;
        }
    }
