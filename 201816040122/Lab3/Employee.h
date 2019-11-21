
// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

/* Define a set function for the first name data member. */

/* Define a get function for the first name data member. */

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "Employee.h"

// constructor initializes courseName and instructorName
// with strings supplied as arguments
Employee::Employee( string name, string surname,int wages )
{
   setemployeeName( name ); // initializes courseName
   setemployeeSurname( surname ); // initialiZes instructorName
   setemployeeWages(wages);
   if(wages<0)
    wages=0;
} // end GradeBook constructor

// function to set the course name
void Employee::setemployeeName( string name )
{
   employeeName = name; // store the course name
} // end function setCourseName

// function to retrieve the course name
string Employee::getemployeeName()
{
   return employeeName;
} // end function getCourseName
void Employee::setemployeeSurname(string surname)
{
    employeeSurname = name;
}
string Employee::getemployeeSurname()
{
    return employeeSurname;
}
void Employee::setemployeeWages(string wages)
{
    employeeWages = wages;
}
string Employee::getemployeeWages()
{
    return employeeWages;
}
/* write code to define a get member function for the instructor's name */

/* write code to define a set member function for the instructor's name */

// display a welcome message and the instructor's name
void Employee::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Employee1: " << getemployeeName() <<":"<<getemployeeSurname()<<":"<<getemployeeWages()
      << endl;
   cout<<"Employee2:"<<getemployeeName() <<":"<<getemployeeSurname()<<":"<<getemployeeWages()
      <<endl;
   /* write code to output the instructor's name */
} // end function displayMessage
