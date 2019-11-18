// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee1("Bob","Jones",2875);//initializes employee1 data
   Employee employee2("Susan","Baker",3150);//initializes employee2 data

   /* Output the first name, last name and salary for each Employee. */
   cout<<"Employee 1: "<<employee1.getFirstName()<< employee1.getLastName()<<";" <<"Yearly Salary: "<<employee1.getSalary()*12<<endl;
   cout<<"Employee 2: "<<employee2.getFirstName()<< employee2.getLastName()<<";" <<"Yearly Salary: "<<employee2.getSalary()*12<<endl;
   /* Give each Employee a 10% raise. */
   cout<<endl;
   employee1.setSalary(employee1.getSalary()*1.1);
   employee2.setSalary(employee2.getSalary()*1.1);
   cout<<"Increasing employee salaries by 10%\n";
   cout<<"Employee 1: "<<employee1.getFirstName()<< employee1.getLastName()<<";" <<"Yearly Salary: "<<employee1.getSalary()*12<<endl;
   cout<<"Employee 2: "<<employee2.getFirstName()<< employee2.getLastName()<<";" <<"Yearly Salary: "<<employee2.getSalary()*12<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main


