// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */

   Employee employee1("Bon","Jones",34500);
   Employee employee2("Sushan","Baker",37800);  //create two Employee object; pass a firstname,a lastname and salary
   /* Output the first name, last name and salary for each Employee. */
   cout<<"Employee1 "<< employee1.getFitstName()<< employee1.getLastName() <<" Yearly Salary: " <<employee1.getSalary()<<endl;
   cout<<"Employee2 "<< employee2.getFitstName()<< employee2.getLastName() <<" Yearly Salary: " << employee2.getSalary()<<endl;
   /* Give each Employee a 10% raise. */
   int newmoney1;
   int newmoney2;   //define two variables
   newmoney1=employee1.getSalary()/12*1.1;
   newmoney1=newmoney1*12;
   newmoney2=employee2.getSalary()/12*1.1;
    newmoney2=newmoney2*12;//pass the new salary to the two variables
   /* Output the first name, last name and salary of each Employee again. */
   cout<<"Increasing employee salaries by 10%"<<endl;
   cout<<"Employee1 "<<employee1.getFitstName() <<employee1.getLastName() <<" Yearly Salary: " <<newmoney1<<endl;
   cout<<"Employee2 "<<employee2.getFitstName() <<employee2.getLastName() <<" Yearly Salary: " <<newmoney2<<endl;
} // end main
