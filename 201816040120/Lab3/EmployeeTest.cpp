// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include <string>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1 ("Bob" , "Jones" , 2875);
    Employee employee2 ("Susan" , "Baker" , 3150);
   /* Create two Employee objects and assign them to Employee variables. */
   cout << "Employee 1: ";  employee1.displayMessage() ;
   cout << "Employee 2: ";  employee2.displayMessage() ;
   /* Output the first name, last name and salary for each Employee. */
   cout << "\nIncreasing employee salaries by 10%" << endl;
   employee1.setEmployeeSalary(1.1*employee1.getEmployeeSalary());
   employee2.setEmployeeSalary(1.1*employee2.getEmployeeSalary());
   cout << "Employee 1: ";  employee1.displayMessage() ;
   cout << "Employee 2: ";  employee2.displayMessage() ;
   /* Give each Employee a 10% raise. */

   /* Output the first name, last name and salary of each Employee again. */
} // end main


