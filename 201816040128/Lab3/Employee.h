// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
	Employee(string, string, int);
   /* Declare a set method for the employee's first name */
	void setEmplpyeeFirst(string );
   /* Declare a get method for the employee's first name */
	string getEmplpyeeFirst();
   /* Declare a set method for the employee's last name */
	void setEmplpyeeLast(string );
   /* Declare a get method for the employee's last name */
	string getEmplpyeeLast();
	/* Declare a set method for the employee's monthly salary */
	void setEmplpyeesalary(int );
	/* Declare a get method for the employee's monthly salary */
	int getEmplpyeesalary();
private:
   /* Declare a string data member for the employee's first name */
	string firstName;
   /* Declare a string data member for the employee's last name */
	string lastName;
   /* Declare an int data member for the employee's monthly salary */
	int salary;
}; // end class Employee
