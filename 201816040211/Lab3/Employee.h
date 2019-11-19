// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
    Employee(string ,string ,int );
    void setFirstname(string firstname);  //function to set the first name
    string getFirstname( );
    void setLastname(string lastname);  //funcyion to set the last name
    string getLastname( );
    void setMonthlysalary(int monthlysalary); //function to set the monthly salary
    int getMonthlySalary( );
    void displayMessage();
   /* Declare a constructor that has one parameter for each data member */
   /* Declare a set method for the employee's first name */
   /* Declare a get method for the employee's first name */
   /* Declare a set method for the employee's last name */
   /* Declare a get method for the employee's last name */
   /* Declare a set method for the employee's monthly salary */
   /* Declare a get method for the employee's monthly salary */
private:
    string firstname;
    string lastname;
    int monthlysalary;  //date member
   /* Declare a string data member for the employee's first name */
   /* Declare a string data member for the employee's last name */
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
