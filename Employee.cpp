// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
Employee::Employee(string firstname,string lastname,int monthlysalary)//Define the constructor.
{
    setFirstName(firstname);
    setLastName(lastname);
    setMonthlySalary(monthlysalary);//Assign each parameter value to the appropriate data member.
}
void Employee::setFirstName(string name)
{
    firstName=name;
}
// function to set the first name data member.
string Employee::getFirstName()
{
    return firstName;
}
// function to get the first name data member.
void Employee::setLastName(string name)
{
    lastName=name;
}
// function to set the last name data member.
string Employee::getLastName()
{
    return lastName;
}
//function to get the last name data member.
void Employee::setMonthlySalary(int salary)
{
    if(salary<0)
    {
        cout<<"It's wrong,please set it again"<<endl;
    }
    else{
        monthlySalary=salary;
    }//validates the salary to ensure that it is not negative.
}

int
 Employee::getMonthlySalary()
{
    return monthlySalary;
}
// function to get the monthly salary data member.
