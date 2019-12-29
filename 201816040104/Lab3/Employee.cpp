// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string firstname ,string lastname, double monthlysalary)
{
    setEmployeefirstname( firstname );
    setEmployeelastname( lastname );
    setEmployeemonthlysalary(monthlysalary);
}
void Employee::setEmployeefirstname(string Firstname)
{
    firstname=Firstname;
}/* Define a set function for the first name data member. */

string Employee::getEmployeefirstname()
{
    return firstname;
}

void Employee::setEmployeelastname(string Lastname)
{
    lastname=Lastname;
}

string Employee::getEmployeelastname()
{
    return lastname;
}

void Employee::setEmployeemonthlysalary(double a)
{
    monthlysalary=a;
}

double Employee::getEmployeemonthlysalary()
{
    return monthlysalary;
}
