#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   explicit Employee(string ,string ,int );
   /* Declare a set method for the employee's first name */
   void setfirstname(string );
   /* Declare a get method for the employee's first name */
   string getfirstname();
   /* Declare a set method for the employee's last name */
   void setlastname(string);
   /* Declare a get method for the employee's last name */
   string getlastname();
   /* Declare a set method for the employee's monthly salary */
   void setmonthsalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getmonthsalary();
   /* Declare a display method for the employee's information */
   void display();
   /* Declare a display method for the employee's increasing salary */
   void increase();
private:
   /* Declare a string data member for the employee's first name */
   string fname;
   /* Declare a string data member for the employee's last name */
   string lname;
   /* Declare an int data member for the employee's monthly salary */
   int msalay;
}; // end class Employee


#endif // HEADERS_H_INCLUDED
