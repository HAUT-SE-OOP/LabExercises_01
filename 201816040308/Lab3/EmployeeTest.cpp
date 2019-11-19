// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{

   Employee Employee1("Bob","Jones",34500/12);
   Employee Employee2("Susan","Baker",37800/12);
   /* Create two Employee objects and assign them to Employee variables. */

   cout<<"Employee 1: "<<Employee1.getname1()<<' '<<Employee1.getname2()<<"; "<<"Yearly Salary: "<<Employee1.getsalary()*12<<endl;
   cout<<"Employee 2: "<<Employee2.getname1()<<' '<<Employee2.getname2()<<"; "<<"Yearly Salary: "<<Employee2.getsalary()*12<<endl<<endl;;
   /* Output the first name, last name and salary for each Employee. */

   cout<<"Increaseing employee salaries by 10%"<<endl;
   Employee1.setsalary(int(double(Employee1.getsalary())*1.1)*12);
   Employee2.setsalary(int(double(Employee2.getsalary())*1.1)*12);
   /* Give each Employee a 10% raise. */
   cout<<"Employee 1: "<<Employee1.getname1()<<' '<<Employee1.getname2()<<"; "<<"Yearly Salary: "<<Employee1.getsalary()<<endl;
   cout<<"Employee 2: "<<Employee2.getname1()<<' '<<Employee2.getname2()<<"; "<<"Yearly Salary: "<<Employee2.getsalary()<<endl<<endl;;
   /* Output the first name, last name and salary of each Employee again. */
} // end main


