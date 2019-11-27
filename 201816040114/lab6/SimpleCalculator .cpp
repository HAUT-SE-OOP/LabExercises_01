// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"

/* Write definition for add member function */
SimpleCalculator::SimpleCalculator(double ta,double tb)
{
    a=ta;
    b=tb;
}
double SimpleCalculator::add( double a, double b ) const
{
   return a + b;
} // end function add


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
double SimpleCalculator::besides( double a, double b ) const
{
   return a / b;
} // end function besides

