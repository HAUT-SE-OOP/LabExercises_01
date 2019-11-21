// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    string firstName01, lastName01, firstName02, lastName02;
    int salary01, salary02;
    cout << "Employee 1: ";
    cin >> firstName01;
    //cout << " ";
    cin >> lastName01;
    cout << "Monthly Salary: ";
    cin >> salary01;
    Employee employee1(firstName01, lastName01, salary01);
    cout << "Employee 2: ";
    cin >> firstName02;
    //cout << " ";
    cin >> lastName02;
    cout << "Monthly Salary: ";
    cin >> salary02;
    Employee employee2(firstName02, lastName02, salary02);

    cout << "\nIncreasing employee salaries by 10%" << endl;
   /* Output the first name, last name and salary for each Employee. */
   /* Give each Employee a 10% raise. */
   /* Output the first name, last name and salary of each Employee again. */
    employee1.dateMember();
    cout << endl;
    employee2.dateMember();
} // end main


