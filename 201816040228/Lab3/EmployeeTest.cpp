// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include <string>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. 创建两个Employee对象并将它们分配给Elployee变量*/


   int salary1;
   int salary2;

   /* Output the first name, last name and salary for each Employee. */
   Employee employee1( "Bob " ,"Jones;", 1);//create a Empiyee object; pass employee1 a firstname lastname and salary1

   Employee employee2( "Sushan ","Baker; ", 1);//create a Empiyee object; pass employee1 a firstname lastname and salary2

   cout << "Employee 1: " << employee1.getFirstName() << employee1.getLastName();

   cout<< "Yearly Salary: " ;
   cin >> salary1;


   cout << "Employee 2: " << employee2.getFirstName() << employee2.getLastName();
   cout << "Yearly Salary: ";
    cin >> salary2;

   employee2.setSalary(salary2);

   /* Give each Employee a 10% raise.加薪 */
   cout <<"Increasing each employee salaries by 10% "<<endl;
   employee1.setSalary(salary1);
   cout << "Employee 1: " << employee1.getFirstName() << employee1.getLastName() << "Yearly Salary: " << employee1.getSalary() << endl;
   //Output the first name, last name and salary of Employee1
   employee2.setSalary(salary2);
   cout << "Employee 2: " << employee2.getFirstName() << employee2.getLastName() << "Yearly Salary: " << employee2.getSalary() << endl;
   //Output the first name, last name and salary of Employee2
   /* Output the first name, last name and salary of each Employee again. */
   return 0;
} // end main



