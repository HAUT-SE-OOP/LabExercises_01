// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string firstname, string lastname, int salary02)
:firstName(firstname), lastName(lastname), salary(salary02)
    {
    }
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
    void Employee::setFirstName(string firstname)
   {
       firstName = firstname;
   }

   string Employee::getFirstName()
   {
       return firstName;
   }

   void Employee::setLastName(string lastname)
   {
       lastName = lastname;
   }

   string Employee::getLastName()
   {
       return lastName;
   }

   void Employee::setSalary(int salary02)
   {
       salary = salary02;
   }

   int Employee::getSalary()
   {
       if(salary < 0)
        return 0;
       else
        return salary;
   }

/* Define a get function for the monthly salary data member. */
    void Employee::dateMember()
    {
        cout << "Employee 1: " << getFirstName() << " " << getLastName() << "; Monthly Salary: " << getSalary()*1.1;
    }
