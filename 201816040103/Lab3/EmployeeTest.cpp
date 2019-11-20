// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 
  
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
	Employee Employee1("Bob","Jones",34500);
	Employee Employee2("Susan","Bakers",37800);
	cout<<"Emplyee 1: "<<Employee1.getEmployee1()<<" "<<Employee1.getEmployee2()<<";"<<"Yearly Salary :"<<Employee1.getSalary()<<endl;
	cout<<"Emplyee 2: "<<Employee2.getEmployee1()<<" "<<Employee2.getEmployee2()<<";"<<"Yearly Salary :"<<Employee2.getSalary()<<endl;
	cout<<"Increasing employee salaries by 10%"<<endl;
	Employee1.setSalary(Employee1.getSalary()*1.1);
	Employee2.setSalary(Employee2.getSalary()*1.1);
   	cout<<"Emplyee 1: "<<Employee1.getEmployee1()<<" "<<Employee1.getEmployee2()<<";"<<"Yearly Salary :"<<Employee1.getSalary()<<endl;
	cout<<"Emplyee 2: "<<Employee2.getEmployee1()<<" "<<Employee2.getEmployee2()<<";"<<"Yearly Salary :"<<Employee2.getSalary()<<endl;
} // end main

