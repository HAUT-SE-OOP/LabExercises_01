// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

    class Employee
{
public:
    Employee (string,string,int);
   void setemployeename1(string);
   string getemployeename1() const;


    void setemployeename2(string);
   string getemployeename2();
    void setmonthsalary(int);
   int getmonthsalary();

private:
    string firstname;
    string lastname;
    int monthsalary;
}; // end class Employee
