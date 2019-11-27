// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "headers.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Employee::Employee(string frname,string laname,int mosalary)
   {
       setfirstname(frname);
       setlastname(laname);
       setmonthsalary(mosalary);
   }
/* Define a set function for the first name data member. */
    void Employee::setfirstname(string frname)
    {
        fname=frname;
    }
/* Define a get function for the first name data member. */
    string Employee::getfirstname()
    {
        return fname;
    }
/* Define a set function for the last name data member. */
    void Employee::setlastname(string laname)
    {
        lname=laname;
    }
/* Define a get function for the last name data member. */
    string Employee::getlastname()
    {
        return lname;
    }
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
    void Employee::setmonthsalary(int mosalay)
    {
        if(mosalay>=0)
           msalay=mosalay;
        else
           msalay=0;
    }
/* Define a get function for the monthly salary data member. */
    int Employee::getmonthsalary()
    {
        return msalay;
    }
/* Define a display function for the information data member. */
    void Employee::display()
    {
        cout<<"Employee"<<getfirstname()<<" "<<getlastname()<<";"<<"Year salary:"<<12*getmonthsalary()<<endl;
    }
    void Employee::increase()
    {
        cout<<"Employee"<<getfirstname()<<" "<<getlastname()<<";"<<"Year salary:"<<12*1.1*getmonthsalary()<<endl;
    }
