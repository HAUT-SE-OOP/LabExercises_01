// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h"
Employee :: Employee (string name , int salary)
{
    setEmployee(name);
    setSalary(salary);
}
void Employee::setEmployee(string name)
{
    employeename=name;
}
string  Employee :: getEmployee()
    {
        return employeename;
    }
    void Employee :: setSalary(int salary)
    {
        employeesalary=salary;
    }
    int Employee :: getSalary()
    {
        return employeesalary;
    }
    void Employee :: increase(int number)
    {
        employeesalary=employeesalary*1.1;
    }
    void Employee :: display()
    {
        cout<<"Employee 1:"<<getEmployee()<<"; Yearly Salary: "<<getSalary()<<endl;
    }
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

/* Define a set function for the first name data member. */

/* Define a get function for the first name data member. */

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
