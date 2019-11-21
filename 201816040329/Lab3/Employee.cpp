#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string employee1,string employee2,int money)
   {
       setemoployeename(employee1);
       setemoloyeesurname(employee2);
       setemployeesalary(money);
   }
void Employee::setemployeename(string name)
{
    employeename=name;
}
string Employee::getemployeename()
{
    return employeename;
}

void Employee::setemoloyeesurname(string surname)
{
    employeesurname=surname;
}
string Employee::setemoloyeesurname()
{
    return emoloyeesurname;
}
void Employee::setemployeesalary(int salary)
{
    if(salary<=0)
    {
        salary==0;
		employeesalary=salary;
    }
    else
    {
        employeesalary=salary;
    }
}


int Employee::getemployeesalary()
{
    return employeesalary;
}
