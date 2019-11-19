// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
    Employee(string,string,int);
   /* Declare a constructor that has one parameter for each data member */
   void setName(string);
   /* Declare a set method for the employee's first name */
   string getName();
   /* Declare a get method for the employee's first name */
   void setXing(string);
   /* Declare a set method for the employee's last name */
   string getXing();
   /* Declare a get method for the employee's last name */
   void setSalary(int);
   /* Declare a set method for the employee's monthly salary */
    int getSalary();
   /* Declare a get method for the employee's monthly salary */
   void setIncrease(int);
   int getIncrease();

   void displayMessage();
private:
   string employeeName;
   /* Declare a string data member for the employee's first name */
   string employeeXing;
   /* Declare a string data member for the employee's last name */
   int employeeSalary;
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
