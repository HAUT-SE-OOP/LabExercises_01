// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include <string>
using namespace std; 

#include "Employee.h" // Employee class definition

	Employee::Employee(string firstname,string lastname,int Salary)/* Define the constructor. Assign each parameter value to the appropriate datamember. Write code that validates the value of salary to ensure that it isnot negative. */
	{
		setFirstname(firstname);
		setLastname(lastname);
		setMonthsalary(Salary);
	}
	void Employee::setFirstname(string Fname)/* Define a set function for the first name data member. */
	{
		fname=Fname;
	}
	string Employee::getFirstname()
	{
		return fname;
	}
	void Employee::setLastname(string Lname)/* Define a get function for the first name data member. */
	{
		lname=Lname;
	}
	string Employee::getLastname()
	{
		return lname;
	}
	void Employee::setMonthsalary(int money)/* Define a get function for the first name data member. */
	{
		if(money>=0)
		{
			salary=money;
		}
		else
		{
			salary=0;
		}
	}
	int Employee::getMonthsalary()
	{
		return salary;
	}
	void Employee::display()
	{
		cout <<getFirstname() << " "<<getLastname()<<"   " <<"\t"<<"Yearly Salary: "<< getMonthsalary()*12<<"\n"<<endl;
		
	}

	/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
