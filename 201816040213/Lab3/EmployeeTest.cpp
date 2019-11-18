// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Mike ", "Smith" , 2850);
    Employee employee2("John ", "Curry" , 3150);
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee 1: "<<employee1.getFirstName()<<employee1.getLastName()<<"; Yearly Salary: "<<employee1.getMonthlySalary()*12<<endl;
    cout<<"Employee 2: "<<employee2.getFirstName()<<employee2.getLastName()<<"; Yearly Salary: "<<employee2.getMonthlySalary()*12<<endl;
   /* Give each Employee a 10% raise. */
    int yearlySalary1=employee1.getMonthlySalary()*1.1*12;
    int yearlySalary2=employee2.getMonthlySalary()*1.1*12;
   /* Output the first name, last name and salary of each Employee again. */
    cout<<"\nIncreasing employee salaries by 10%\n"<<endl;
    cout<<"Employee 1: "<<employee1.getFirstName()<<employee1.getLastName()<<"; Yearly Salary: "<<yearlySalary1<<endl;
    cout<<"Employee 2: "<<employee2.getFirstName()<<employee2.getLastName()<<"; Yearly Salary: "<<yearlySalary2<<endl;
} // end main
