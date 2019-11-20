// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;
//include definition of class GradeBook from GradeBook.h
#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname,string lastname,double monthlysalary)
   {
       setEmployeefirstname(firstname);
       setEmployeelastname(lastname);
       setEmployeemonthlysalary(monthlysalary);
   }

/* Define a set function for the first name data member. */
void Employee::setEmployeefirstname(string Firstname)
{
    firstname=Firstname;
}
/* Define a get function for the first name data member. */
string Employee::getEmployeefirstname( )
{
    return firstname ;
}
/* Define a set function for the last name data member. */
void Employee::setEmployeelastname(string Lastname)
{
    lastname = Lastname;
}
/* Define a get function for the last name data member. */
string Employee::getEmployeelastname()
{
    return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setEmployeemonthlysalary(double salary)
{
    monthlysalary = salary;
}
/* Define a get function for the monthly salary data member. */
double Employee::getEmployeemonthlysalary()
{
    return 12*monthlysalary;
}
