// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string ,string,int);
   /* Declare a set method for the employee's first name */
   void setEmployeeName(string);
   /* Declare a get method for the employee's first name */
   string getEmployeeName();
   /* Declare a set method for the employee's last name */
   void setEmployeeSurname(string);
   /* Declare a get method for the employee's last name */
   string getEmployeeSurname();
   /* Declare a set method for the employee's monthly salary */
   void setEmployeeIncome(int);
   /* Declare a get method for the employee's monthly salary */
   int getEmployeeIncome();
private:
   /* Declare a string data member for the employee's first name */
   string employeeName;
   /* Declare a string data member for the employee's last name */
   string employeeSurname;
   /* Declare an int data member for the employee's monthly salary */
   int employeeIncome;
}; // end class Employee
