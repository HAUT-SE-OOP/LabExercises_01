// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employ1("Bob","Jones",34500);
    Employee employ2("Susan","Baker",37944);
   /* Create two Employee objects and assign them to Employee variables. */
    cout<<"Employee 1:"<<employ1.getFirstName()<<employ1.getLastName()<<"Year Salary: "<<employ1.getSalary()<<endl;
    cout<<"Employee 2:"<<employ2.getFirstName()<<employ2.getLastName()<<"Year Salary: "<<employ2.getSalary()<<endl;
    cout<<"\nIncreasing employee salary by 10%"<<endl;
   /* Output the first name, last name and salary for each Employee. */
    employ1.peace();
    employ2.peace();
   /* Give each Employee a 10% raise. */
    cout<<"\nEmployee 1:"<<employ1.getFirstName()<<employ1.getLastName()<<"Year Salary: "<<employ1.getSalary()<<endl;
    cout<<"Employee 2:"<<employ2.getFirstName()<<employ2.getLastName()<<"Year Salary: "<<employ2.getSalary()<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main

