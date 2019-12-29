// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
    Employee (string,string,double);


    void   setEmployeefirstname( string );
    string getEmployeefirstname();

    void   setEmployeelastname( string );
    string getEmployeelastname();

    void   setEmployeemonthlysalary(double);
    double getEmployeemonthlysalary();

private:
    string firstname;
    string lastname;
    double monthlysalary;
}; // end class Employee
