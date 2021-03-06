#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   Employee(string,string,int);/* Declare a constructor that has one parameter for each data member */
   void setFirstName(string);/* Declare a set method for the employee's first name */
   string getFirstName()const;/* Declare a get method for the employee's first name */
   void setLastName(string);/* Declare a set method for the employee's last name */
   string getLastName()const;/* Declare a get method for the employee's last name */
   void setMonthlySalary(int);/* Declare a set method for the employee's monthly salary */
   int getMonthlySalary()const;/* Declare a get method for the employee's monthly salary */
private:
   string FirstName;/* Declare a string data member for the employee's first name */
   string LastName;/* Declare a string data member for the employee's last name */
   int MonthlySalary;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
