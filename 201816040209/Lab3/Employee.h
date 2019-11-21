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
   void setFirstName(string);
   /* Declare a get method for the employee's first name */
   string getFirstName();
   /* Declare a set method for the employee's last name */
   void setLastName(string);
   /* Declare a get method for the employee's last name */
   string getLastname();
   /* Declare a set method for the employee's monthly salary */
   void setYearSalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getYearSalary();
   /* Give each Employee a 10% raise. */
   void setRaiseSalary();

private:
   /* Declare a string data member for the employee's first name */
   string firstname;
   /* Declare a string data member for the employee's last name */
   string lastname;
   /* Declare an int data member for the employee's monthly salary */
   int yearsalary;
}; // end class Employee
