// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"

double SimpleCalculator::add(double a,double b) const
{
	return a+b;
}

double SimpleCalculator::subtract( double a, double b ) const
{
   return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply( double a, double b ) const
{
   return a * b;
} // end function multiply

double SimpleCalculator::divide(double a, double b) const
{
	return a/b;
 } 
