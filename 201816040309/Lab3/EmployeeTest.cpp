// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee Employee1("Bob","Jones",34500);
   Employee Employee2("Susan","Baker",37800);
   cout<<"Employee 1:"<<Employee1.getfirstame()<<" "<<Employee1.getlastname()<<";";
   cout<<"Yearly Salary:\t"<<Employee1.getsalary()<<endl;
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee 2:"<<Employee2.getfirstame()<<" "<<Employee2.getlastname()<<";";
    cout<<"Yearly Salary:\t"<<Employee2.getsalary()<<endl;
   /* Give each Employee a 10% raise. */
    cout <<"Increasing employee salaries by 10%"<<endl;
    Employee1.setsalary(1.1*Employee1.getsalary());
    Employee2.setsalary(1.1*Employee2.getsalary());
    cout<<"Employee 1:"<<Employee1.getfirstame()<<" "<<Employee1.getlastname()<<";";
   cout<<"Yearly Salary:\t"<<Employee1.getsalary()<<endl;
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee 2:"<<Employee2.getfirstame()<<" "<<Employee2.getlastname()<<";";
    cout<<"Yearly Salary:\t"<<Employee2.getsalary();

} // end main


