#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
  Employee(string,string,int);
  void setemployeename(string);
  string getemployeename();
  void setemoloyeesurname(string);
  string getemployeesurname();
  void setemployeesalary(int);
  int getemployeesalary();
  private:
string employeename;
string employeesurname;
int employeesalary;
}; // end class Employee
