// Lab Exercise 6: SimpleCalculator.cpp
#include <iostream>
#include "SimpleCalculator.h"
using namespace std;
/* Write definition for add member function */
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
double SimpleCalculator::getBefore()const
{
    return right;
}
void SimpleCalculator::setLast(double b)
{
    left=b;
}
double SimpleCalculator::getLast()const
{
    return left;
}
double SimpleCalculator::add( double a, double b ) const
{
   return a + b;
} // end function multiply
// function subtract definition
double SimpleCalculator::subtract( double a, double b ) const
{
   return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply( double a, double b ) const
{
   return a * b;
} // end function multiply
double SimpleCalculator::divide( double a, double b ) const
{
   return a / b;
} // end function multiply
/* Write definition for divide member function */

