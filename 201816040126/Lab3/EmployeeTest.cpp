// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob ","Jones",2875);
    Employee employee2("Susan " ,"Baker" ,3150);

    cout << "Employee 1: " << employee1.getFirstName() << employee1.getLastName() << "; Yearly Salary: " << employee1.getSalary() * 12
    << endl;//information about employee1

    cout << "Employee 2: " << employee2.getFirstName() << employee2.getLastName() << "; Yearly Salary: " << employee2.getSalary() * 12
    << endl;//information about employee2

    cout << "\nIncreasing employee salaries by 10%\n" << endl;

    Employee employee3("Bob ","Jones",2875 * (1+0.1));

    Employee employee4("Susan " ,"Baker" ,3150 * (1+0.1));

    cout << "Employee 1: " << employee3.getFirstName() << employee3.getLastName() << "; Yearly Salary: " << employee3.getSalary() *12
    << endl;//information about employee1 after raising

    cout << "Employee 4: " << employee4.getFirstName() << employee4.getLastName() << "; Yearly Salary: " << employee4.getSalary() *12
    << endl;//information about employee2 after raising

} // end main


