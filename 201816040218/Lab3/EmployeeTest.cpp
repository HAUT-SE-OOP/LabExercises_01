// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee1("Bob" ,"Jones ",2875);
   Employee employee2("Susan" ,"Baker",3150);
   //employee1.Employee("Bob" ,"Jones ",2875);
   //employee2.Employee("Susan" ,"Baker",3150);

   /* Output the first name, last name and salary for each Employee. */
   employee1.displayMessage();
   employee2.displayMessage();

   /* Give each Employee a 10% raise. */
   cout << "Increasing employee salaries by 10%" <<endl;
   employee1.Increasingemployeesalary();
   employee2.Increasingemployeesalary();

   /* Output the first name, last name and salary of each Employee again. */
   employee1.displayMessage();
   employee2.displayMessage();

} // end main


