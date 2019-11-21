// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   /* Declare a set method for the employee's first name */
   explicit Employee(string, string, int);
   void setName1(string);
   string getName1();
   void setName2(string  );
   string getName2();
   void setSalary(int  );
   int getSalary();
   /* Declare a get method for the employee's first name */
   /* Declare a set method for the employee's last name */
   /* Declare a get method for the employee's last name */
   /* Declare a set method for the employee's monthly salary */
   /* Declare a get method for the employee's monthly salary */
private:
   /* Declare a string data member for the employee's first name */
   string name1;
   /* Declare a string data member for the employee's last name */
   string name2;
   /* Declare an int data member for the employee's monthly salary */
   int salary;
}; // end class Employee
