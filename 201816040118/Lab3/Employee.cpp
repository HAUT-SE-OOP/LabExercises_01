// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname,string lastname,int salary)
{
    setFirstName(firstname); //pass the string to the  setFirstName function
    setLastName(lastname); // pass the string to the   setLastName function
    setSalary(salary);  //pass the string to the  setSalary function
}
/* Define a set function for the first name data member. */
void Employee::setFirstName(string name)
{
    FirstName=name;
}
/* Define a get function for the first name data member. */
string Employee::getFitstName()
{
    return FirstName;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string name)
{
    LastName=name;
}
/* Define a get function for the last name data member. */
string Employee::getLastName()
{
    return LastName;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setSalary(int salary)
{
    if(salary>0)
    {
        Salary=salary;  //if the salary is bigger than 0,pass the salary to the Salary
    }
    else
    {
        Salary=0;    //if the salary is less than 0.pass 0 to the Salary
    }
}
/* Define a get function for the monthly salary data member. */
int Employee::getSalary()
{
    return Salary;
}
