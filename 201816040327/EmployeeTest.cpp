// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee1("Bob", "Jones", 34500);
   Employee employee2("Susan", "Baker", 37800);

   //display initial data of each object
   cout << "Employee 1:" << employee1.getFirstName() << " " << employee1.getLastName()
        << ";" << "Yearly Salary: " << employee1.getMonthlySalary() << endl;//display the message of employee1
   cout << "Employee 2:" << employee2.getFirstName() << " " << employee2.getLastName()
        << ";" << "Yearly Salary: " << employee2.getMonthlySalary() << endl;//display the message of employee2

   cout << "\n" <<endl;

   cout << "Increasing employee salaries by 10%" << endl;
   cout << "Employee 1:" << employee1.getFirstName() << " " << employee1.getLastName()
        << ";" << "Yearly Salary: " << employee1.calculationSalary() << endl;//display the message of employee1 after increasing salaries
   cout << "Employee 2:" << employee2.getFirstName() << " " << employee2.getLastName()
        << ";" << "Yearly Salary: " << employee2.calculationSalary() << endl;//display the message of employee2 after increasing salaries
} // end main


