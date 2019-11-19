// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string lastname,string firstname,int salary)
{
    //initializes some data
    setname( lastname);
    setfirstname( firstname);
    setsalary( salary);

}

/* Define a set function for the first name data member. */
void Employee::setname(string lastname)
{
    namedata=lastname;
}
/* Define a get function for the first name data member. */
string Employee::getname()
{
    return namedata;
}
/* Define a set function for the last name data member. */
void Employee::setfirstname(string firstname)
{
    firstnamedata=firstname;
}
/* Define a get function for the last name data member. */
string Employee::getfirstname()
{
    return firstnamedata;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setsalary(int salary)
{
        salarydata=salary;
}
/* Define a get function for the monthly salary data member. */
int Employee::getsalary()
{
    return salarydata;
}

int Employee::salarychage(float data)
{
    return salarydata=salarydata*(1+data);

}
