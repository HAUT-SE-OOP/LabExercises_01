// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee( string firstname, string lastname, int salary)
{
    SetFirstName(firstname);
    SetLastName(lastname);
    SetMonthlySalary(salary);
}

/* Define a set function for the first name data member. */

void Employee::SetFirstName(string name)
{
    FirstName=name;
}

/* Define a get function for the first name data member. */
string Employee::GetFirstName()
{
    return FirstName;
}

/* Define a set function for the last name data member. */
void Employee::SetLastName(string name )
{
    LastName=name;
}

/* Define a get function for the last name data member. */
string Employee::GetLastName()
{
    return LastName;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::SetMonthlySalary(int money)
{
    if(money<0)
        MonthlySalary=0;
    else
        MonthlySalary=money;
}
/* Define a get function for the monthly salary data member. */
int Employee::GetMonthlySalary()
{
    return MonthlySalary;
}

void Employee::ChangeSalary(double n)
{
    MonthlySalary=(int)MonthlySalary*(1+n/100);
}
