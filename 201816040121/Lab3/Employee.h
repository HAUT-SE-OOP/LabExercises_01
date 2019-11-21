// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   //constructor initializes first name, last name, and monthly salary
   Employee(string, string, int);
   void setFirstName(string);//fuction to set the first name
   string getFirstName();//fuction to retrieve the first name
   void setLastName(string);//fuction to set the last name
   string getLastName();//fuction to retrieve the last name
   void setMonthlySalary(int);//fuction to set the employee's monthly salary
   int getMonthlySalary();//fuction to get the employee's monthly salary
   int calculationSalary();//fuction to calculation salary
private:
    string firstName;//first name for this Employee
    string lastName;//last name foor this Employee
    int monthlySalary;//monthly salary for this Employee
}; // end class Employee
