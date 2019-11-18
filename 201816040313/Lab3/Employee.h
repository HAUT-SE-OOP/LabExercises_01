// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   Employee(string,string,int);/* Declare a constructor that has one parameter for each data member */
   void setemployeename( string );/* Declare a set method for the employee's first name */
   string getemployeename();/* Declare a get method for the employee's first name */
   void setemoloyeesurname( string );/* Declare a set method for the employee's last name */
   string getemployeesurname();/* Declare a get method for the employee's last name */
   void setemployeesalary( int );/* Declare a set method for the employee's monthly salary */
   int  getemployeesalary();/* Declare a get method for the employee's monthly salary */
private:
   string employeename;/* Declare a string data member for the employee's first name */
   string employeesurname;/* Declare a string data member for the employee's last name */
   int employeesalary;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee

