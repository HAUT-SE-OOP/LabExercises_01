// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob","Jone",2875);
    Employee employee2("Susan","Baker",3150);
    /* Create two Employee objects and assign them to Employee variables. */

    cout << "Employee 1:" << employee1.getFirstName() << " " << employee1.getLastName()
        << "; Yearly Salary: " << employee1.getMonthlySalary()*12 << endl;
    cout << "Employee 1:" << employee2.getFirstName() << " " << employee2.getLastName()
        << "; Yearly Salary: " << employee2.getMonthlySalary()*12 << endl;
    /* Output the first name, last name and salary for each Employee. */

    cout << "\nIncreasing employee salaries by 10%" << endl;
    employee1.setMonthlySalary(employee1.getMonthlySalary()*0.1+employee1.getMonthlySalary());
    employee2.setMonthlySalary(employee2.getMonthlySalary()*0.1+employee2.getMonthlySalary());
    /* Give each Employee a 10% raise. */

    cout << "Employee 1:" << employee1.getFirstName() << " " << employee1.getLastName()
        << "; Yearly Salary: " << employee1.getMonthlySalary()*12 << endl;
    cout << "Employee 1:" << employee2.getFirstName() << " " << employee2.getLastName()
        << "; Yearly Salary: " << employee2.getMonthlySalary()*12 << endl;
    /* Output the first name, last name and salary of each Employee again. */
} // end main


