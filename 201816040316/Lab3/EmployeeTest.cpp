// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 
  
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    string Firstname1;
    string Firstname2;
    string Lastname1;
    string Lastname2;
    double salary1;
    double salary2;
   /* Output the first name, last name and salary for each Employee. */
   cout<<"Employee 1 Firstname Lastname salary"<<endl;

   /* Give each Employee a 10% raise. */
   cin>>Firstname1>>Lastname1;
   cin>>salary1;
   Employee employee1(firstname1, lastname1, salary1);
   employee1.setEmployeefirstname(Firstname1);
   employee1.setEmployeelastname(lastname1);
   employee1.setEmployeemonthlysalary(salary1);
 
   /* Output the first name, last name and salary of each Employee again. */
   cout<<"Employee 2 Firstname Lastname salary"<<endl;
   cin>>Firstname2>>Lastname2;
   cin>>salary2;
   Employee employee2(Firstname2, lastname2, salarys2);
   employee2.setEmployeefirstname(Firstname2);
   employee2.setEmployeelastname(Lastname2);
   employee2.setEmployeemonthlysalary(salary2);
    
} // end main


