// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string firstname1,string lastname1,int monthlysalary1)
    : firstname( firstname1),
    lastname(lastname1),
    monthlysalary(monthlysalary1)
{
    //empty body
}

void Employee::setFirstname(string firstname)
{
    firstname=firstname; //store the first name
}

string Employee::getFirstname()
{
    return firstname;
}

void Employee::setLastname(string lastname)
{
    lastname=lastname;  //store the last name
}

string Employee::getLastname()
{
    return lastname;
}

void Employee::setMonthlysalary(int monthlysalary)
{
    monthlysalary=monthlysalary;  //store the monthly salary
}

int Employee::getMonthlySalary()
{
    return monthlysalary;
}

void Employee::displayMessage()
{
    cout<<"Increasing employee salarier by 10%"<<endl;
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

/* Define a set function for the first name data member. */

/* Define a get function for the first name data member. */

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
