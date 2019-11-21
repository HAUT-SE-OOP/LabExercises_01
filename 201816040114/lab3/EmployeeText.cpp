// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee Employee1("Bob","Jones",2875);
   Employee Employee2("Susan","Baker",3150);
   /* Output the first name, last name and salary for each Employee. */
   cout<<"Employee 1: "<<Employee1.getFirstName()<<" "<<Employee1.getLastName()<<"; Yearly Salary: "<<Employee1.getMonthlySalary()*12<<endl;
   cout<<"Employee 2: "<<Employee2.getFirstName()<<" "<<Employee2.getLastName()<<"; Yearly Salary: "<<Employee2.getMonthlySalary()*12<<endl<<endl;
   /* Give each Employee a 10% raise. */
   cout<<"Increasing Employee salaries by 10%"<<endl;
   /* Output the first name, last name and salary of each Employee again. */
   cout<<"Employee 1: "<<Employee1.getFirstName()<<" "<<Employee1.getLastName()<<"; Yearly Salary: "<<Employee1.getMonthlySalary()*12*1.1<<endl;
   cout<<"Employee 2: "<<Employee2.getFirstName()<<" "<<Employee2.getLastName()<<"; Yearly Salary: "<<Employee2.getMonthlySalary()*12*1.1<<endl;
} // end main


