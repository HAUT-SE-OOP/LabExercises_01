// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   Employee( string ,string , int );//define the employee
   /* Declare a constructor that has one parameter for each data member */
   void setEmployeeFName( string );
   /* Declare a set method for the employee's first name */
   string getEmployeeFName() ;
   /* Declare a get method for the employee's first name */
   void setEmployeeLName( string );
   /* Declare a set method for the employee's last name */
   string getEmployeeLName() ;
   /* Declare a get method for the employee's last name */
   void setEmployeeSalary( int );
   /* Declare a set method for the employee's monthly salary */
   int getEmployeeSalary();
   /* Declare a get method for the employee's monthly salary */
   void displayMessage();//display the massage of employee
private:
   string EmployeeFName ;
   /* Declare a string data member for the employee's first name */
   string EmployeeLName ;
   /* Declare a string data member for the employee's last name */
   int EmployeeSalary ;
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
