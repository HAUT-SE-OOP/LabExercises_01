// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string name,string firstname,int salary);
   /* Declare a set method for the employee's first name */
   void setname(string name);
   /* Declare a get method for the employee's first name */
   string getname();
   /* Declare a set method for the employee's last name */
   void setfirstname(string firstname);
   /* Declare a get method for the employee's last name */
   string getfirstname();
   /* Declare a set method for the employee's monthly salary */
   void setsalary(int salary);
   /* Declare a get method for the employee's monthly salary */
   int getsalary();
   int salarychage(float data);
private:
   /* Declare a string data member for the employee's first name */
   string namedata;
   /* Declare a string data member for the employee's last name */
   string firstnamedata;
   /* Declare an int data member for the employee's monthly salary */
   int salarydata;
}; // end class Employee
