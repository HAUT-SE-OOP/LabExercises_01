// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob Jones","Yearly Salary","34500");
    Employee employee2("Susan Baker","Yearly Salary","37800");
   /* Create two Employee objects and assign them to Employee variables. */
   emloyee1.displayMessage();
    emloyee2.displayMessage();
    cout<<endl;
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Increasing employee salaries by 10%"<<endl;
   /* Give each Employee a 10% raise. */
     employee1.setemployeeWages( "34500*1.1");
     employee2.setemployeeWages( "37800*1.1");
     emloyee1.displayMessage();
     emloyee1.displayMessage();
   /* Output the first name, last name and salary of each Employee again. */
} // end main
