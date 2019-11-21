#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
    int n1, n2;
    cout <<"please input the first number:";
    cin >> n1;
    cout <<"please input the second number:";
    cin >> n2;
    Employee employee("adsd","feter",n1);
    cout <<"employee salary by 10%:" << endl;
    cout <<"The first prise is: " <<employee.getc()<<endl <<endl;
    employee.setc(n2);
    employee.displayMessage();
