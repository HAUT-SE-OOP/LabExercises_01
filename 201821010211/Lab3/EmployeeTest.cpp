// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   Employee employee1("Bob","Jones","34500");
   Employee employee2("Susan","Baker","37800");/* Create two Employee objects and assign them to Employee variables. */

   cout<<"employee1: "<<employee1.getFirstName()<<" "<<employee1.getLastName()<<" "<<"Yearly Salary: "<<12*employee1.getMonthSalary()<<"\n"endl;
   cout<<"employee2: "<<employee2.getFirstName()<<" "<<employee2.getLastName()<<" "<<"Yearly Salary: "<<12*employee2.getMonthSalary()<<"\n"endl;
   /* Output the first name, last name and salary for each Employee. */
   cout<<"Increasing employee salaries by 10%\n"<<endl;
   /* Give each Employee a 10% raise. */

   cout<<"employee1: "<<employee1.getFirstName()<<" "<<employee1.getLastName()<<" "<<"Yearly Salary: "<<1.1*12*employee1.getMonthSalary()<<"\n"endl;
   cout<<"employee2: "<<employee2.getFirstName()<<" "<<employee2.getLastName()<<" "<<"Yearly Salary: "<<1.1*12*employee2.getMonthSalary()<<"\n"endl;/* Output the first name, last name and salary of each Employee again. */
} // end main


