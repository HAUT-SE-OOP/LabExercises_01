// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Emloyee
{
public:
   Emloyee(string,string,int);
   void setname(string);
   string getname();
   void setlastname(string);
   string getlastname();
   void setsalary(int);
   int getsalary();
   void displayMessage();
private:
   string name;
   string lastname;
   int salary;
}; // end class Employee
