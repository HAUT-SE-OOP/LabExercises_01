// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee Employee1("Bob","Jones",34500);
    Employee Employee2("Susan","Baker",37800);
    double multiple=1.1;//salary multiple
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee 1:";
    cout<<Employee1.getFirstName()<<" "
    <<Employee1.getLastName()<<";Yearly Salary:"<<Employee1.getSalary()<<endl;

    cout<<"Employee 2:";
    cout<<Employee2.getFirstName()<<" "
    <<Employee2.getLastName()<<";Yearly Salary:"<<Employee2.getSalary()<<endl<<endl;

   /* Give each Employee a 10% raise. */
    cout<<"Increasing employee salaries by 10%"<<endl;
    Employee1.setSalary(Employee1.getSalary()*multiple);
    Employee2.setSalary(Employee2.getSalary()*multiple);
   /* Output the first name, last name and salary of each Employee again. */
    cout<<"Employee 1:";
    cout<<Employee1.getFirstName()<<" "
    <<Employee1.getLastName()<<";Yearly Salary:"<<Employee1.getSalary()<<endl;

    cout<<"Employee 2:";
    cout<<Employee2.getFirstName()<<" "
    <<Employee2.getLastName()<<";Yearly Salary:"<<Employee2.getSalary()<<endl;
} // end main

