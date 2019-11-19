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
   void setfirstname(string);
   /* Declare a get method for the employee's first name */
   string getfirstname();
   /* Declare a set method for the employee's last name */
   void setlastname(string);
   /* Declare a get method for the employee's last name */
    string getlastname();
   /* Declare a set method for the employee's monthly salary */
   void setsalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getsalary();
private:
   /* Declare a string data member for the employee's first name */
   string firstname;
   string lastname;
   int salary;
   /* Declare a string data member for the employee's last name */
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
