// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
    explicit Employee(string , int);
    void setEmployee(string);
    string getEmployee();
    void setSalary(int);
    int getSalary();
    void increase(int);
    void display();
   /* Declare a constructor that has one parameter for each data member */
   /* Declare a set method for the employee's first name */
   /* Declare a get method for the employee's first name */
   /* Declare a set method for the employee's last name */
   /* Declare a get method for the employee's last name */
   /* Declare a set method for the employee's monthly salary */
   /* Declare a get method for the employee's monthly salary */
private:
   string Name;
   string employeename;
   int employeesalary;/* Declare a string data member for the employee's first name *//* Declare a string data member for the employee's last name */
   int Salary;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
