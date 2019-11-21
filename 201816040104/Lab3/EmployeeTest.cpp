// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    string Firstname1;
    string Lastname1;
    double Monthlysalary1;

    string Firstname2;
    string Lastname2;
    double Monthlysalary2;
    double a,b;

   cout<<"Firstname1 is:"<<endl;
   cin>>Firstname1;
   cout<<"Lastname1 is:"<<endl;
   cin>>Lastname1;
   cout<<"Monthlysalary1 is:"<<endl;
   cin>>Monthlysalary1;

   cin>>Firstname2;
   cout<<"Lastname2 is:"<<endl;
   cin>>Lastname2;
   cout<<"Monthlysalary2 is:"<<endl;
   cin>>Monthlysalary2;


        Employee employee1(Firstname1,Lastname1,Monthlysalary1);

        employee1.setEmployeefirstname(Firstname1);
        employee1.setEmployeelastname(Lastname1);
        employee1.setEmployeemonthlysalary(Monthlysalary1);
        cout<<"Firstname2 is:"<<endl;

        Employee employee2(Firstname2,Lastname2,Monthlysalary2);

        employee2.setEmployeefirstname(Firstname2);
        employee2.setEmployeelastname(Lastname2);
        employee2.setEmployeemonthlysalary(Monthlysalary2);

   a=employee1.getEmployeemonthlysalary();
   b=employee2.getEmployeemonthlysalary();

   a=1.1*a;
   b=1.1*b;
   cout<<"Increasing employee slaries by 10%"<<endl;
   cout<<employee1.getEmployeefirstname() << employee1.getEmployeelastname()<<"Yearly salary is:"<<a<<endl;
   cout<<employee2.getEmployeefirstname()<<employee2.getEmployeelastname()<<"Yearly salary is:"<<b<<endl;
} // end main
