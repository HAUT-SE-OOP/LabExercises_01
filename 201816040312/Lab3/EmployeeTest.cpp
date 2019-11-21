// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones",34500),employee2("Susan","Baker",37800);//给两个类分别赋值
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee1:"<<employee1.getlastname() <<employee1.getfirstname()<<"Yearly Salary:"<<employee1.getmonthlysalary()<<endl;
    cout<<"Employee2:"<<employee2.getlastname() <<employee2.getfirstname()<<"Yearly Salary:"<<employee2.getmonthlysalary()<<endl;
   /* Give each Employee a 10% raise. */
    cout<<"\nIncreasing employee salaries by 10%"<<endl;
    cout<<"Employee1:"<<employee1.getlastname()<<employee1.getfirstname()<<"Yearly Salary:"<<1.1*employee1.getmonthlysalary()<<endl;
    cout<<"Employee2:"<<employee2.getlastname()<<employee2.getfirstname()<<"Yearly Salary:"<<1.1*employee2.getmonthlysalary()<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main


