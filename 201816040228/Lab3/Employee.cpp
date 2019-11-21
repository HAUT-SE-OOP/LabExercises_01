// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include <string>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative.定义构造函数。将每个参数值分配给适当的数据成员。编写验证工资值的代码以确保它是正确的，不是负数 */


// constructor initializes firstname lastname and salary
// with strings supplied as arguments
Employee::Employee( string firstname, string lastname, int salary )
{
   setFirstName( firstname );// initializes firstname
   setLastName( lastname );// initializes lastname
   setSalary( salary );// initializes salary
}

/* Define a set function for the first name data member. */
void Employee::setFirstName( string first )//a functoin to set firstname
{
    firstname=first;
}
/* Define a get function for the first name data member. */
string Employee::getFirstName()//a functoin to get firstname
{
   return firstname;
}
/* Define a set function for the last name data member. */
void Employee::setLastName( string last )//a functoin to set lastname
{
    lastname=last;
}
/* Define a get function for the last name data member. */
string Employee::getLastName()//a functoin to get lastname
{
   return lastname;
}
/* Define a set function for the monthly salary data member. Write code
   that validates验证 the salary to ensure that it is not negative.负数 */
void Employee::setSalary( int ssalary )//Give each Employee a 10% raise and validates验证 the salary to ensure that it is not negative
{
    int k=0;
    if(ssalary <= 0)
    {
        salary=k;
    }
    else
    {
        salary=ssalary*(1.1);
    }
}
/* Define a get function集合函数 for the monthly salary data member. */
int Employee::getSalary()//function for monthly salary data member
{
   return salary;
}
