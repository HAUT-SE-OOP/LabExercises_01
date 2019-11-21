// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string,string,int);
   //Declare methods
   void setEmployeeFirstName(string);
   string getEmployeeFirstName();
   void setEmployeeLastName(string);
   string getEmployeeLastName();
   void setEmployeeMonthlySalary(int);
   int getEmployeeMonthlySalary();
private:
   // Declare data member
   string employeeFirstName;
   string employeeLastName;
   int employeeMonthlySalary;
};
