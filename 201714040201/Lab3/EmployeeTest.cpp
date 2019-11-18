// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include "Employee.h" // include definition of class Employee

using namespace std;

// function main begins program execution
int main()
{
    /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones",2875);
    Employee employee2("Susan","Baker",3150);
    /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee 1: ";
    employee1.displayMessage();
    cout<<"Employee 2: ";
    employee2.displayMessage();

    /* Give each Employee a 10% raise. */
    int raisesalary;/*input raise salary*/
    cin>>raisesalary;
    cout<<"Increasing employee salaries by "<<raisesalary<<"%"<<endl;
    employee1.setRaiseMonthSalary(raisesalary);
    employee2.setRaiseMonthSalary(raisesalary);
    /* Output the first name, last name and salary of each Employee again. */
    cout<<"Employee 1: ";
    employee1.displayMessage();
    cout<<"Employee 2: ";
    employee2.displayMessage();

} // end main


