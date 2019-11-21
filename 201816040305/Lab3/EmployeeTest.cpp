// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob", "Jones", 2875 );
    Employee employee2("Susan", "Baker", 3150 );
   /* Output the first name, last name and salary for each Employee. */
    cout << "Employee   1 :"<<employee1.getFristName() <<employee1.getLastName() <<";"<<"Yearly Salary :"<<employee1.YearthlySalary()<<endl ;
    cout << "Employee   2 :"<<employee2.getFristName() <<employee2.getLastName() <<";"<<"Yearly Salary :"<<employee2.YearthlySalary()<<endl ;
   /* Give each Employee a 10% raise. */
    cout<<"\nIncreasing employee salaries by 10%"<<endl ;

   /* Output the first name, last name and salary of each Employee again. */
    cout << "Employee   1 :"<<employee1.getFristName() <<employee1.getLastName() <<";"<<"Yearly Salary :"<<employee1.Upsalary()<<endl ;
    cout << "Employee   2 :"<<employee2.getFristName() <<employee2.getLastName() <<";"<<"Yearly Salary :"<<employee2.Upsalary()<<endl ;
} // end main


