// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 
  
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee e1("Bob","Jones",34500);
   Employee e2("Susan","Baker",37800);

   /* Output the first name, last name and salary for each Employee. */
   cout<<"Emlpoyee 1:"<<e1.getname1()<<e1.getname2()<<";"<<e1.getincome()<<endl;
   cout<<"Emlpoyee 2:"<<e2.getname1()<<e2.getname2()<<";"<<e2.getincome()<<endl;

   /* Give each Employee a 10% raise. */
   e1.setincome(34500*1.1);
   e2.setincome(37800*1.1);

   /* Output the first name, last name and salary of each Employee again. */
      cout<<"Emlpoyee 1:"<<e1.getname1()<<e1.getname2()<<";"<<e1.getincome()<<endl;
   cout<<"Emlpoyee 2:"<<e2.getname1()<<e2.getname2()<<";"<<e2.getincome()<<endl;
} // end main

