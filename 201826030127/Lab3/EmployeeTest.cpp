// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    system("color 7D");
    //Create two Employee objects and assign them to Employee variables
     Employee employee1("Bob","Jone",2500);
     Employee employee2("Susan","Baker",3500);

   //Output the first name, last name and salary for each Employee
   cout<<"Employee 1:"<<employee1.getemployeename1()<<" "<<employee1.getemployeename2()<<';'<<"Yearly salary:"<<employee1.getmonthsalary()*12<<endl;
   cout<<"Employee 2:"<<employee2.getemployeename1()<<" "<<employee2.getemployeename2()<<';'<<"Yearly salary:"<<employee2.getmonthsalary()*12<<endl;
    cout<<endl<<endl;

   //Give each Employee a 10% raise
   cout<<"Increase employee's salaries by %10"<<endl;
   cout<<endl<<endl;
   employee1.setmonthsalary(employee1.getmonthsalary()*1.1);
   employee2.setmonthsalary(employee2.getmonthsalary()*1.1);
   //Output the first name, last name and salary of each Employee again
   cout<<"Employee 1:"<<employee1.getemployeename1()<<" "<<employee1.getemployeename2()<<';'<<"Yearly salary:"<<employee1.getmonthsalary()*12<<endl;
   cout<<"Employee 2:"<<employee2.getemployeename1()<<" "<<employee2.getemployeename2()<<';'<<"Yearly salary:"<<employee2.getmonthsalary()*12<<endl;

} // end main
