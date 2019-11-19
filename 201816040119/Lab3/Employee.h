// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string,string);
   /* Declare a set method for the employee's first name */
   void setfirstname(string);
   /* Declare a get method for the employee's first name */
   string getfirstname();
   /* Declare a set method for the employee's last name */
   void setlastname(string);
   /* Declare a get method for the employee's last name */
   string getlastname();
   /* Declare a set method for the employee's monthly salary */
   void Increasesalary();
   /* Declare a get method for the employee's monthly salary */
   void setsalary(int);
   /* Declare a get method for the employee's salary */
   int getsalary();
   //output apartmessage
   void displaymessage1();
   //output allmessage
   void displaymessage2();
private:
   /* Declare a string data member for the employee's first name */
   string firstname;
   /* Declare a string data member for the employee's last name */
   string lastname;
   /* Declare an int data member for the employee's monthly salary */
   int salary;
}; // end class Employee
