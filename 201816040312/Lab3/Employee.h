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
   void setlastname(string);
   /* Declare a get method for the employee's first name */
   string getlastname();
   /* Declare a set method for the employee's last name */
   void setfirstname(string);
   /* Declare a get method for the employee's last name */
   string getfirstname();
   /* Declare a set method for the employee's monthly salary */
   void setmonthlysalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getmonthlysalary();
private:
   /* Declare a string data member for the employee's first name */
   string lastname;
   /* Declare a string data member for the employee's last name */
   string firstname;
   /* Declare an int data member for the employee's monthly salary */
   int monthlysalary;
}; // end class Employee
