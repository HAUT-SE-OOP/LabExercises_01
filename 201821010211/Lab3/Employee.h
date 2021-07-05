// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   explicit Employee(string,string,int)/* Declare a constructor that has one parameter for each data member */
   void setFirstName(string);/* Declare a set method for the employee's first name */
   string getFirsttName()const;/* Declare a get method for the employee's first name */
   void setLastName(string);/* Declare a set method for the employee's last name */
   string getLastName()const;/* Declare a get method for the employee's last name */
   void setMonthSalary(int);/* Declare a set method for the employee's monthly salary */
   int getMonthSalary()const;/* Declare a get method for the employee's monthly salary */
private:
   string firstName/* Declare a string data member for the employee's first name */
   string lastName/* Declare a string data member for the employee's last name */
   int monthSalary/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
