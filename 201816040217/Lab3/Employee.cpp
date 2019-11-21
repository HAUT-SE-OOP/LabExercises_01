// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string xing, string ming ,int money)
{
    setXing( xing );
    setMing( ming);
    setMoney( money );
}
/* Define a set function for the first name data member. */
void Employee::setXing( string name )
{
    xing = name;
}
/* Define a get function for the first name data member. */
string Employee::getXing()
{
    return xing;
}
/* Define a set function for the last name data member. */
void Employee::setMing( string name )
{
    ming = name;
}
/* Define a get function for the last name data member. */
string Employee::getMing()
{
    return ming;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMoney( int name )
{
    if(name>=0)
        money = name;
    else
        money = 0;
}
int Employee::getMoney()
{
    return money;
}
/* Define a get function for the monthly salary data member. */
void Employee::upMoney()
{
    money=money+money*0.1;
}





