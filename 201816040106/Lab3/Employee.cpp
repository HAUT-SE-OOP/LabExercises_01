// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string name1,string name2,int initialsalary){
	setEmployee1(name1);
	setEmployee2(name2);
	setSalary(initialsalary);
}
/* Define a set function for the first name data member. */
void Employee::setEmployee1(string name1){
	employee1=name1;
}
/* Define a get function for the first name data member. */
string Employee::getEmployee1(){
	return employee1;
}
/* Define a set function for the last name data member. */
void Employee::setEmployee2(string name2){
	employee2=name2;
}
/* Define a get function for the last name data member. */
string Employee::getEmployee2(){
	return employee2;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setSalary(int initialsalary){
	if(initialsalary<0) 
		salary=0;
	else
		salary=initialsalary;
}
/* Define a get function for the monthly salary data member. */
int Employee::getSalary(){
	return salary;
}
