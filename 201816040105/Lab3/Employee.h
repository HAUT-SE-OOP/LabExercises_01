// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std; 

// Employee class definition
class Employee 
{
public:
   Employee(string,string,int);
   void setFirstName(string firstName);
   string getFirstName();
   void setLastName(string lastName);
   string getLastName();
   void setIncome(int income);
   int getIncome();
private:
   string first;
   string last;
   int Income;
}; // end class Employee
