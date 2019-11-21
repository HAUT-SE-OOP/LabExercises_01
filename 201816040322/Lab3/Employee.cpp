// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h"

Employee::Employee(string Fname,string Lname,int money)
        :FirstName(Fname),LastName(Lname)
{
    setMonthlySalary(money);
}
/* Define the constructor. Assign each parameter value to the appropriate data
member. Write code that validates the value of salary to ensure that it is
not negative. */

void Employee::setFirstName(string name)
{
    FirstName=name;
}
/* Define a set function for the first name data member. */

string Employee::getFirstName() const
{
    return FirstName;
}
/* Define a get function for the first name data member. */

void Employee::setLastName(string name)
{
    LastName=name;
}
/* Define a set function for the last name data member. */

string Employee::getLastName() const
{
    return LastName;
}
/* Define a get function for the last name data member. */

void Employee::setMonthlySalary(int money)
{
    if(money<0)
        MonthlySalary=0;
    else
        MonthlySalary=money;
}
/* Define a set function for the monthly salary data member. Write code
that validates the salary to ensure that it is not negative. */

int Employee::getMonthlySalary() const
{
    return MonthlySalary;
}
/* Define a get function for the monthly salary data member. */
