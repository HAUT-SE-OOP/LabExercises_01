// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{   int a = 2875,b = 3150;
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employ1("Bob","Jones",a),employ2("Susan","baker",b);

   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee 1: "<<employ1.getFirstName()<<" "<<employ1.getLastName()<<";"<<"Yearly Salary: "<<employ1.getMonthlySalary()*12
    <<endl<<"Employee 2: "<<employ2.getFirstName()<<" "<<employ2.getLastName()<<";"<<"Yearly Salary: "<<employ2.getMonthlySalary()*12<<endl<<endl;
   /* Give each Employee a 10% raise. */
    cout<<"Increasing employee salaries by 10%"<<endl;
   /* Output the first name, last name and salary of each Employee again. */
   employ1.setMonthlySalary(a*1.1);
   employ2.setMonthlySalary(b*1.1);
    cout<<"Employee 1: "<<employ1.getFirstName()<<" "<<employ1.getLastName()<<";"<<"Yearly Salary: "<<employ1.getMonthlySalary()*12
    <<endl<<"Employee 2: "<<employ2.getFirstName()<<" "<<employ2.getLastName()<<";"<<"Yearly Salary: "<<employ2.getMonthlySalary()*12<<endl<<endl;
} // end main


