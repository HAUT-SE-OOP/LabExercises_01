// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include <string>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
	Employee Employee1("Bob", "Jones", 2875);
	Employee Employee2("Susan", "Baker", 3150);

   /* Output the first name, last name and salary for each Employee. */
	cout << "Employee1" << Employee1.getEmplpyeeFirst()<< Employee1.getEmplpyeeLast() <<":"<<"Yearly Salary"<<":"<< Employee1.getEmplpyeesalary();
	cout << "Employee2" << Employee2.getEmplpyeeFirst() << Employee2.getEmplpyeeLast() << ":" << "Yearly Salary" << ":" << Employee2.getEmplpyeesalary();
   /* Give each Employee a 10% raise. */
	cout << "Increasing employee salaries by 10%";
   /* Output the first name, last name and salary of each Employee again. */
	Employee Employee3("Bob", "Jones", 2875*1.1);
	Employee Employee4("Susan", "Baker", 3150*1.1);
	cout << "Employee1" << Employee3.getEmplpyeeFirst() << Employee3.getEmplpyeeLast() << ":" << "Yearly Salary" << ":" << Employee3.getEmplpyeesalary();
	cout << "Employee2" << Employee4.getEmplpyeeFirst() << Employee4.getEmplpyeeLast() << ":" << "Yearly Salary" << ":" << Employee4.getEmplpyeesalary();
} // end main


