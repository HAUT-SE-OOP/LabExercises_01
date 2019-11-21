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
   int getSalary();
   void setSalary(int);
   /* Declare a get method for the employee's monthly salary */
   void addSalary();
private:
   /* Declare a string data member for the employee's first name */
   string first_name;
   /* Declare a string data member for the employee's last name */
   string last_name;
   /* Declare an int data member for the employee's monthly salary */
   int Salary;
}; // end class Employee
