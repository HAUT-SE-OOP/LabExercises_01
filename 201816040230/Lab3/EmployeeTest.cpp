// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
/* Create two Employee objects and assign them to Employee variables. */
  Employee Employee1("Bob ", " Jones ",34500/12);
  Employee Employee2("Susan "," Baker ",37800/12);
/* Output the first name, last name and salary for each Employee. */
  cout<<"Employee 1:"<<Employee1.getLastName()<<Employee1.getFirstName()<<";"<<"Yearly Salary:"<<Employee1.getMonthlySalary()*12<<endl;
  cout<<"Employee 2:"<<Employee2.getLastName()<<Employee2.getFirstName()<<";"<<"Yearly Salary:"<<Employee2.getMonthlySalary()*12<<endl;
/* Give each Employee a 10% raise. */
  cout<<"\nIncreasing employee salaries by 10%\n"<<endl;
  Employee1.setMonthlySalary(( Employee1.getMonthlySalary())*1.1);
  Employee2.setMonthlySalary(( Employee2.getMonthlySalary())*1.1);
   /* Output the first name, last name and salary of each Employee again. */
  cout<<"Employee 1:"<<Employee1.getLastName()<<Employee1.getFirstName()<<";"<<"Yearly Salary:"<<Employee1.getMonthlySalary()*12<<endl;
  cout<<"Employee 2:"<<Employee2.getLastName()<<Employee2.getFirstName()<<";"<<"Yearly Salary:"<<Employee2.getMonthlySalary()*12<<endl;
  } // end main


