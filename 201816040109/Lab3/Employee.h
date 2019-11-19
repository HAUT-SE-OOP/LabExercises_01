// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
    Employee(string first,string last,int salary);
   /* Declare a constructor that has one parameter for each data member */
    void setfirstName(string );
   /* Declare a set method for the employee's first name */
    string getfirstName();
   /* Declare a get method for the employee's first name */
    void setlastName(string );
   /* Declare a set method for the employee's last name */
    string getlastName();
   /* Declare a get method for the employee's last name */
    void setmonthlySalary(int);
   /* Declare a set method for the employee's monthly salary */
    int getmonthlySalqry();
   /* Declare a get method for the employee's monthly salary */
private:
    string firstname;
    string lastname;
    int monthlySalary;
   /* Declare a string data member for the employee's first name */
   /* Declare a string data member for the employee's last name */
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
