// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
     Employee Employee1("k","y", 0),Employee2("m","n", 0);
  Employee1.setemployeename("Bob");
   Employee1.setemoloyeesurname(" Jones;");
   Employee1.setemployeesalary( 34500);
   Employee2.setemployeename("Susan");
   Employee2.setemoloyeesurname(" Baker;");
   Employee2.setemployeesalary( 37800);
   cout << "Employee 1:" << Employee1.getemployeename() << Employee1.getemployeesurname() << "Yearly Salary:" << Employee1.getemployeesalary()<<endl;
  cout << "Employee 2:" << Employee2.getemployeename() << Employee2.getemployeesurname() << "Yearly Salary:" << Employee2.getemployeesalary()<<endl;
cout << "Increasing employee salaries by 10%" << endl;
   Employee1.setemployeesalary( 34500+34500*0.1);
   Employee2.setemployeesalary( 37800+37800*0.1);
   cout << "Employee 1:" << Employee1.getemployeename() << Employee1.getemployeesurname() << "Yearly Salary:" << Employee1.getemployeesalary()<<endl;
   cout << "Employee 2:" << Employee2.getemployeename() << Employee2.getemployeesurname() << "Yearly Salary:" << Employee2.getemployeesalary()<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main
