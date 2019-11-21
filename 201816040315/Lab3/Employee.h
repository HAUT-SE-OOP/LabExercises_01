// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee( string ,string, int);//
   /* Declare a set method for the employee's first name */
   void setFirstName( string );//function to set first name
   /* Declare a get method for the employee's first name */
   string getFirstName();//function to retrieve first name
   /* Declare a set method for the employee's last name */
   void setLastName( string );//function to set last name
   /* Declare a get method for the employee's last name */
   string getLastName();//function to retrieve last name
   /* Declare a set method for the employee's monthly salary */
   void setSalary( int );//function to set salary
   /* Declare a get method for the employee's monthly salary */
   int getSalary();//function to retrieve the salary
private:
   /* Declare a string data member for the employee's first name */
   string firstName;//first name for this Employee
   /* Declare a string data member for the employee's last name */
   string lastName;//last Name for this Employee
   /* Declare an int data member for the employee's monthly salary */
   int salary;//salary for this Employee
}; // end class Employee
