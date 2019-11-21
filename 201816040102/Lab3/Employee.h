// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std; 

// Employee class definition
class Employee 
{
public:
   Employee (string,string,int);/* Declare a constructor that has one parameter for each data member */
   void setFirstname(string);/* Declare a set method for the employee's first name */
   string getFirstname();/* Declare a get method for the employee's first name */
   void setLastname(string);/* Declare a set method for the employee's last name */
   string getLastname();/* Declare a get method for the employee's last name */
   void setMonthsalary(int);/* Declare a set method for the employee's monthly salary */
   int getMonthsalary();/* Declare a get method for the employee's monthly salary */
   void display();

private:
   string fname;/* Declare a string data member for the employee's first name */
   string lname;/* Declare a string data member for the employee's last name */
   int salary;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
