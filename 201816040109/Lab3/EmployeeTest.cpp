// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    Employee employee1("Bob","Jones", 2875);
    Employee employee2( "Susan","Baker", 3150);
    int MonthlySalary1=employee1.getmonthlySalqry();
    int MonthlySalary2=employee2.getmonthlySalqry();
    cout<<"Employee1:"<<employee1.getfirstName()<<" "<<employee1.getlastName()<<";Yearly Salary:"<<MonthlySalary1*12<<endl;
    cout<<"Employee2:"<<employee2.getfirstName()<<" "<<employee2.getlastName()<<";Yearly Salary:"<<MonthlySalary2*12<<endl;

    employee1.setmonthlySalary(MonthlySalary1*1.1);
    employee2.setmonthlySalary(MonthlySalary2*1.1);
    int MonthlySalary1_2=employee1.getmonthlySalqry();
    int MonthlySalary2_2=employee2.getmonthlySalqry();
    cout << "\nIncreasing employee salaries by 10% : " << endl;
    cout<<"Employee1:"<<employee1.getfirstName()<<employee1.getlastName()<<";Yearly Salary:"<<MonthlySalary1_2*12<<endl;
    cout<<"Employee2:"<<employee2.getfirstName()<<employee2.getlastName()<<";Yearly Salary:"<<MonthlySalary2_2*12<<endl;

   /* Create two Employee objects and assign them to Employee variables. */

   /* Output the first name, last name and salary for each Employee. */

   /* Give each Employee a 10% raise. */

   /* Output the first name, last name and salary of each Employee again. */
} // end main


