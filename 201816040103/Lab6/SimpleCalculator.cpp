#include "SimpleCalculator.h"
SimpleCalculator::SimpleCalculator(double x,double y)
{
	a=x;
	b=y;
}
void SimpleCalculator::input(double al,double bl)
{
	x=al,b=bl;
}
double SimpleCalculator::add( double a, double b) const
{
	return a + b;/* Write definition for add member function */
}// function subtract definition
double SimpleCalculator::subtract( double a, double b ) const
{
   return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply( double a, double b ) const
{
   return a * b;
} // end function multiply

double SimpleCalculator::divid( double a, double b) const
{
	return a / b;
}/* Write definition for divide member function */

void SimpleCalculator::printValues()
{
	cout<<"The a is "<<a;
	cout<<endl;
	cout<<"The b is "<<b;
}
