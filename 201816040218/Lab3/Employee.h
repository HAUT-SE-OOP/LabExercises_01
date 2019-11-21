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
   void setEmployeeFirstName(string);
   /* Declare a get method for the employee's first name */
   string getEmployeeFirstName();
   /* Declare a set method for the employee's last name */
   void setEmployeeLastName(string);
   /* Declare a get method for the employee's last name */
   string getEmployeeLastName();
   /* Declare a set method for the employee's monthly salary */
   void setEmployeeMonthlySalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getEmployeeMonthlySalary();
   void displayMessage();
   int Increasingemployeesalary();
private:
   /* Declare a string data member for the employee's first name */
   string employeeFirstName;
   /* Declare a string data member for the employee's last name */
   string employeeLastName;
   /* Declare an int data member for the employee's monthly salary */
   int employeeMonthlySalary;
}; // end class Employee
