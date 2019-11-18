// Lab Exercise 6: SimpleCalculator.cpp
#include <iostream>
using namespace std;
#include "SimpleCalculator.h"

/* Write definition for add member function */
double SimpleCalculator::addition(double a,double b)const
{
    return a+b;
}
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

/* Write definition for divide member function */
double SimpleCalculator::division(double a,double b)const
{
    return a/b;
}
