// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee1("Bob","Jones",2875);
   Employee employee2("Susan","Baker",3150);

   /* Output the first name, last name and salary for each Employee. */
   cout << "Employee 1:" << employee1.GetFirstName()<<"; Yearly Salary:" <<12*employee1.GetMonthlySalary()<<endl;
   cout << "Employee 2:" << employee2.GetFirstName()<<"; Yearly Salary:" <<12*employee2.GetMonthlySalary()<< "\n" <<endl;

   /* Give each Employee a 10% raise. */
   cout << "Increasing employee salaries by 10%"<<endl;
   employee1.ChangeSalary(10);
   employee2.ChangeSalary(10);
   /* Output the first name, last name and salary of each Employee again. */
   cout << "Employee 1:" << employee1.GetFirstName()<<"; Yearly Salary:" <<12*employee1.GetMonthlySalary()<<endl;
   cout << "Employee 2:" << employee2.GetFirstName()<<"; Yearly Salary:" <<12*employee2.GetMonthlySalary()<< "\n" <<endl;
} // end main

