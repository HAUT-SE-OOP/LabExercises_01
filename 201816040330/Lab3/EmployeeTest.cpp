// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob","Jones",37500);
    Employee employee2("Susan","Baker",37800);

    cout<<"Employee 1:"<<employee1.getFirstName()<<" "<<employee1.getLastName()<<";"<<"Yearly Salary "<<employee1.getSalary();
    cout<<endl;
    cout<<"Employee 2:"<<employee2.getFirstName()<<" "<<employee2.getLastName()<<";"<<"Yearly Salary "<<employee2.getSalary();
    cout<<endl<<endl;
    cout<<"Increasing employee salaries by 10%"<<endl<<endl;
    cout<<"Employee 1:"<<employee1.getFirstName()<<" "<<employee1.getLastName()<<";"<<"Yearly Salary "<<employee1.getSalary()*1.1;
    cout<<endl;
    cout<<"Employee 2:"<<employee2.getFirstName()<<" "<<employee2.getLastName()<<";"<<"Yearly Salary "<<employee2.getSalary()*1.1;
} // end main


