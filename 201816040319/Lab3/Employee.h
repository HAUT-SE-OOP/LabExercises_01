// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee (string firstname ,string lastname ,double monthlysalary );

   void   setEmployeefirstname(string Fistname);
   string getEmployeefirstname();
   void   setEmployeelastname(string Lastname);
   string getEmployeelastname();
   void   setEmployeemonthlysalary(double salary);
   double getEmployeemonthlysalary();
private:
    string firstname ;
    string lastname ;
    double monthlysalary;
}; // end class Employee
