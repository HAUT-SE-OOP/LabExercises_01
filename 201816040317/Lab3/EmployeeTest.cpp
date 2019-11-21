// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   Employee Employee1("Bob","Jones",34500);
   Employee Employee2("Susan","Baker",37800);/* Create two Employee objects and assign them to Employee variables. */

   cout<<"Employee1:"<<Employee1.getFirstName()<<":"<<Employee1.getLastName()<<":"<<Employee1.getSalary()<<endl;
   cout<<"Employee2:"<<Employee2.getFirstName()<<":"<<Employee2.getLastName()<<":"<<Employee2.getSalary()<<endl;/* Output the first name, last name and salary for each Employee. */

   cout<<"\nIncreasing employee salaries 10%"<<endl;
   Employee1.setSalary(Employee1.getSalary());
   Employee2.setSalary(Employee2.getSalary());/* Give each Employee a 10% raise. */

   cout<<"Employee1:"<<Employee1.getFirstName()<<":"<<Employee1.getLastName()<<":"<<Employee1.getSalary()<<endl;
   cout<<"Employee2:"<<Employee2.getFirstName()<<":"<<Employee2.getLastName()<<":"<<Employee2.getSalary()<<endl;/* Output the first name, last name and salary of each Employee again. */
} // end main


