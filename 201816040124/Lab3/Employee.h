// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   Employee(string name,string name2,int num);// constructor initializes first name,last name and monthly salary
   /* Declare a constructor that has one parameter for each data member */
   void setFirstName(string);// function to set the first name
   /* Declare a set method for the employee's first name */
   string getFirstName();// function to retrieve the first name
   /* Declare a get method for the employee's first name */
   void setLastName(string);// function to set the last name
   /* Declare a set method for the employee's last name */
   string getLastName();// function to retrieve the last name
   /* Declare a get method for the employee's last name */
   void setMonthlySalary(int);// function to set the monthly salary
   /* Declare a set method for the employee's monthly salary */
   int getMonthlySalary();// function to retrieve the monthly salary
   /* Declare a get method for the employee's monthly salary */
private:
   string firstName;/* Declare a string data member for the employee's first name */
   string lastName;/* Declare a string data member for the employee's last name */
   int monthlySalary;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
