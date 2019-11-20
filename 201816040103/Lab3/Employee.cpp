// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string name1,string name2,int price){
	setEmployee1(name1);
	setEmployee2(name2);
	setSalary(price); 
}
/* Define a set function for the first name data member. */
void Employee::setEmployee1(string name1){
	firstName=name1;
}
/* Define a get function for the first name data member. */
string Employee::getEmployee1(){
	return firstName;
}
/* Define a set function for the last name data member. */
void Employee::setEmployee2(string name2){
	lastName=name2;
}
/* Define a get function for the last name data member. */
string Employee::getEmployee2(){
	return lastName;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setSalary(int price){
	if(price<0) salary=0;
	else salary=price;
}
/* Define a get function for the monthly salary data member. */
int Employee::getSalary(){
	return salary;
}
