// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee:: Employee (string firstname ,string lastname, int monthlysalary)
{
    setFirstname(firstname) ;
    setLastname(lastname) ;
    setMonthlysalary(monthlysalary) ;
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
void Employee::setFirstname(string firstname1)
{
    firstname=firstname1 ;
}
/* Define a set function for the first name data member. */
void Employee::setLastname(string lastname1)
{
    lastname=lastname1 ;
}
/* Define a get function for the first name data member. */
string Employee::getFirstname()
{
    return firstname ;
}
/* Define a set function for the last name data member. */
string Employee::getLastname()
{
    return lastname ;
}
int Employee::getmonthlysalary()
{
    return  monthlysalary ;
}
/* Define a get function for the last name data member. */
void Employee::setMonthlysalary(int salary)
{
    if (salary>0)
    {
         monthlysalary =salary ;
    }
    else
         monthlysalary =0 ;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::raiseSalary ()
{
    monthlysalary=monthlysalary*1.1 ;
}
/* Define a get function for the monthly salary data member. */
void Employee::display()
{
    cout<<getFirstname()<<" "<< getLastname()<<"; "<<"Yearly Salary: "<< 12*getmonthlysalary()<<'\n'<<endl ;
}
