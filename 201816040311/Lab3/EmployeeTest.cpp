// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones",34500);
    Employee employee2("Susan","Baker",37800);

    /* Output the first name, last name and salary for each Employee. */
    cout << "Employee 1:"<<employee1.getFirstname() << " "<<employee1.getLastname()<<";"<<"Yearly Salary:"<<employee1.getSalary()<<endl;
    cout << "Employee 2:"<<employee2.getFirstname() << " "<<employee2.getLastname()<<";"<<"Yearly Salary:"<<employee2.getSalary()<<endl;
    cout <<endl;
    /* Give each Employee a 10% raise. */
    cout <<"Increasing employee salaries by 10%"<<endl;
    employee1.addSalary();
    employee2.addSalary();
    /* Output the first name, last name and salary of each Employee again. */
    cout << "Employee 1:"<<employee1.getFirstname() << " "<<employee1.getLastname()<<";"<<"Yearly Salary:"<<employee1.getSalary()<<endl;
    cout << "Employee 2:"<<employee2.getFirstname() << " "<<employee2.getLastname()<<";"<<"Yearly Salary:"<<employee2.getSalary()<<endl;
    cout <<endl;
} // end main


