// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee1("MA","HUAN",2500);
   Employee employee2("LI","MOU",3210);
   cout<<"Employee 1 :"<<employee1.getfirstname()<<" "<<employee1.getlastname();
   cout<<" yearly salary : "<<employee1.getmoney()<<endl;
   cout<<"Employee 2 :"<<employee2.getfirstname()<<" "<<employee2.getlastname();
   cout<<" yearly salary : "<<employee2.getmoney()<<endl;
   puts("");
   puts("Increasing employee salaries by 10%");
   employee1.changmoney();
   employee2.changmoney();
    cout<<"Employee 1 :"<<employee1.getfirstname()<<" "<<employee1.getlastname();
   cout<<" yearly salary : "<<employee1.getmoney()<<endl;
      cout<<"Employee 2 :"<<employee2.getfirstname()<<" "<<employee2.getlastname();
   cout<<" yearly salary : "<<employee2.getmoney()<<endl;
   /* Output the first name, last name and salary for each Employee. */

   /* Give each Employee a 10% raise. */

   /* Output the first name, last name and salary of each Employee again. */
} // end main


