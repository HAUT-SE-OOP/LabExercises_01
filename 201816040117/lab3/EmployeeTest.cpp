// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee Employee1("Arnold","Landon",8880);// create a Employee object; pass a first name ,last name and monthly salary
    Employee Employee2("Marry","White",6660);//create a Employee object; pass a first name ,last name and monthly salary
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee1:"<<Employee1.getFirstName()<<" "<<Employee1.getLastName()<<" ;"
    <<"Yearly Salary:"<<Employee1.getMonthlySalary()*12<<endl;//output Employee1's first name ,last name and yearly salary
    cout<<"Employee2:"<<Employee2.getFirstName()<<" "<<Employee2.getLastName()<<" ;"
    <<"Yearly Salary:"<<Employee2.getMonthlySalary()*12<<endl;//output Employee2's first name ,last name and yearly salary
   /* Give each Employee a 10% raise. */
    Employee1.setMonthlySalary(Employee1.getMonthlySalary()*(1+0.1));//reset Employee1's salary
    Employee2.setMonthlySalary(Employee2.getMonthlySalary()*(1+0.1));//reset Employee2's salary
    cout<<"\n"<<"Increasing employee salaries by 10%:\n\n";//prompt
   /* Output the first name, last name and salary of each Employee again. */
    cout<<"Employee1:"<<Employee1.getFirstName()<<" "<<Employee1.getLastName()<<" ;"
    <<"Yearly Salary:"<<Employee1.getMonthlySalary()*12<<endl;//once again output
    cout<<"Employee2:"<<Employee2.getFirstName()<<" "<<Employee2.getLastName()<<" ;"
    <<"Yearly Salary:"<<Employee2.getMonthlySalary()*12<<endl;//once again output
} // end main


