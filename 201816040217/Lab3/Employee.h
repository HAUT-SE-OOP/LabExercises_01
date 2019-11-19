// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee ( string ,string ,int);
   /* Declare a set method for the employee's first name */
   void setXing( string );
   /* Declare a get method for the employee's first name */
   string getXing();
   /* Declare a set method for the employee's last name */
   void setMing( string );
   /* Declare a get method for the employee's last name */
   string getMing();
   /* Declare a set method for the employee's monthly salary */
   void setMoney( int );
   /* Declare a get method for the employee's monthly salary */
   int getMoney();
   void upMoney();
private:
   string ming;/* Declare a string data member for the employee's first name */
   string xing;/* Declare a string data member for the employee's last name */
   int money;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
