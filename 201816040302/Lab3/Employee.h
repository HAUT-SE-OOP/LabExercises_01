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
   void setfristname(string);
   /* Declare a set method for the employee's first name */
   string getfristname();
   /* Declare a get method for the employee's first name */
   void setlastname(string);
   /* Declare a set method for the employee's last name */
   string getlastname();
   /* Declare a get method for the employee's last name */
   void setsalary(int);
   /* Declare a set method for the employee's monthly salary */
   int getsalary();
   /* Declare a get method for the employee's monthly salary */
   void func();
private:
    string fristname;
   /* Declare a string data member for the employee's first name */
   string lastname;
   /* Declare a string data member for the employee's last name */
   int salary;
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
