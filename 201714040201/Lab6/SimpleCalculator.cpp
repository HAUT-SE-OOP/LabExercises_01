// Lab Exercise 6: SimpleCalculator.cpp
#include<iostream>
#include "SimpleCalculator.h"
using namespace std;


SimpleCalculator::SimpleCalculator(double Answer,double A,double B)
{
    answer=Answer;
    a=A;
    b=B;
}
double SimpleCalculator::getAnswer()
{
    return answer;
}
void SimpleCalculator::printValues()
{
    cout<<"a is:"<<a<<endl;
    cout<<"b is:"<<b<<endl;
}
/* Write definition for add member function */
void SimpleCalculator::add( double a, double b )
{
    answer=a+b;
    cout<<getAnswer();
} // end function addition
void SimpleCalculator::input()
{
   cin>>a>>b;
}
// function subtract definition
void SimpleCalculator::subtract( double a, double b )
{
    answer=a-b;
    cout<<getAnswer();
} // end function subtract

// function multiply definition
void SimpleCalculator::multiply( double a, double b )
{
    answer=a*b;
    cout<<getAnswer();
  // return a * b;
} // end function multiply

/* Write definition for divide member function */
void SimpleCalculator::divide( double a, double b )
{
    answer=a/b;
    cout<<getAnswer();
   //return a / b;
} // end function divide


