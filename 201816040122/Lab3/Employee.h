
// Lab 3: Employee.h
// Employee class definition.

#include <string>
using namespace std;

class Employee
{
 Employee( string, string,int );
   void setemployeeName( string );
   string getemployeeName();
   void setemployeeSurname( string );
   string getemployeeSurname();
     void setemployeeWages( int );
   string getemployeeWages();
   void displayMessage(); //
private:
   string employeeName;
   string employeeSurname;
   string employeeWages;
};
