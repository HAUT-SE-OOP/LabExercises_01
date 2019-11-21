// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 

#include "Employee.cpp" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
	Employee people1("Bob","Jones",34500);
	Employee people2("Susan","Baker",37800);
   /* Output the first name, last name and salary for each Employee. */
	cout<<"Employee 1: "<<people1.getEmployee1()<<" "<<people1.getEmployee2()<<";";
	cout<<"Yearly Salary: "<<people1.getSalary()<<endl;
	cout<<"Employee 2: "<<people2.getEmployee1()<<" "<<people2.getEmployee2()<<";";
	cout<<"Yearly Salary: "<<people2.getSalary()<<endl;
	cout<<endl;
   /* Give each Employee a 10% raise. */
	cout<<"Increasing employee salaries by 10%"<<endl;
	int num1=people1.getSalary();
	int num2=people2.getSalary();
	num1=(int)(num1*1.1),num2=(int)(num2*1.1);
	people1.setSalary(num1);
	people2.setSalary(num2);
   /* Output the first name, last name and salary of each Employee again. */
   	cout<<"Employee 1: "<<people1.getEmployee1()<<" "<<people1.getEmployee2()<<";";
	cout<<"Yearly Salary: "<<people1.getSalary()<<endl;
	cout<<"Employee 2: "<<people2.getEmployee1()<<" "<<people2.getEmployee2()<<";";
	cout<<"Yearly Salary: "<<people2.getSalary()<<endl;
	cout<<endl;
} // end main


