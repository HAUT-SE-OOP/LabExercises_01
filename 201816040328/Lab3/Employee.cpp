// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
Emloyee::Emloyee(string a,string b,int c)
{
    setname(a);//initializes name
    setlastname(b);//initializes last name
    setsalary(c);//initializes salary
}// end Employee constructor
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
void Emloyee::setname(string a)
{
    name=a;
}/* Define a set function for the first name data member. */
string Emloyee::getname()
{
   return name;
}/* Define a get function for the first name data member. */
void Emloyee::setlastname(string b)
{
    lastname=b;
}/* Define a set function for the last name data member. */

string Emloyee::getlastname()
{
   return lastname;
}/* Define a get function for the last name data member. */
void Emloyee::setsalary(int c)
{
    salary=c;
}/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
int Emloyee::getsalary()
{
   return salary;
}/* Define a get function for the monthly salary data member. */
void Emloyee::displayMessage()
{
    cout<<"Emloyee"<<" "<<getname()<<" "<<"Yearly Salary:"<<getsalary()<<endl;
}

