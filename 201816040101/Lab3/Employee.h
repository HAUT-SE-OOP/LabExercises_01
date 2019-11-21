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
   void setFirstname(string);
   /* Declare a get method for the employee's first name */
   string getFirstname();
   /* Declare a set method for the employee's last name */
   void setLastname(string);
   /* Declare a get method for the employee's last name */
   string getLastname();
   /* Declare a set method for the employee's monthly salary */
   void setIncome(int);
   /* Declare a get method for the employee's monthly salary */
   int getIncome();
private:
   /* Declare a string data member for the employee's first name */
   string firstname;
   /* Declare a string data member for the employee's last name */
   string lastname;
   /* Declare an int data member for the employee's monthly salary */
   int income;
}; // end class Employee
