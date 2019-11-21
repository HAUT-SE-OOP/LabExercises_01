// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 
  
#include "Employee.cpp" // include definition of class Employee

// function main begins program execution
int main()
{
   Employee employee1("Bob","Jones",34500);
   Employee employee2("Susan","Baker",37800);

   cout<<"Emlpoyee 1:"<<employee1.getFirstName()<<employee1.getLastName()<<";"<<employee1.getIncome()<<endl;
   cout<<"Emlpoyee 2:"<<employee2.getFirstName()<<employee2.getLastName()<<";"<<employee2.getIncome()<<endl;

   employee1.setIncome(34500*1.1);
   employee2.setIncome(37800*1.1);

   cout<<"Emlpoyee 1:"<<employee1.getFirstName()<<employee1.getLastName()<<";"<<employee1.getIncome()<<endl;
   cout<<"Emlpoyee 2:"<<employee2.getFirstName()<<employee2.getLastName()<<";"<<employee2.getIncome()<<endl;
} // end main

