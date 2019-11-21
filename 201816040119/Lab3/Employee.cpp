// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string first,string last)
{
    setfirstname(first);
    setlastname(last);
}

/* Define a set function for the first name data member. */
void Employee::setfirstname(string first)
{
    firstname=first;
}
/* Define a get function for the first name data member. */
string Employee::getfirstname()
{
    return firstname;
}
/* Define a set function for the last name data member. */
void Employee::setlastname(string last)
{
    lastname=last;
}
/* Define a get function for the last name data member. */
string Employee::getlastname()
{
    return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::Increasesalary()
{
    salary=salary*1.1;
}/* Define a get function for the monthly salary data member. */
void Employee::setsalary(int sary)
{
    if(sary<0)//if salary less than zero
        salary=0;//salary is aero
    else
    salary=sary;
}
int Employee::getsalary()//the funtion is getsalary
{
    return salary;
}
void Employee::displaymessage1()//input salary
{
    cout<<"Employee:"<<getfirstname()<<" "<<getlastname()<<"Year Salay:";
}
void Employee::displaymessage2()//out all message
{
    cout<<"Employee:"<<getfirstname()<<" "<<getlastname()<<"Year Salay:"<<salary<<endl;
}
