// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string, string, int);

   /* Declare a set method for the employee's first name */
   void setname( string );
   /* Declare a get method for the employee's first name */
   string getname();
   /* Declare a set method for the employee's last name */
   void setfamilyname( string );
   /* Declare a get method for the employee's last name */
   string getfamilyname();
   /* Declare a set method for the employee's monthly salary */
   void setsalary( int );
   /* Declare a get method for the employee's monthly salary */
   int getsalary();
private:
   /* Declare a string data member for the employee's first name */
   /* Declare a string data member for the employee's last name */
   /* Declare an int data member for the employee's monthly salary */
   string name;
   string familyname;
   int salary;
}; // end class Employee
