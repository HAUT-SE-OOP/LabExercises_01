// Lab 2: Employee.h
// Definition of Employee class that stores an satff's name,surnname,salary.
#include <string>// program uses C++ standard string class
using namespace std;// //  Employee class definition
class Employee
{
public:
    Employee(string,string,int);    //Initialize the class
    void setname(string);      //Values change name
    string getname();       //Get name data
    void setsurn(string);   //Values change surnname
    string getsurn();       //Get surnname date
    void setsalary();       //Values change salary
    int getsalary();        //Get salary date
    void displayMessage();      //Display employee information
private:
    string name;        //Staff name
    string surn;        //Staff surnname
    int salary;     //Staff salary
};
