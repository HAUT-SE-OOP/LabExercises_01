// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones", 34500);
    Employee employee2("Susan","Baker", 37800);
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee 1: "<<employee1.getXing()<<" "<<employee1.getMing()<<"; "<<
   "Yearly Salary: "<<employee1.getMoney()<<endl;
   cout<<"Employee 2: "<<employee2.getXing()<<" "<<employee2.getMing()<<"; "<<
   "Yearly Salary: "<<employee2.getMoney()<<endl<<endl;
   /* Give each Employee a 10% raise. */
    cout<<"Increasing employee salaries by 10%\n";
    employee1.upMoney();
    employee2.upMoney();
   /* Output the first name, last name and salary of each Employee again. */
   cout<<"Employee 1: "<<employee1.getXing()<<" "<<employee1.getMing()<<"; "<<
   "Yearly Salary: "<<employee1.getMoney()<<endl;
   cout<<"Employee 2: "<<employee2.getXing()<<" "<<employee2.getMing()<<"; "<<
   "Yearly Salary: "<<employee2.getMoney()<<endl;
} // end main


