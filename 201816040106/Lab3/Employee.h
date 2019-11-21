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
   void setEmployee1(string);
   /* Declare a get method for the employee's first name */
   string getEmployee1();
   /* Declare a set method for the employee's last name */
   void setEmployee2(string);
   /* Declare a get method for the employee's last name */
   string getEmployee2();
   /* Declare a set method for the employee's monthly salary */
   void setSalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getSalary();
private:
	/*the employee's first name*/
	string employee1;
	/*the employee's last name */
	string employee2;
   	/*the employee's monthly salary */
   	int salary;
}; // end class Employee
