// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Employee::Employee(string name1, string name2, int salary)
   {
       setName1(name1);
       setName2(name2);
       setSalary(salary);
   }

   void Employee::setName1(string name)
   {
       name1 = name;
   }

   string Employee::getName1()
   {
       return name1;
   }

   void Employee::setName2(string name)
   {
       name2 = name;
   }

   string Employee::getName2()
   {
       return name2;
   }

   void Employee::setSalary(int a)
   {
       salary = a;
   }

   int Employee::getSalary()
   {
       return salary;
   }


/* Define a set function for the first name data member. */

/* Define a get function for the first name data member. */

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
