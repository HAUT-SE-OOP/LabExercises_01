// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string fristname , string lastname , int salary)
{
    setFristName(fristname) ;
    setLastName(lastname) ;
    setSalary(salary) ;
}

/* Define a set function for the first name data member. */
void Employee::setFristName(string fristname)
{
    FristName = fristname ;
}
/* Define a get function for the first name data member. */
string Employee::getFristName()
{
    return FristName;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string lastname)
{
    LastName = lastname ;
}
/* Define a get function for the last name data member. */
string Employee::getLastName()
{
    return LastName ;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setSalary(int monthlysalary)
{
    if(monthlysalary>=0)
        Salary  = monthlysalary ;
    else
        Salary = 0 ;
}
/* Define a get function for the monthly salary data member. */
int  Employee::getSalary()
{
    return Salary ;
}
/* Calculating annual income*/
int Employee::YearthlySalary()
{
    yearthlysalary = Salary * 12;
    return yearthlysalary ;
}
/*Calculating annual income after upped salary*/
int Employee::Upsalary()
{
    upsalary = Salary * 1.1 ;
    upyearthlysalary = upsalary *12 ;
    return upyearthlysalary ;
}
