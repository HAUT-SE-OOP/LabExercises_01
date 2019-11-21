// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare声明 a constructor构造函数 that has one parameter参数 for each data member数据成员 */
   Employee( string, string, int );// constructor initializes firstname lastname and salary
   /* Declare a set method for the employee's员工 first name */
   void setFirstName( string ); // function to set firstname
   /* Declare a get method for the employee's first name */
   string getFirstName(); // function to get the firstname
   /* Declare a set method for the employee's last name */
   void setLastName( string ); // function to set lastname
   /* Declare a get method for the employee's last name */
   string getLastName(); // function to get the lastname
   /* Declare a set method for the employee's monthly salary月薪 */
   void setSalary( int ); // function to set the salary
   /* Declare a get method for the employee's monthly salary */
   int getSalary(); // function to get the salary
private:
   /* Declare a string字符串 data member for the employee's first name */
   string firstname; // firstname for this Employee
   /* Declare a string字符串 data member for the employee's last name */
   string lastname;//lastname for this Employee
   /* Declare an int整形 data member for the employee's monthly salary */
   int salary;//salary for this Employee
}; // end class Employee
