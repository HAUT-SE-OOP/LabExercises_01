// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones",1);
    Employee employee2("Susan","Baker",2);
    int yearlysalary1,yearlysalary2;
    cin >>yearlysalary1>>yearlysalary2;

   /* Output the first name, last name and salary for each Employee. */
    cout <<"Employee1: "<< employee1.getFirstName()<<employee1.getLastName()<< "Yearly Salary: "<< yearlysalary1 <<endl;
    cout <<"Employeel: "<< employee2.getFirstName()<<employee2.getLastName()<< "Yearly Salary: "<< yearlysalary2 <<endl;

   /* Give each Employee a 10% raise. */
   cout << endl;
    cout <<"Increasing employee salaries by 10%\n"<< endl;
    yearlysalary1=yearlysalary1*1.1;
    yearlysalary2=yearlysalary2*1.1;
   /* Output the first name, last name and salary of each Employee again. */
    cout <<"Employee1: "<< employee1.getFirstName()<<employee1.getLastName()<< "Yearly Salary: "<< yearlysalary1 <<endl;
    cout <<"Employeel: "<< employee2.getFirstName()<<employee2.getLastName()<< "Yearly Salary: "<< yearlysalary2 <<endl;
} // end main


