// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string name,string xing,int money)
{
    setName(name);
    setXing(xing);
    setSalary(money);
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
 void Employee::setName(string name)
 {
     employeeName=name;
 }
/* Define a set function for the first name data member. */
string Employee::getName()
{
    return employeeName;
}
/* Define a get function for the first name data member. */
 void Employee::setXing(string xing)
 {
     employeeXing=xing;
 }
/* Define a set function for the last name data member. */
string Employee::getXing()
{
    return employeeXing;
}
/* Define a get function for the last name data member. */

void Employee::setIncrease(int salary)                 //Raise salary
{
    employeeSalary=(salary+salary*0.1)*12;
}

int Employee::getIncrease()                         //Define a get function for the last name employeeSalary.
{
    return employeeSalary;
}

void Employee::setSalary(int salary)
{
    if(salary<0)  salary=0;
        employeeSalary=salary;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
   int Employee::getSalary()
{
    return employeeSalary;
}
/* Define a get function for the monthly salary data member. */
void Employee::displayMessage()
{
    cout<<getName()<<getXing()<<";"<<"Yearly Salary "<<getSalary();
}
