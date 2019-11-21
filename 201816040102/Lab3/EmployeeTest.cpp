// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 
  
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   	Employee employee1("Bob","Jones",2875);/* Create two Employee objects and assign them to Employee variables. */
  	Employee employee2("Susan","Baker",3150);/* Output the first name, last name and salary for each Employee. */
  	cout <<"employee1 :  " ;
  	employee1.display();
  	cout <<"employee2 :  " ;
	employee2.display();
  	cout<<"Increasing employee salaries by 10%\n";
  	
  	employee1.setMonthsalary(2875*1.1);
  	
  	employee2.setMonthsalary(3150*1.1);
	cout <<"employee1 :  " ;
	employee1.display();
	cout <<"employee2 :  " ;
	employee2.display();
   /* Give each Employee a 10% raise. */
	

   /* Output the first name, last name and salary of each Employee again. */
} // end main


