// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"

/*SimpleCalculator::SimpleCalculator(double a,double b,double answer)
{
    a=0;
    b=0;
    answer=0;
};*/
SimpleCalculator::SimpleCalculator(double a,double b,double answer)
{
    setSimpleCalculator(a,b,answer);
}

void SimpleCalculator::setSimpleCalculator(double c,double d,double e)
{
    a=c;
    b=d;
    answer=e;
}



double SimpleCalculator::getAnswer()
{
    return answer;
}//end getAnswer function

double SimpleCalculator::add( double a, double b ) const
{
   return a + b;
} //end function add
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

double SimpleCalculator::divide( double a, double b ) const
{
   return a / b;
} //end function divide
/* Write definition for divide member function */

