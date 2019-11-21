// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std; 

// Employee class definition
class Employee 
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string,string,int);
   /* Declare a set method for the employee's first name */
   void setEmployee_firstname(string);
   /* Declare a get method for the employee's first name */
   string getEmployee_firstname();
   /* Declare a set method for the employee's last name */
   void setEmployee_lastname(string);
   /* Declare a get method for the employee's last name */
   string getEmployee_lastname();
   /* Declare a set method for the employee's monthly salary */
   void setEmployee_monthlysalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getEmployee_monthlysalary();
private:
   /* Declare a string data member for the employee's first name */
   string Employee_firstname;
   /* Declare a string data member for the employee's last name */
   string Employee_lastname;
   /* Declare an int data member for the employee's monthly salary */
   int    Employee_monthlysalary;
}; // end class Employee
