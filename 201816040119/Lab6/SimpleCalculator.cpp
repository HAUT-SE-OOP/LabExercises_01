// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"
using namespace std;
#include <iostream>


SimpleCalculator::SimpleCalculator()
{
    answer=0;
    a=0;
    b=0;
}
//function add definition
double SimpleCalculator::add(double a,double b)
{
    answer=a+b;
    //return a+b;
}
// function subtract definition
double SimpleCalculator::subtract( double a, double b )
{
   answer=a-b;
   //return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply( double a, double b )
{
   answer=a*b;
  // return a * b;
} // end function multiply

//function divide definition
double SimpleCalculator::divide(double a,double b)
{
    answer=a/b;
    //return a/b;
}
double SimpleCalculator::getAnswer()
{
    return answer;
}
void SimpleCalculator::printValues()
{
    cout << "The value of a is: " << a ;
    cout << "The value of b is: " << b << endl;
}
void SimpleCalculator::setAB(double c,double d)
{
    a=c;
    b=d;
}


