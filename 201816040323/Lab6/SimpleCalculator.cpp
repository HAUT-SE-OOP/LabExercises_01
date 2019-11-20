#include "SimpleCalculator.h"


// function subtract definition
double SimpleCalculator::subtract( double a, double b ) const
{
   return a - b;
} // end function subtract
double SimpleCalculator::add( double a, double b ) const
{
   return a + b;
}
double SimpleCalculator::divide( double a, double b ) const
{
    if(b==0)
    {
        cout << "The denominator can't be 0 "<<endl;//If b=0 then print The denominator can't be 0
    }
    else
    {
        return a / b;
    }
}
// function multiply definition
double SimpleCalculator::multiply( double a, double b ) const
{
   return a * b;
} // end function multiply
