// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string , string , int);
   /* Declare a set method for the employee's first name */
   void setFristName(string );
   /* Declare a get method for the employee's first name */
   string getFristName();
   /* Declare a set method for the employee's last name */
   void setLastName(string );
   /* Declare a get method for the employee's last name */
   string getLastName();
   /* Declare a set method for the employee's monthly salary */
   void setSalary(int );
   /* Declare a get method for the employee's monthly salary */
   int  getSalary();
   /*display*/
    int YearthlySalary();
   int Upsalary();
private:
   /* Declare a string data member for the employee's first name */
   string FristName ;
   /* Declare a string data member for the employee's last name */
   string LastName ;
   /* Declare an int data member for the employee's monthly salary */
   int Salary , yearthlysalary , upsalary ,upyearthlysalary;

}; // end class Employee
