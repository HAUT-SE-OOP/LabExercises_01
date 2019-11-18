// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee Employee1("Bob","Jones",2875);
    Employee Employee2("Susan","Baker",3150);
   /* Create two Employee objects and assign them to Employee variables. */
   /* Output the first name, last name and salary for each Employee. */
   cout<<"Employee 1:"<<Employee1.getFirstName()<<" "<<Employee1.getLastName()<<"Yearly Salary:"<<12*Employee1.getMonthlySalary()<<endl;
   cout<<"Employee 2:"<<Employee2.getFirstName()<<" "<<Employee2.getLastName()<<"Yearly Salary:"<<12*Employee2.getMonthlySalary()<<endl;
   /* Give each Employee a 10% raise. */
   cout<<endl;
   cout<<"Increasing employee salaries by 10%"<<endl;
   Employee1.setMonthlySalary(2875*1.1);
   Employee2.setMonthlySalary(3150*1.1);
   cout<<"Employee 1:"<<Employee1.getFirstName()<<" "<<Employee1.getLastName()<<"Yearly Salary:"<<12*Employee1.getMonthlySalary()<<endl;
   cout<<"Employee 2:"<<Employee2.getFirstName()<<" "<<Employee2.getLastName()<<"Yearly Salary:"<<12*Employee2.getMonthlySalary()<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main
