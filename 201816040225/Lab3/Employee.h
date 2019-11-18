// Lab 3: Employee.h
// Employee class definition.
#include <string> // program uses C++ standard string class
using namespace std;
// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
    Employee( string ,string ,int );
   /* Declare a set method for the employee's first name */
   void setEmployeefName( string );
   /* Declare a get method for the employee's first name */
   string getEmployeefName();
   /* Declare a set method for the employee's last name */
   void setEmployeelName( string );
   /* Declare a get method for the employee's last name */
   string getEmployeelName();
   /* Declare a set method for the employee's monthly salary */
   void setsalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getsalary();
   void finalsalary();
private:
   /* Declare a string data member for the employee's first name */
   string EmployeefName;
   /* Declare a string data member for the employee's last name */
     string EmployeelName;
   /* Declare an int data member for the employee's monthly salary */
   int salary;
}; // end class Employee
