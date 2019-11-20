// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob","Jones",2875);//initialization
    Employee employee2("Susan","Baker",3150);
   /* Create two Employee objects and assign them to Employee variables. */
    //employee1.displayMessage();
    cout << "Employee 1:" << employee1.getLastName()<<" "<<employee1.getFirstName()<<";"<<" "<<"Yearly Salary:"<<" "<<employee1.getSalary()<<endl;
    cout << "Employee 2:" << employee2.getLastName()<<" "<<employee2.getFirstName()<<";"<<" "<<"Yearly Salary:"<<" "<<employee2.getSalary()<<endl;
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Increasing employee salaries by 10%\n"<<endl;
   /* Give each Employee a 10% raise. */
    Employee employee3("Bob","Jones",2875*(1+0.1));
    Employee employee4("Susan","Baker",3150*(1+0.1));
   /* Output the first name, last name and salary of each Employee again. */
    cout << "Employee 1:" << employee3.getLastName()<<" "<<employee3.getFirstName()<<";"<<" "<<"Yearly Salary:"<<" "<<employee3.getSalary()<<endl;
    cout << "Employee 2:" << employee4.getLastName()<<" "<<employee4.getFirstName()<<";"<<" "<<"Yearly Salary:"<<" "<<employee4.getSalary()<<endl;
} // end main


