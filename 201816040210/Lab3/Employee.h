// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
    Employee ( string,string,int);
   //constructor that has one parameter for each data member
   void setFirstName ( string );
   //function to set employee's first name
   string getFirstName ();
   //function to get employee's first name
   void setLastName ( string );
   //function to set employee's last name
   string getLastName ();
   //function to get employee's last name
   void setMonthSalary ( int );
   //function to set employee's monthly salary
   int getMonthSalary ();
   //function to get employee's monthly salary
private:
   string firstName;
   //Declare a string data member for the employee's first name
   string lastName;
   //Declare a string data member for the employee's last name
   int monthSalary;
   //Declare an int data member for the employee's monthly salary
}; // end class Employee
