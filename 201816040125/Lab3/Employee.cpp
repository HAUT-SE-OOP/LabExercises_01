#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Employee::Employee(string fastname, string lastname)
   {
       setFastName(fastname);
       setLastName(lastname);
   }

/* Define a set function for the first name data member. */
void Employee::setFastName(string name)    //function to set the fastname
{
    fastName=name;
}

/* Define a get function for the first name data member. */
string Employee::getFastName()                 //function to retrieve the fastname
{
    return fastName;
}

/* Define a set function for the last name data member. */
void Employee::setLastName(string name)         //function to set the lastname
{
    lastName=name;
}

/* Define a get function for the last name data member. */
string Employee::getLastName()             //function to retrieve the lastname
{
    return lastName;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setSalary(int money)           //function to set the salary

{
    salary=0;
    if(money>0)
        salary=money;
    if(money<0)
        cout<<"erorr"<<endl;
}

/* Define a get function for the monthly salary data member. */
int Employee::getSalary()                     //function to retrieve the salary
{
    return salary;
}
