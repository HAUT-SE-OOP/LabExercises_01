// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   Employee(string,string,int);
   void setfirstname(string);
   void setlastname(string);
   string getfirstame();
   string getlastname();
   void setsalary(int);
   int getsalary();
   void displaymessage();
   /* Declare a constructor that has one parameter for each data member */
   /* Declare a set method for the employee's first name */
   /* Declare a get method for the employee's first name */
   /* Declare a set method for the employee's last name */
   /* Declare a get method for the employee's last name */
   /* Declare a set method for the employee's monthly salary */
   /* Declare a get method for the employee's monthly salary */
private:
   /* Declare a string data member for the employee's first name */
   string firstname;
   string lastname;
   int salary;

   /* Declare a string data member for the employee's last name */
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
