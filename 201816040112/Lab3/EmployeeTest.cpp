// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "headers.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones",2875);
    Employee employee2("Susan","Baker",3150);

   /* Output the first name, last name and salary for each Employee. */
    employee1.display();
    employee2.display();
    cout<<endl;
   /* Give each Employee a 10% raise. */
    cout<<"After increasing 10%"<<endl;
   /* Output the first name, last name and salary of each Employee again. */
   employee1.increase();
   employee2.increase();
} // end main


