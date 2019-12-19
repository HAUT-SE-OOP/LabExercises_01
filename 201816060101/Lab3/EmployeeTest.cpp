// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
	/* Create two Employee objects and assign them to Employee variables. */
	Employee a("BoB", "Jones", 34500 / 12), b("Susan", "Baker", 37800 / 12);	//Initializing elements
   /* Output the first name, last name and salary for each Employee. */
	cout << "Employee 1: " << a.getFirstName() << " " << a.getLastName() << "; Yearly Salary: " << a.getMonthlySalary() * 12 << "\n";
	cout << "Employee 2: " << b.getFirstName() << " " << b.getLastName() << "; Yearly Salary: " << b.getMonthlySalary() * 12 << "\n";

	/* Give each Employee a 10% raise. */
	cout << "\nIncreasing employee salaries by 10%\n";
	a.setMonthlySalary(a.getMonthlySalary() * 1.1);
	b.setMonthlySalary(b.getMonthlySalary() * 1.1);

	/* Output the first name, last name and salary of each Employee again. */
	cout << "Employee 1: " << a.getFirstName() << " " << a.getLastName() << "; Yearly Salary: " << a.getMonthlySalary() * 12 << "\n";
	cout << "Employee 2: " << b.getFirstName() << " " << b.getLastName() << "; Yearly Salary: " << b.getMonthlySalary() * 12 << "\n";
} // end main
