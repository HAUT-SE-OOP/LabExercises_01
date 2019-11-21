// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

//constructor initializes first name, last name, and monthly salary
Employee::Employee(string firstName, string lastName, int initializeSalary)
{
    setFirstName(firstName);
    setLastName(lastName);
    if(initializeSalary < 0)
    {
        monthlySalary = 0;
    }
    else

    {
        monthlySalary = initializeSalary;
    }
}//end Employee constructor

//fuction to set the first name
void Employee::setFirstName(string first)
{
    firstName = first;
}//end fuction setFirstName

//fuction to get the first name
string Employee::getFirstName()
{
    return firstName;
}//end fuction getfirstName

//fuction to set the last name
void Employee::setLastName(string last)
{
    lastName = last;
}//end fuction setLastName

//fuction to get the last name
string Employee::getLastName()
{
    return lastName;
}//end fuction getLastName

//fuction to get monthly salary
void Employee::setMonthlySalary(int value)
{
    monthlySalary = value;
}//end fuction setMontlySalary

//fuction to get the montly salary
int Employee::getMonthlySalary()
{
    return monthlySalary;
}//end fuction getMonthlySalary

//fuction to calculation MontlySalary
int Employee::calculationSalary()
{
    int value = getMonthlySalary();
    value*=1.1;
    return value;
}
