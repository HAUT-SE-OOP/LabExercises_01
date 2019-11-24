// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee employee1("Bob","Jones",2875);
    Employee employee2("Susan","Baker",3150);
   /* Output the first name, last name and salary for each Employee. */
    cout<<"Employee 1:"<<employee1.getfirstname()<<" "<<employee1.getlastname()<<";";
    cout<<"Yealy Salary:"<<employee1.getsalary()<<endl;
    cout<<"Employee 2:"<<employee2.getfirstname()<<" "<<employee2.getlastname()<<";";
    cout<<"Yealy Salary:"<<employee2.getsalary()<<endl;
   /* Give each Employee a 10% raise. */
    cout<<"Increasing employee salaries by 10%"<<endl;
   /* Output the first name, last name and salary of each Employee again. */
    cout<<"Employee 1:"<<employee1.getfirstname()<<" "<<employee1.getlastname()<<";";
    cout<<"Yealy Salary:"<<employee1.getsalary()*1.1<<endl;
    cout<<"Employee 2:"<<employee2.getfirstname()<<" "<<employee2.getlastname()<<";";
    cout<<"Yealy Salary:"<<employee2.getsalary()*1.1<<endl;
} // end main


