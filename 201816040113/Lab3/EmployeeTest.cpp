// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee firstman("Bob","Jones",2875);
   Employee secondman("SuSan","Baker",3150);
   /* Output the first name, last name and salary for each Employee. */
   cout<<"Employee 1:"<<firstman.getFirstName()<<"  "<<firstman.getLastName()<<firstman.getSalary()<<endl;
   cout<<"Employee 2:"<<secondman.getFirstName()<<"  "<<secondman.getLastName()<<secondman.getSalary()<<endl;
   /* Give each Employee a 10% raise. */
   firstman.setSalary(firstman.getSalary()*1.1);
   secondman.setSalary(secondman.getSalary()*1.1);
   /* Output the first name, last name and salary of each Employee again. */
   cout<<"Employee 1:"<<firstman.getFirstName()<<"  "<<firstman.getLastName()<<firstman.getSalary()<<endl;
   cout<<"Employee 2:"<<secondman.getFirstName()<<"  "<<secondman.getLastName()<<secondman.getSalary()<<endl;
} // end main
