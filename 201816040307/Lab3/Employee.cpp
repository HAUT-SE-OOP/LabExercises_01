// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string name1, string name2, int money)
{
    first_name = name1;
    last_name = name2;
    if(money >= 0)
        monthly_salary = money;
    else
        cout<<"UNVALUE DATA!!!"<<endl;
}

void Employee::displayInfo()const
{
    cout<<"The info of "<<getFirstName()<<endl;
    cout<<"First name: "<<getFirstName()<<"   "<<
    "Last name: "<<getLastName()<<"   "<<
    "Yearly Salary: "<<getSalary()<<endl;
}

void Employee::changeSalary()
{
    monthly_salary = monthly_salary * 1.1;
}

/* Define a set function for the first name data member. */
void Employee::setFirstName(string name)
{
    first_name = name;
}
/* Define a get function for the first name data member. */
string Employee::getFirstName()const
{
    return first_name;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string name)
 {
     last_name = name;
 }
/* Define a get function for the last name data member. */
string Employee::getLastName()const
{
    return last_name;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMonthlySalary(int money)
{
    if(money >= 0)
        monthly_salary = money;
    else
        cout<<"UNVALUE DATA!!!"<<endl;
}
/* Define a get function for the monthly salary data member. */
int Employee::getMonthlySalary()const
{
    return monthly_salary;
}

int Employee::getSalary()const
{
    return monthly_salary * 12;
}
