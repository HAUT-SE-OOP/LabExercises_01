// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob Jones","Bob",34500);
    Employee employee2("Susan Baker","Susan",37800);
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee1:"<<employee1.getname()<<";"<<"Yearly Salary:"<<employee1.getsalary()<<endl;
    cout<<"Employee2:"<<employee2.getname()<<";"<<"Yearly Salary:"<<employee2.getsalary()<<endl<<endl;
   /* Give each Employee a 10% raise. */
   cout<<"Increasing employee salaries by 10%"<<endl;
    employee1.salarychage(0.1);
    employee2.salarychage(0.1);
   /* Output the first name, last name and salary of each Employee again. */
    cout<<"Employee1:"<<employee1.getname()<<";"<<"Yearly Salary:"<<employee1.getsalary()<<endl;
    cout<<"Employee2:"<<employee2.getname()<<";"<<"Yearly Salary:"<<employee2.getsalary()<<endl;
} // end main

