// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob","Jones",2875);
    Employee employee2("Susan","Baker",3150);
   // Create two Employee objects and assign them to Employee variables.

   cout <<"Employee 1:"<<employee1.getFirstName()<<' '<<employee1.getLastName()<<";"<<"Yearly Salary:"
   <<12*employee1.getMonthSalary()<<endl;
   cout <<"Employee 2:"<<employee2.getFirstName()<<' '<<employee2.getLastName()<<";"<<"Yearly Salary:"
   <<12*employee2.getMonthSalary()<<"\n"<<endl;
   //Output the first name, last name and salary for each Employee.

   cout <<"Increasing employee salaries by 10%"<<endl;
   // Give each Employee a 10% raise.

   cout <<"Employee 1:"<<employee1.getFirstName()<<' '<<employee1.getLastName()<<";"<<"Yearly Salary:"
   <<12*1.1*employee1.getMonthSalary()<<endl;
   cout <<"Employee 2:"<<employee2.getFirstName()<<' '<<employee2.getLastName()<<";"<<"Yearly Salary:"
   <<12*1.1*employee2.getMonthSalary()<<"\n"<<endl;
   // Output the first name, last name and salary of each Employee again.
} // end main


