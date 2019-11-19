// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    int a;
    Employee employee1("Bob Jones",34500);
    Employee employee2("Susan Baker",37800);
    employee1.display();
    employee2.display();
    cout<< "Increasing employee salaries by 10%"<<endl;
    employee1.increase(a);
    employee2.increase(a);
    employee1.display();
    employee2.display();
} // end main


