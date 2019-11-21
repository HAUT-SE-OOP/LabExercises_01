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
    void setName(string );/* Declare a set method for the employee's first name */
    void setFamilyName(string); /* Declare a set method for the employee's last name */
    void setMonthSalary(int ); /* Declare a set method for the employee's monthly salary */
    void setRaiseMonthSalary(int);/* Declare a set method for the employee's monthly salary raise*/
    string getName()const;/* Declare a get method for the employee's first name */
    string getFamilyName()const; /* Declare a get method for the employee's last name */
    int getMonthSalary()const;/* Declare a get method for the employee's monthly salary */
    int getYearlySalary()const;/* Declare a get method for the employee's yearly salary */
    void displayMessage()const;/*output message*/
private:
    string name; /* Declare a string data member for the employee's first name */
    string familyname;/* Declare a string data member for the employee's last name */
    int monthsalary; /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
