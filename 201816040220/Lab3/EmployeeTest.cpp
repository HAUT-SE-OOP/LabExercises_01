// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    int a=2875,b=3150;
    Employee employee1("Bob","Jones",a);

    Employee employee2("Susan","Baker",b);
   /* Create two Employee objects and assign them to Employee variables. */
    //cout<<"Employee1:"<<name<<" "<<xing<<";"<<"Yearly Salary "<<a<<endl;
    //cout<<"Employee2:"<<name1<<" "<<xing1<<";"<<"Yearly Salary "<<b<<endl;
    cout<<"Employee1:";
    employee1.displayMessage();
    cout<<endl;

    cout<<"Employee2:";
    employee2.displayMessage();
    cout<<endl;

   /* Output the first name, last name and salary for each Employee. */
    cout<<"\n";
    cout<<"Increasing employee salaries by 10%"<<endl;
    cout<<"\n";
   /* Give each Employee a 10% raise. */
    cout<<"Employee1:";
    employee1.setIncrease(a);
    employee1.displayMessage();
    cout<<endl;

    cout<<"Employee2:";
    employee2.setIncrease(b);
    employee2.displayMessage();
    cout<<endl;
   /* Output the first name, last name and salary of each Employee again. */
} // end main
