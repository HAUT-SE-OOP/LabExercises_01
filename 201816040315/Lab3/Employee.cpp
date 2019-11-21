// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstName,string lastName,int salary)
{
  setFirstName( firstName);//initializes  firstName
  setLastName( lastName );//initializes lastName
  setSalary(salary);//initialize salary
}//end Employee constructor

/* Define a set function for the first name data member. */
//function to set first name
void Employee::setFirstName(string first)
{
    firstName = first;//store the fist name
}//end function setFirstName

/* Define a get function for the first name data member. */
//function to retrieve the first name
string Employee::getFirstName()
{
    return firstName;
}//end function getFirstName

/* Define a set function for the last name data member. */
//function to set the last name
void Employee::setLastName( string last)
{
    lastName = last;//store the last name
}//end function setLastName

/* Define a get function for the last name data member. */
//function to retrieve the last name
string Employee::getLastName()
{
    return lastName;
}//end function getLastName

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
//function to set salary
void Employee::setSalary( int money)
{
    if(money>0)//Determine if your monthly salary is positive
        salary=money;//initializes the salary
    else
        salary=0;//otherwise,the monthly salary is zero
}//end function getSalary

/* Define a get function for the monthly salary data member. */
//function to retrieve salary
int Employee::getSalary()
{
    return salary;
}//end function getSalary
