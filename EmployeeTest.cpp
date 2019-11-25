// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee Employee1("Bob Jones","Yearly Salary: ",2875);
    Employee Employee2("Susan Baker","Yearly Salary: ",3150);
   // Create two Employee objects and assign them to Employee variables.
    cout<<"Employee1: "<<Employee1.getFirstName()<<" ;"<<Employee1.getLastName()<<Employee1.getMonthlySalary()*12<<endl;
    cout<<"Employee2: "<<Employee2.getFirstName()<<" ;"<<Employee2.getLastName()<<Employee2.getMonthlySalary()*12<<endl;
    //Output the first name, last name and salary for each Employee.
    cout<<"\n"<<endl;
   cout<<"Increasing Employee salaries by 10%"<<endl;   // Give each Employee a 10% raise.
    cout<<"Employee1: "<<Employee1.getFirstName()<<"; "<<Employee1.getLastName()<<Employee1.getMonthlySalary()*11/10*12<<endl;
    cout<<"Employee2: "<<Employee2.getFirstName()<<"; "<<Employee2.getLastName()<<Employee2.getMonthlySalary()*11/10*12<<endl;
    //Output the first name, last name and salary of each Employee again.
} // end main


