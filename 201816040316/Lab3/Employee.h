// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std; 

// Employee class definition
class Employee 
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string firstname, string lastame, double mmonthlysalary)
   /* Declare a set method for the employee's first name */
   void setEmployeefirstname(string);
   /* Declare a get method for the employee's first name */
   string get1Employeefirstname();
   /* Declare a set method for the employee's last name */
   void setEmployeelastname(string);
   /* Declare a get method for the employee's last name */
   string get1Employeelastname();
   /* Declare a set method for the employee's monthly salary */
   void setEmployeemonthlysalary( double);
   /* Declare a get method for the employee's monthly salary */
   string get1Employeemonthlysalary();
private:
   /* Declare a string data member for the employee's first name */
   string firstname;
   /* Declare a string data member for the employee's last name */
   string lastname;
   /* Declare an int data member for the employee's monthly salary */
   double monthlysalary;
}; // end class Employee
