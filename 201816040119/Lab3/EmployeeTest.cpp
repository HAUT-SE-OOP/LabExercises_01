// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
    Employee object1("Bob","jones");//set message
    Employee object2("Susan Baker","Baker");//set message
    int sala;
   /* Output the first name, last name and salary for each Employee. */
   //object1.Employee
   object1.displaymessage1();//output message
    cin>>sala;
   object1.setsalary(sala);

    //object2;
    object2.displaymessage1();//output message
    cin>>sala;
    object2.setsalary(sala);
   /* Give each Employee a 10% raise. */
    cout<<"Increasing employee salaries by 10%"<<endl;
    object1.Increasesalary();//Increasesalary
    object2.Increasesalary();//Increasesalary
   /* Output the first name, last name and salary of each Employee again. */
    object1.displaymessage2();//output message
    object2.displaymessage2();//output message
} // end main


