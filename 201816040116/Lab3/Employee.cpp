// Lab 2: Employee.cpp
// Member-function definitions for class Employee.
#include <iostream>
using namespace std;
#include "Employee.h"  //// include definition of class Employee from Employee.h
//Initialize the first name, last name, and monthly salary of the employee in the class
Employee::Employee(string name1,string surn1,int salary1)
{
   name=name1;
   surn=surn1;
   if(salary1<0)    //Judge an employee's monthly salary. If it is negative, it is zero
     salary=0;
   else
     salary=salary1*12;     //Calculation of annual salary
}
void Employee::setname(string name1)
{
    name=name1;
}
string Employee::getname()
{
    return surn;
}
void Employee::setsurn(string surn1)
{
    surn=surn1;
}
string Employee::getsurn()
{
    return surn;
}
void Employee::setsalary()
{
    salary=salary*1.1;      //Calculate the employee's annual salary after a 10% raise
}
int Employee::getsalary()
{
    return salary;      //Obtain the data of the employee's annual salary after a 10% salary increase
}
void Employee::displayMessage()
{
    cout<<"Employee 1: "<<getname()<<getsurn()<<"Yearly Salary: "<<getsalary()<<endl;
    //Output first name, surnname, annual salary
}
