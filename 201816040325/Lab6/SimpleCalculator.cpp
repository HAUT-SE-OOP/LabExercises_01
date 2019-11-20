// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"
#include<iostream>
using namespace std;

SimpleCalculator::SimpleCalculator(double m,double n)
:a(m),b(n)
{

}

SimpleCalculator::SimpleCalculator()
{
    a=0;
    b=0;
}
double SimpleCalculator::add()
{
    return a+b;
}

// function subtract definition
double SimpleCalculator::subtract()
{
   return a-b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply()
{
   return a*b;
} // end function multiply

double SimpleCalculator::divide()
{
    return a/b;
}

void SimpleCalculator::input()
{
    double x,y;

    cout<<"Please enter the value of a :";
    cin>>x;
    cout<<endl;
    cout<<"Please enter the value of b :";
    cin>>y;
    cout<<endl;
    a=x;
    b=y;
}
void SimpleCalculator::printValues()
{
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
}
