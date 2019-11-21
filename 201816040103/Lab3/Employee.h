// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std; 

// Employee class definition
class Employee 
{
public:
   Employee(string,string,int); 
   void setEmployee1(string);
   string getEmployee1();
   void setEmployee2(string);
   string getEmployee2();
   void setSalary(int);
   int getSalary();
private:
	string firstName;
   string lastName;
   int salary;
}; // end class Employee
