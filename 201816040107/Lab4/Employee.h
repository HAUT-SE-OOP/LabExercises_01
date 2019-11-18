// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std; 

// Employee class definition
class Employee 
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string,string,int);//声明构造函数； 
   /* Declare a set method for the employee's first name */
   void setname1(string name);
   /* Declare a get method for the employee's first name */
   string getname1();
   /* Declare a set method for the employee's last name */
   void setname2(string xing1);
   /* Declare a get method for the employee's last name */
   string getname2();
   /* Declare a set method for the employee's monthly salary */
   void setincome(int income1);
   /* Declare a get method for the employee's monthly salary */
   int getincome();
private:
   /* Declare a string data member for the employee's first name */
   string name;
   /* Declare a string data member for the employee's last name */
   string xing;
   /* Declare an int data member for the employee's monthly salary */
   int income;
}; // end class Employee
