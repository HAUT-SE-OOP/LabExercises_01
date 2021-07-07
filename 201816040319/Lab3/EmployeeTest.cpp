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
    double salary1;

    string Firstname2;
    string Lastname2;
    double salary2;

   cout <<"Firstname1: ";
   cin  >>Firstname1;
   cout <<"Lastname1: ";
   cin  >>Lastname1;
   cout <<"monthlysalary1: ";
   cin  >>salary1;

   Employee employee1(Firstname1,Lastname1,salary1);
   employee1.setEmployeefirstname(Firstname1);
   employee1.setEmployeelastname(Lastname1);
   employee1.setEmployeemonthlysalary(salary1);

   Employee employee2(Firstname2,Lastname2,salary2);
   employee2.setEmployeefirstname(Firstname2);
   employee2.setEmployeelastname(Lastname2);
   employee2.setEmployeemonthlysalary(salary2);

   cout <<"Firstname2: ";
   cin  >>Firstname2;
   cout <<"Lastname2: ";
   cin  >>Lastname2;
   cout <<"monthlysalary2: ";
   cin  >>salary2;


   cout <<"Employee 1 "<<employee1.getEmployeefirstname()<<"      "<<employee1.getEmployeelastname()<<"      "<<employee1.getEmployeemonthlysalary()<<endl;
   cout <<"Employee 2 "<<employee2.getEmployeefirstname()<<"      "<<employee2.getEmployeelastname()<<"      "<<employee2.getEmployeemonthlysalary()<<endl;

   cout <<"employee1:"<<employee1.getEmployeefirstname()<<"        "<<employee1.getEmployeelastname()<<"      "<<employee1.getEmployeemonthlysalary()<<endl;
   cout <<"employee2:"<<employee2.getEmployeefirstname()<<"        "<<employee2.getEmployeelastname()<<"      "<<employee2.getEmployeemonthlysalary()<<endl;

   cout <<"Increasing employee salaries by 10%:"<<endl;

   double a;
   a=0.1;
   employee1.setEmployeemonthlysalary(salary1*(a+1.0));
   employee2.setEmployeemonthlysalary(salary2*(a+1.0));

   cout <<"employee1"<<"      "<<employee1.getEmployeefirstname()<<"        "<<employee1.getEmployeelastname()<<"       "<<employee1.getEmployeemonthlysalary()<<endl;
   cout <<"employee2"<<"      "<<employee2.getEmployeefirstname()<<"        "<<employee2.getEmployeelastname()<<"       "<<employee2.getEmployeemonthlysalary()<<endl;



  return 0;

} // end main


