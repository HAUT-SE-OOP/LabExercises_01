// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{

    Employee account1("Bob","Jones",3000);
    Employee account2("susan","baker",4000);
    cout<<"Employee 1:"<<account1.getFirstname()<<account1.getLastname()<<"Yearly Salary:"<<account1.getMonthlySalary()*12<<endl;
    cout<<"Employee 2:"<<account2.getFirstname()<<account2.getLastname()<<"Yearly Salary:"<<account2.getMonthlySalary()*12<<endl;
    int num=account1.getMonthlySalary()*12*1.1;  //实现年薪的增长
    int mum=account2.getMonthlySalary()*12*1.1;   //实现年薪的增长
    cout<<"\n\n";
    cout<<"Increasing employee salaries by 10%"<<endl;
    cout<<"Employee 1:"<<account1.getFirstname()<<account1.getLastname()<<"Yearly Salary:"<<num<<endl;  //输出增加后的年薪
    cout<<"Employee 2:"<<account1.getFirstname()<<account1.getLastname()<<"Yearly Salary:"<<mum<<endl;   //输出增加后的年薪
   /* Create two Employee objects and assign them to Employee variables. */

   /* Output the first name, last name and salary for each Employee. */

   /* Give each Employee a 10% raise. */

   /* Output the first name, last name and salary of each Employee again. */
} // end main


