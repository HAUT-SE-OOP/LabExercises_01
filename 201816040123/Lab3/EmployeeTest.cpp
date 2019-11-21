// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include <iomanip>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   Employee a1("Kirigaya","Kazutosao",2875);
   Employee a2("Sao","Kirito",3150);/* Create two Employee objects and assign them to Employee variables. */
   cout<<"Employee 1  :  "<<right<<setw(10)<<a1.getFirstName()<<" "<<left<<setw(12)<<a1.getLastName()<<";  "<<"Yearly Salary:  "<<(12*a1.getMonthlySalary())<<endl;
   cout<<"Employee 2  :  "<<right<<setw(10)<<a2.getFirstName()<<" "<<left<<setw(12)<<a2.getLastName()<<";  "<<"Yearly Salary:  "<<(12*a2.getMonthlySalary())<<endl;

   cout<<endl;/* Output the first name, last name and salary for each Employee. */

   cout<<"Increasing employee salaries by 10%"<<endl<<endl;
   a1.setMonthlySalary(a1.getMonthlySalary()/10+a1.getMonthlySalary());
   a2.setMonthlySalary(a2.getMonthlySalary()/10+a2.getMonthlySalary());/* Give each Employee a 10% raise. */
   cout<<"Employee 1  :  "<<right<<setw(10)<<a1.getFirstName()<<" "<<left<<setw(12)<<a1.getLastName()<<";  "<<"Yearly Salary:  "<<(12*a1.getMonthlySalary())<<endl;
     "<<"Yearly Salary:  "<<(12*a2.getMonthlySalary())<<endl;
   cout<<endl;/* Output the first name, last name and salary of each Employee again. */
} // end main
