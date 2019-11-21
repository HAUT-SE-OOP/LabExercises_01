// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    string firstname, lastname;
    int salary;
    cout  << "姓名为：";
   /* Output the first name, last name and salary for each Employee. */
    cin >> firstname ;
    cout << " ";
    cin >> lastname ;
    cout << "工资为：";
    cin >> salary;
   /* Give each Employee a 10% raise. */
    Employee employee1(firstname, lastname, salary);
    employee1.Amount();
    cout << "Name:" << employee1.getFirstName() << " " << employee1.getLastName() << "    "
    << "salaryAmount:" << employee1.getYearlySalary();
   /* Output the first name, last name and salary of each Employee again. */
   cout  << "\n\n姓名为：";
   /* Output the first name, last name and salary for each Employee. */
    cin >> firstname ;
    cout << " ";
    cin >> lastname ;
    cout << "工资为：";
    cin >> salary;
   /* Give each Employee a 10% raise. */
    Employee employee2(firstname, lastname, salary);
    employee2.Amount();
    cout << "Name:" << employee2.getFirstName() << " " << employee2.getLastName() << "    "
    << "salaryAmount:" << employee2.getYearlySalary();
} // end main


