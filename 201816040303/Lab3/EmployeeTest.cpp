// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee1(1);
   Employee employee2(2);

   /* Output the first name, last name and salary for each Employee. */
   employee1.setFirstName("Xiaodie");
   employee1.setLastName("Ma");
   employee1.setSalary(5600);
   employee2.setFirstName("Shiying");
   employee2.setLastName("He");
   employee2.setSalary(5470);
   cout << "Employee 1: " << employee1.getFirstName() <<employee1.getLastName()
   << ";" <<"Yearly Salary:" << employee1.getSalary() << endl;
   cout << "Employee 2: " << employee2.getFirstName() << employee2.getLastName()
   << ";" << "Yearly Salary:" << employee2.getSalary() << endl;

   /* Give each Employee a 10% raise. */

   cout << "\nIncreasing employee salaries by 10%" <<endl;
   employee1.increase();
   employee2.increase();
   /* Output the first name, last name and salary of each Employee again. */
   cout << "Employee 1: " << employee1.getFirstName() <<employee1.getLastName()
   << ";" <<"Yearly Salary:" << employee1.getSalary() << endl;
   cout << "Employee 2: " << employee2.getFirstName() << employee2.getLastName()
   << ";" << "Yearly Salary:" << employee2.getSalary() << endl;
} // end main

