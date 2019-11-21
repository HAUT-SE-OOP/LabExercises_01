// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include <string>
using namespace std;

#include "Employee.h" // Employee class definition


/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
  Employee::Employee(string fname, string lname, int salar)
  {
    setEmplpyeeFirst(fname);
    setEmplpyeeLast(lname);
    setEmplpyeesalary(salar);
  }

/* Define a set function for the first name data member. */
void Employee::setEmplpyeeFirst(string name) {
	firstName = name;
}
/* Define a get function for the first name data member. */
string Employee::getEmplpyeeFirst() {
	return firstName;
}
/* Define a set function for the last name data member. */
void Employee::setEmplpyeeLast(string name) {
	lastName = name;
}
/* Define a get function for the last name data member. */
string Employee::getEmplpyeeLast() {
	return lastName;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setEmplpyeesalary(int salary1) {
	salary = salary1;
}

/* Define a get function for the monthly salary data member. */
int Employee::getEmplpyeesalary() {
	int yearSalary = salary*12;
	return yearSalary;
}
