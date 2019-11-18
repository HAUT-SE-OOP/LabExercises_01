// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string name,string name2,int num)
:firstName(name),lastName(name2),monthlySalary(num)// initializes firstName,lastName,monthlySalary
{

}// end Employee constructor
/* Define a set function for the first name data member. */
// function to set the first name
void Employee::setFirstName(string name)
{
    firstName=name;
}// end function setFirstName
/* Define a get function for the first name data member. */
// function to retrieve the first name
string Employee::getFirstName()
{
    return firstName;
}// end function getFirstName
/* Define a set function for the last name data member. */
// function to set the last name
void Employee::setLastName(string name2)
{
    lastName=name2;
}// end function setLastName
/* Define a get function for the last name data member. */
// function to retrieve the last name
string Employee::getLastName()
{
    return lastName;
}// end function getLastName
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
   // function to set the monthly salary
void Employee::setMonthlySalary(int num)
{
    if(num<0)
    {
        monthlySalary=0;
    }
    else
        monthlySalary=num;
}// end function setMonthlySalary
/* Define a get function for the monthly salary data member. */
// function to retrieve the monthly salary
int Employee::getMonthlySalary()
{
    return monthlySalary;
}// end function getMonthlySalary
