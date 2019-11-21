// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"

double SimpleCalculator::add( double a, double b) const
{
   return a + b;//两数相加
}

// function subtract definition
double SimpleCalculator::subtract( double a, double b ) const
{
   return a - b;//两数相减
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply( double a, double b ) const
{
   return a * b;//两数相乘
} // end function multiply

double SimpleCalculator::divide( double a, double b ) const
{
   return a * 1.0 / b;//两数相除
}

