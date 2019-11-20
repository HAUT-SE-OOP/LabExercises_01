// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 
  
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob","Jones",2875);
    Employee employee2("Susan","Baker",3150);/* Create two Employee objects and assign them to Employee variables. */
    cout<<"This is your employees:"<<endl<<endl;/* Output the first name, last name and salary for each Employee. */
    cout<<employee1.getEmployee_firstname()<<"  "<<employee1.getEmployee_lastname()<<"  "<<"Annual salary:"<<employee1.getEmployee_monthlysalary()*12<<endl<<endl;
    cout<<employee2.getEmployee_firstname()<<"  "<<employee2.getEmployee_lastname()<<"  "<<"Annual salary:"<<employee2.getEmployee_monthlysalary()*12<<endl<<endl;
    int salary1,salary2;
    salary1 = employee1.getEmployee_monthlysalary()*1.1;/* Give each Employee a 10% raise. */
    salary2 = employee2.getEmployee_monthlysalary()*1.1;
    employee1.setEmployee_monthlysalary(salary1);
    employee2.setEmployee_monthlysalary(salary2);
    /* Output the first name, last name and salary of each Employee again. */
    cout<<employee1.getEmployee_firstname()<<"  "<<employee1.getEmployee_lastname()<<"  "<<endl<<"The annual salary after increasing is: "<<employee1.getEmployee_monthlysalary()*12<<endl<<endl;
    cout<<employee2.getEmployee_firstname()<<"  "<<employee2.getEmployee_lastname()<<"  "<<endl<<"The annual salary after increasing is: "<<employee2.getEmployee_monthlysalary()*12<<endl<<endl;
    return 0;

   

   

   
} // end main

