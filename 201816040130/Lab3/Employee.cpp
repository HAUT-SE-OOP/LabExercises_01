// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

// Define the constructor.
Employee::Employee(string firstName,string lastName,int salary)
{
    setEmployeeFirstName(firstName);
    setEmployeeLastName(lastName);
    setEmployeeMonthlySalary(salary);
}


// Define function for the first name data member.
void Employee::setEmployeeFirstName(string firstName)
{
    employeeFirstName = firstName;
}

//Define function for the first name data member.
string Employee::getEmployeeFirstName()
{
    return employeeFirstName;
}

// Define function for the last name data member.
void Employee::setEmployeeLastName(string lastName)
{
    employeeLastName = lastName;
}

// Define function for the last name data member.
string Employee::getEmployeeLastName()
{
    return employeeLastName;
}

// Define function for the monthly salary data member.
   void Employee::setEmployeeMonthlySalary(int salary)
{
    employeeMonthlySalary = salary;
    if(salary < 0)
        salary = 0;
}

// Define function for the monthly salary data member.
int Employee::getEmployeeMonthlySalary()
{
    return employeeMonthlySalary * 12;
}
