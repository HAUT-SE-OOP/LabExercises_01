// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string first, string last, int monthlysalary)
{
    setEmployeeFirstName(first);
    setEmployeeLastName(last);
    setEmployeeMonthlySalary(monthlysalary);
}

/* Define a set function for the first name data member. */
void Employee::setEmployeeFirstName(string firstname)
{
    employeeFirstName=firstname;
}

/* Define a get function for the first name data member. */
string Employee::getEmployeeFirstName()
{
    return employeeFirstName;
}

/* Define a set function for the last name data member. */
void Employee::setEmployeeLastName(string lastname)
{
    employeeLastName=lastname;
}

/* Define a get function for the last name data member. */
string Employee::getEmployeeLastName()
{
    return employeeLastName;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setEmployeeMonthlySalary(int monthlysalary)
{
    if(monthlysalary<=0)
        employeeMonthlySalary=0;
    else
        employeeMonthlySalary=monthlysalary;
}

/* Define a get function for the monthly salary data member. */
int Employee::getEmployeeMonthlySalary()
{
    return employeeMonthlySalary;
}

//展示区
void Employee::displayMessage()
{
    cout << "Employee 1: " <<getEmployeeFirstName()<< " " <<getEmployeeLastName() << ";Yearly Salary: "<< getEmployeeMonthlySalary()*12 <<endl;
}

//加薪10%
int Employee::Increasingemployeesalary()
{
    return employeeMonthlySalary+=employeeMonthlySalary/10;
}
