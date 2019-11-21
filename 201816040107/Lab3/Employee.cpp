// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Employee::Employee(string name1,string xing,int n)//构造函数的定义； 
   {
   	setname1(name1);
   	setname2(xing);
   	setincome(n);
   }

/* Define a set function for the first name data member. */
void Employee:: setname1(string name1)
{
	name=name1;
}

/* Define a get function for the first name data member. */
string Employee:: getname1()
{
	return name;
}

/* Define a set function for the last name data member. */
void Employee:: setname2(string xing1)
{
	xing=xing1;
}

/* Define a get function for the last name data member. */
string Employee:: getname2()
{
	return xing;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setincome(int income1)
{
	income=income1;
}
/* Define a get function for the monthly salary data member. */
int Employee::getincome()
{
	return income;
}
