// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob Jones;","Yearly Salary:",34500);
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee2("Bob Jones;","Yearly Salary:",37800);
cout<<"Employee1:"<<employee1.getfristname()<<employee1.getlastname()<<employee1.getsalary()<<endl;
cout<<"Employee2:"<<employee2.getfristname()<<employee2.getlastname()<<employee2.getsalary()<<endl;
   /* Output the first name, last name and salary for each Employee. */
employee1.func();
employee2.func();
cout<<"\nIncreasing employee salaries bu 10%"<<endl;
   /* Give each Employee a 10% raise. */
cout<<"Employee1:"<<employee1.getfristname()<<employee1.getlastname()<<employee1.getsalary()<<endl;
cout<<"Employee2:"<<employee2.getfristname()<<employee2.getlastname()<<employee2.getsalary()<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main
