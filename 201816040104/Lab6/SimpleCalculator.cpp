
// Lab Exercise 6: SimpleCalculator.cpp
#include <iostream>
using namespace std;
#include "SimpleCalculator.h"
SimpleCalculator::SimpleCalculator(double right,double left)
{
    setSimpleCalculator(right,left);
}

void  SimpleCalculator::setSimpleCalculator(double right,double left)
{
    setBefore(right);
    setLast(left);
}
void SimpleCalculator::setBefore(double a)
{
    right=a;
}
void SimpleCalculator::setLast(double b)
{
    left=b;
}
double SimpleCalculator::getBefore()const
{
    return right;
}
double SimpleCalculator::getLast()const
{
    return left;
}
// function subtract definition
double SimpleCalculator::add( double a, double b ) const
{
   return a + b;
} // end function multiply
double SimpleCalculator::subtract( double a, double b ) const
{
   return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply( double a, double b ) const
{
   return a * b;
} // end function multiply
 double SimpleCalculator::divide( double a, double b) const
 {
     return a/b;
 }


/* Write definition for divide member function */
