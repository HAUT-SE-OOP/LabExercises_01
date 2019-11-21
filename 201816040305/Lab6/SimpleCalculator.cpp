// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"
SimpleCalculator::SimpleCalculator (double A ,double B )
{
    a = A ;
    b = B ;
}

double SimpleCalculator::add (double a ,double b ) const
{
    return a + b;
}

/* Write definition for add member function */

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

double SimpleCalculator::devide(double a , double b) const
{
    return a / b;
}
/* Write definition for divide member function */

