// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Jones","Bob",2875);
    Employee employee2("Baker","Susan",3150);
   /* Output the first name, last name and salary for each Employee. */
    cout<<"employ1: "<<employee1.getEmployeeName()<<" "<<employee1.getEmployeeSurname()<<";";
    cout<<"Yearly Salary:"<<12*employee1.getEmployeeIncome()<<endl;
    cout<<"employ2: "<<employee2.getEmployeeName()<<" "<<employee2.getEmployeeSurname()<<";";
    cout<<"Yearly Salary:"<<12*employee2.getEmployeeIncome()<<endl<<endl;

   /* Give each Employee a 10% raise. */
   /* Output the first name, last name and salary of each Employee again. */
    cout<<"Increasing employee salaries by 10%"<<endl<<endl;
    cout<<"employ1: "<<employee1.getEmployeeName()<<" "<<employee1.getEmployeeSurname()<<";";
    cout<<"Yearly Salary:"<<12*employee1.getEmployeeIncome()+12*employee1.getEmployeeIncome()*0.10<<endl;
    cout<<"employ2: "<<employee2.getEmployeeName()<<" "<<employee2.getEmployeeSurname()<<";";
    cout<<"Yearly Salary:"<<12*employee2.getEmployeeIncome()+12*employee2.getEmployeeIncome()*0.10<<endl;

    return 0;
} // end main


