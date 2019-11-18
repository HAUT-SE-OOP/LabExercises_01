// Lab Exercise 6: CalcTest.cpp
#include <iostream>
using namespace std;
#include "SimpleCalculator.h"
int main()
{
    double a = 10.0;
    double b = 20.0;
    SimpleCalculator sc;        //Define a class named sc
    cout << "The value of a is: "<<a<<"\n";
    cout << "The value of b is: "<<b<<"\n\n";
    double addition=sc.addition(a,b);       //In addition
    cout << "Adding a and b yields :" << addition << "\n";
    double subtraction=sc.subtract(a,b);    //To subtract
    cout << "Subtracting b from a yields :" << subtraction << "\n";
    double multiplication = sc.multiply( a, b );        //In the multiplication
    cout << "Multiplying a by b yields :" << multiplication << "\n";
    double division=sc.division(a,b);       //To carry on the division
    cout << "Dividing a by b yields :" << division << endl;
}
