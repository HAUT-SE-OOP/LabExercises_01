// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition


/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string Name,string familyName,int monthSalary)
{
    setName(Name);
    setFamilyName(familyName);
    setMonthSalary(monthSalary);
}
void Employee::setName(string Name)/* Define a set function for the first name data member. */
{
    name=Name;
}
void Employee::setFamilyName(string familyName)/* Define a set function for the last name data member. */

{
    familyname=familyName;
}
void Employee::setMonthSalary(int monthSalary)/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
{
    if(monthSalary>=0)
        monthsalary=monthSalary;
    else
        monthsalary=0;
}
void Employee::setRaiseMonthSalary(int precent)/* Define a set function for the raise monthly salary data member.*/
{
    monthsalary=monthsalary*(100+precent)/100;
}

string Employee::getName()const/* Define a get function for the first name data member. */
{
    return name;
}
string Employee::getFamilyName()const/* Define a get function for the last name data member. */
{
    return familyname;
}
int Employee::getMonthSalary()const/* Define a get function for the monthly salary data member. */
{
    return monthsalary;
}
int Employee::getYearlySalary()const/* Define a get function for the yearly salary data member. */
{
    return monthsalary*12;
}
void Employee::displayMessage()const/*output message*/
{
    cout<<getName()<<" "<<getFamilyName()<<"; "<<"Yearly Salary: "<<getYearlySalary()<<endl;
}

