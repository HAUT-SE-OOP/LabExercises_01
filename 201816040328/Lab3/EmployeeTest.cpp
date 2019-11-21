// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Emloyee emloyee1("Bob" ,"Jons",34500);
    Emloyee emloyee2("SuSan","Baker" ,37800);

   /* Create two Employee objects and assign them to Employee variables. */
   cout<<"emloyee1:"<<emloyee1.getname() <<emloyee1.getlastname()<<"year salary"<<emloyee1.getsalary()<<endl;
   cout<<"emloyee2:"<<emloyee2.getname() <<emloyee2.getlastname()<<"year salary"<<emloyee2.getsalary()<<endl;
   /* Output the first name, last name and salary for each Employee. */
    cout<<"increasing employee salary by 10%"<<endl;

   /* Give each Employee a 10% raise. */
    cout<<"emloyee1:"<<emloyee1.getname() <<emloyee1.getlastname()<<"year salary"<<1.1*emloyee1.getsalary()<<endl;
   cout<<"emloyee2:"<<emloyee2.getname() <<emloyee2.getlastname()<<"year salary"<<1.1*emloyee2.getsalary()<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main


