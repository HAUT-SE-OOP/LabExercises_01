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
   void setFirstName(string );
   /* Declare a get method for the employee's first name */
   string getFirstName()const;
   /* Declare a set method for the employee's last name */
   void setLastName(string);
   /* Declare a get method for the employee's last name */
   string getLastName()const;
   /* Declare a set method for the employee's monthly salary */
   void setMonthlySalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getSalary()const;
   void displayInfo()const;
   void changeSalary();
   int getMonthlySalary()const;
private:
   /* Declare a string data member for the employee's first name */
   string first_name;
   /* Declare a string data member for the employee's last name */
   string last_name;
   /* Declare an int data member for the employee's monthly salary */
   int monthly_salary;
}; // end class Employee
