// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob", "Jones", 34500);
    Employee employee2("Susan", "Baker", 37800);

    cout << "Employee 1: " << employee1.getName1() << " " << employee1.getName2() << ";";
    cout << "Yearly Salary: " << employee1.getSalary() << endl;

    cout << "Employee 2: " << employee2.getName1() << " " << employee2.getName2() << ";";
    cout << "Yearly Salary: " << employee2.getSalary() << endl << endl;

    cout << "Increasing employee salaries by 10%" << endl;

    employee1.setSalary(employee1.getSalary()*1.1);
    employee2.setSalary(employee2.getSalary()*1.1);

    cout << "Employee 1: " << employee1.getName1() << " " << employee1.getName2() << ";";
    cout << "Yearly Salary: " << employee1.getSalary() << endl;

    cout << "Employee 2: " << employee2.getName1() << " " << employee2.getName2() << ";";
    cout << "Yearly Salary: " << employee2.getSalary() << endl << endl;


   /* Create two Employee objects and assign them to Employee variables. */

   /* Output the first name, last name and salary for each Employee. */

   /* Give each Employee a 10% raise. */

   /* Output the first name, last name and salary of each Employee again. */
} // end main


