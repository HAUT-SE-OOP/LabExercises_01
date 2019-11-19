// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    string name1, name2, familyname1, familyname2;
    int salary1, salary2;
    cout << "Employee 1: ";
    cin >> name1 >> familyname1;
    cout << "Yearly Salary: ";
    cin >> salary1;
    cout << "\nEmployee 2: ";
    cin >> name2 >> familyname2;
    cout << "Yearly Salary: ";
    cin >> salary2;
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee1(name1, familyname1, salary1);
   Employee employee2(name2, familyname2, salary2);

   /* Output the first name, last name and salary for each Employee. */

   /* Give each Employee a 10% raise. */
   cout << "Increasing employee salaries by 10%" <<endl;
   employee1.setsalary(1.1*salary1);
   employee2.setsalary(1.1*salary2);

   /* Output the first name, last name and salary of each Employee again. */
   cout << "Employee 1: " << employee1.getname() << ";" << "Yearly Salary: " << employee1.getsalary() <<endl;
   cout << "Employee 2: " << employee2.getname() << ";" << "Yearly Salary: " << employee2.getsalary() <<endl;
} // end main


