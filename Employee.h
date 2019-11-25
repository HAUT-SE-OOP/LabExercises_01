// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   Employee(string,string,int);
   //Declare a constructor that has one parameter for each data member
   void setFirstName(string );
   // method to set the employee's first name
   string getFirstName();
   // method to get the employee's first name
   void setLastName(string );
   // method to set the employee's last name
   string getLastName();
   // method to get the employee's last name
   void setMonthlySalary(int);
   // method to set the employee's monthly salary
   int getMonthlySalary();
   // method to get the employee's monthly salary
private:
    string firstName;
   // string data member for the employee's first name
    string lastName;
   //string data member for the employee's last name
   int monthlySalary;
   //int data member for the employee's monthly salary
}; // end class Employee
