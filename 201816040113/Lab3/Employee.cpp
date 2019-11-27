// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Employee::Employee(string firstname,string lastname,int salary)
   {
       setFirstName(firstname);
       setLastName(lastname);
       setSalary(salary);
   }
/* Define a set function for the first name data member. */
   void Employee::setFirstName(string firstname)
   {
       FirstName=firstname;
   }
/* Define a get function for the first name data member. */
   string Employee::getFirstName()
   {
       return FirstName;
   }
/* Define a set function for the last name data member. */
   void Employee::setLastName(string lastname)
   {
       LastName=lastname;
   }
/* Define a get function for the last name data member. */
   string Employee::getLastName()
   {
       return LastName;
   }
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
   void Employee::setSalary(int salary)
   {
       Salary=salary;
   }
/* Define a get function for the monthly salary data member. */
   int Employee::getSalary()
   {
       return Salary*12;
   }
