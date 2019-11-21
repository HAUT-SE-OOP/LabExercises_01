// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;
#include "Employee.h" // include definition of class Employee
// function main begins program execution
int main()
{
    Employee employee1("Bob ","Jones",2875);    //Initialize the first employee's first name, last name, and monthly salary
    Employee employee2("Susan","Baker",3150);   //Initialize the second employee's first name, last name, and monthly salary
    employee1.displayMessage();     //Show the first employee's first name, last name, and monthly salary
    employee2.displayMessage();     //Show the second employee's first name, last name, and monthly salary
    cout<<"Increasing employee salaries by 10%\n\n";
    employee1.setsalary();      //Reload the first employee's first name, last name, and monthly salary
    employee1.getsalary();      //Get the first employee's first name, last name, and monthly salary
    employee2.setsalary();      //Reload the second employee's first name, last name, and monthly salary
    employee2.getsalary();      //Get the second employee's first name, last name, and monthly salary
    employee1.displayMessage();     //Show the first employee's first name, last name, and monthly salary
    employee2.displayMessage();     ////Show the second employee's first name, last name, and monthly salary
} // end main


