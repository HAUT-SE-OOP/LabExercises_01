// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee :: Employee( string EmployeeFName ,string EmployeeLName ,int EmployeeSalary)
{
    setEmployeeFName(EmployeeFName);
    setEmployeeLName(EmployeeLName);
    setEmployeeSalary(EmployeeSalary);
}//end Employee comstructor
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
void Employee ::setEmployeeFName( string name)
{
    EmployeeFName = name ;
}//end
/* Define a set function for the first name data member. */
string Employee :: getEmployeeFName()
{
    return EmployeeFName;
}//end
/* Define a get function for the first name data member. */
void Employee :: setEmployeeLName( string name)
{
    EmployeeLName = name ;
}//end
/* Define a set function for the last name data member. */
string Employee :: getEmployeeLName()
{
    return EmployeeLName;
}//end
/* Define a get function for the last name data member. */
void Employee :: setEmployeeSalary( int salary)
{
    if(salary<0)
        EmployeeSalary = 0 ;
    else
        EmployeeSalary = salary ;
}//end
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
int Employee :: getEmployeeSalary()
{
    return EmployeeSalary;
}//end the getEmployeeSalary constructor
/* Define a get function for the monthly salary data member. */
void Employee :: displayMessage()
{
    cout << getEmployeeFName() << " " << getEmployeeLName()
         << "; Yearly Salary: " << getEmployeeSalary()*12 << endl;
}
