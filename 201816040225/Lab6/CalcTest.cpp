
//Lab6:SimpleCalculatorTest.cpp
#include<iostream>
using namespace std;
#include"SimpleCalculator.h"
//define the class
int main()
{
    SimpleCalculator sc;//define the object

    double a=10.0;//data
    double b=20.0;//data
    cout<<"The value of a is: "<<a<<"\n"//show meaning
    <<"The value of b is: "<<b<<"\n";
    double addition=sc.add(a,b);
    cout<<"Adding a and b yields  "<<addition<<"\n";//show addition
    double subtraction =sc.subtract(a,b);
    cout<<"Subtracting b from a yields  "<<subtraction<<"\n";//show subtraction
    double multiplication=sc.multiply(a,b);
    cout<<"Multiplying a by b yields  "<<multiplication<<"\n";//show multiplication
    double division=sc.divide(a,b);
    cout<<"Dividing a by b yields  "<<division<<endl;//show division
}
