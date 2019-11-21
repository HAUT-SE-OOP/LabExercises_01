// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee member1("Bob", "Jones", 34500);
   Employee member2("Susan", "Baker", 37800);
   /* Output the first name, last name and salary for each Employee. */
   cout<<"member1:"<<member1.getEmployeefName()<<" "<<member1.getEmployeelName()<<"   "<<"monthly salary is: "<<member1.getsalary()<<endl;
   cout<<"member2:"<<member2.getEmployeefName()<<" "<<member2.getEmployeelName()<<"   "<<"monthly salary is: "<<member2.getsalary()<<endl;
   /* Give each Employee a 10% raise. */
    member1.finalsalary();
    member2.finalsalary();
    cout << "\nIncreasing employee salaries by 10%\n" << endl;
   /* Output the first name, last name and salary of each Employee again. */
    cout<<"member1:"<<member1.getEmployeefName()<<" "<<member1.getEmployeelName()<<"   "<<"monthly salary is: "<<member1.getsalary()<<endl;
    cout<<"member2:"<<member2.getEmployeefName()<<" "<<member2.getEmployeelName()<<"   "<<"monthly salary is: "<<member2.getsalary()<<endl;
} // end main


