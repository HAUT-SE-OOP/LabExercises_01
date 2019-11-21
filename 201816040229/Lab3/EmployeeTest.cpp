// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    int YearlySalary1,YearlySalary2,YearlySalary11,YearlySalary22;
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones",2875);
    Employee employee2("Susan","Baker",3150);

   /* Output the first name, last name and salary for each Employee. */
    YearlySalary1=employee1.getMonthlySalary()*12;
    YearlySalary2=employee2.getMonthlySalary()*12;
    cout<<"employee1:"<<employee1.getFirstName()<<" "<<employee1.getLastName()<<"; "<<"Yearly Salary:"<<YearlySalary1<<endl;

    cout<<"employee2:"<<employee2.getFirstName()<<" "<<employee2.getLastName()<<"; "<<"Yearly Salary:"<<YearlySalary2<<endl;

   /* Give each Employee a 10% raise. */
    cout<<"Increasing employee salaries by 10%\n";
    YearlySalary11=YearlySalary1*1.1;

    YearlySalary22=YearlySalary2*1.1;
   /* Output the first name, last name and salary of each Employee again. */
    cout<<"employee1:"<<employee1.getFirstName()<<" "<<employee1.getLastName()<<"; "<<"Yearly Salary:"<<YearlySalary11<<endl;

    cout<<"employee2:"<<employee2.getFirstName()<<" "<<employee2.getLastName()<<"; "<<"Yearly Salary:"<<YearlySalary22<<endl;
} // end main


