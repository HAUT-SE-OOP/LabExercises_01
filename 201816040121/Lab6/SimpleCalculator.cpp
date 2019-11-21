// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"

//fuction to constructor
SimpleCalculator::SimpleCalculator( double a, double b )
{
    m = a;
    n = b;
}

//fuction to add
double SimpleCalculator::add( double a, double b ) const
{
    return a + b;
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

//fuction to divide
double SimpleCalculator::divide( double a, double b ) const
{
    return a / b;
}

