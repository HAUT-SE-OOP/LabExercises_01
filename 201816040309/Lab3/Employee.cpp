// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee( string first_name, string last_name,int salary_1 )
{
   setfirstname( first_name ); // initializes courseName
   setlastname( last_name);
   setsalary( salary_1 ); // initializes instructorName
} // end GradeBook constructor
/* Define a set function for the first name data member. */
void Employee::setfirstname(string first_name)
{
    firstname = first_name;
}
void Employee::setlastname(string last_name)
{
    lastname = last_name;
}
void Employee::setsalary(int salary_1)
{
    if(salary_1<=0)
    {
        salary =0;
    }
    else
    {
        salary = salary_1;
    }

}
/* Define a get function for the first name data member. */
string Employee::getfirstame()
{
    return firstname;
}
string Employee::getlastname()
{
    return lastname;
}
int Employee::getsalary()
{
    return salary;
}

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
