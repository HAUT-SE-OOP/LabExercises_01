// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string firstname,string lastname, int salary)
{
    setFirstName(firstname);
    setLastName(lastname);
    setSalary(salary);
}

void Employee::setFirstName(string firstname)
{
    firstName=firstname;
}

void Employee::setLastName(string lastname)
{
    lastName=lastname;
}

string Employee::getFirstName()
{
    return firstName;
}

string Employee::getLastName()
{
    return lastName;
}

void Employee::setSalary(int Salary)
{
    if(Salary<0)
    {
        salary=0;
    }else
    salary=Salary;
}

int Employee::getSalary()
{
    return salary;
}
