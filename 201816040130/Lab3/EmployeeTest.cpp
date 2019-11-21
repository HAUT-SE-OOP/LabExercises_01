// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   //Create two Employee objects and assign them to Employee variables.
    Employee Employee1("Bob","Jones",2875);
    Employee Employee2("Baker","Baker",3150);
   cout << "Employee1: " << Employee1.getEmployeeFirstName() << " " << Employee1.getEmployeeLastName() << " Yearly Salary: " << Employee1.getEmployeeMonthlySalary() << endl;
   cout << "Employee2: " << Employee2.getEmployeeFirstName() << " " << Employee2.getEmployeeLastName() << " Yearly Salary: " << Employee2.getEmployeeMonthlySalary() << "\n" << endl;

   /* Give each Employee a 10% raise. */
   cout << "Increasing employee salaries by 10%\n" << endl;
    Employee Employee3("Bob","Jones",2875*1.1);
    Employee Employee4("Susan","Baker",3150*1.1);
   cout << "Employee1: " << Employee3.getEmployeeFirstName() << " " << Employee3.getEmployeeLastName() << " Yearly Salary: " << Employee3.getEmployeeMonthlySalary() << endl;
   cout << "Employee2: " << Employee4.getEmployeeFirstName() << " " << Employee4.getEmployeeLastName() << " Yearly Salary: " << Employee4.getEmployeeMonthlySalary() << endl;

}


