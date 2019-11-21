#include <iostream>

using namespace std;



#include "Employee.h" // include definition of class Employee



// function main begins program execution

int main()

{

   /* Create two Employee objects and assign them to Employee variables. */

   Employee Employee1("Bob","Jones");

   Employee Employee2("Susan","Baker");



   Employee1.setSalary(34500);

   Employee2.setSalary(37800);

   /* Output the first name, last name and salary for each Employee. */

   cout<<"Employee 1:"<<Employee1.getFastName()<<Employee1.getLastName()<<"Salary :"<<Employee1.getSalary()<<endl;

   cout<<"Employee 2:"<<Employee2.getFastName()<<Employee2.getLastName()<<"Salary :"<<Employee2.getSalary()<<endl;



   /* Give each Employee a 10% raise. */

   cout<<"Increasing employee salaries by 10%"<<endl;



   /* Output the first name, last name and salary of each Employee again. */

   cout<<"Employee 1:"<<Employee1.getFastName()<<Employee1.getLastName()<<"Salary :"<<Employee1.getSalary()*1.1<<endl;

   cout<<"Employee 2:"<<Employee2.getFastName()<<Employee2.getLastName()<<"Salary :"<<Employee2.getSalary()*1.1<<endl;

   return 0;

} // end main

