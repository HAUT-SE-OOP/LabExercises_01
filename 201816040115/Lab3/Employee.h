// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   explicit Employee(string firName,string lasName,int monSalary);
   /* Declare a set method for the employee's first name */
   void setFirstName(string firName);
   /* Declare a get method for the employee's first name */
   string getFirstName() const;
   /* Declare a set method for the employee's last name */
   void setLastName(string lasName);
   /* Declare a get method for the employee's last name */
   string getLastName() const;
   /* Declare a set method for the employee's monthly salary */
   void setMonthlySalary(int monSalary);
   /* Declare a get method for the employee's monthly salary */
   int getMonthlySalary() const;
private:
   /* Declare a string data member for the employee's first name */
   string firstName;
   /* Declare a string data member for the employee's last name */
   string lastName;
   /* Declare an int data member for the employee's monthly salary */
   int monthlySalary;
}; // end class Employee
