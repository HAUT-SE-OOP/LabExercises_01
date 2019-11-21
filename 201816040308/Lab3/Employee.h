// Lab 3: Employee.h
// Employee class definition.
#include <bits/stdc++.h>
#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   Employee(string,string,int);/* Declare a constructor that has one parameter for each data member */
   void setname1(string);/* Declare a set method for the employee's first name */
   string getname1();/* Declare a get method for the employee's first name */
   void setname2(string);/* Declare a set method for the employee's last name */
   string getname2();/* Declare a get method for the employee's last name */
   void setsalary(int);/* Declare a set method for the employee's monthly salary */
   int getsalary();/* Declare a get method for the employee's monthly salary */
private:
   string name1;/* Declare a string data member for the employee's first name */
   string name2;/* Declare a string data member for the employee's last name */
   int salary;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
