// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

Employee::Employee(string initialname1,string  initialname2,int initialsalary)
    :   firstname(initialname1),lastname(initialname2),monthsalary(initialsalary)
    {
      if(initialsalary<0)
            monthsalary=0;
    }//end constractor Employee function


   // Declare a set method for the employee's first name
   void Employee:: setemployeename1(string name1)
   {
       firstname=name1;
   }//end setemployeename1 member function

   //Declare a get method for the employee's first name
   string Employee::getemployeename1() const
   {
       return firstname;
   }//end getemployeename1 member function


    void Employee::setemployeename2(string name2)
   {
       lastname=name2;
   }//end setemployeename2 member function

   //Declare a get method for the employee's last name
   string Employee::getemployeename2()
   {
       return lastname;
   }//end getemployeename2 member function



   //Declare a set method for the employee's monthly salary
    void Employee::setmonthsalary(int data)
    {
        monthsalary=data;
    }//end setsalary member function

    //Declare a get method for the employee's monthly salary
   int Employee::getmonthsalary()
   {
       return monthsalary;
   }//end getsalary member function
