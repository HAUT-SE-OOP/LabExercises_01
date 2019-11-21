#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
Employee::Employee(string a, string b, int c)
{
   seta(a);
   setb(b);
   setc(c);
}
void Employee::seta(string a1)
{
    a=a1;
}
string Employee::geta()
{
    return a;
}
void Employee::setb(string b1)
{
    b=b1;
}
string Employee::getb()
{
    return b;
}
void Employee::setc(int c1)
{
    c=c1;
}
int Employee::getc()
{
    return double (c)*1.1;
}
void Employee::displayMessage()
{
    cout <<"The second prise is: " <<getc();
}
