// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones",100);
    Employee employee2("Susan","Baker",200);
   /* Output the first name, last name and salary for each Employee. */
    employee1.displayInfo();
    employee2.displayInfo();
   /* Give each Employee a 10% raise. */
    cout<<"Increasing employee salaries by 10%"<<endl;
    employee1.changeSalary();
    employee2.changeSalary();
   /* Output the first name, last name and salary of each Employee again. */
   employee1.displayInfo();
   employee2.displayInfo();
} // end main


