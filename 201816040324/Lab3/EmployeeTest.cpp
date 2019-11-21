// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("zhang", "san",6900);
    Employee employee2("wang", "wu",7800);
   /* Create two Employee objects and assign them to Employee variables. */
     cout<<"Employee1: ";
     employee1.display() ;
     cout<<"Employee2: " ;
     employee2.display() ;
   /* Output the first name, last name and salary for each Employee. */
     cout<<"Increasing employee Salar by "<<"10%"<<'\n' ;
   /* Give each Employee a 10% raise. */
     employee1.raiseSalary() ;
     employee2.raiseSalary() ;
     cout<<"Employee1: " ;
     employee1.display() ;
     cout<<"Employee2: " ;
     employee2.display() ;
   /* Output the first name, last name and salary of each Employee again. */
} // end main
