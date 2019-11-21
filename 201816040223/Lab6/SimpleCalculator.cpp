// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"

/* Write definition for add member function */
SimpleCalculator::SimpleCalculator(double num1,double num2)
{
    setnumber1(num1);
    setnumber2(num2);
}
// function subtract definition
void SimpleCalculator::setnumber1(double num1)
{
    number1=num1;
}
double SimpleCalculator::getnumber1()
{
    return number1;
}

void SimpleCalculator::setnumber2(double num2)
{
    number2=num2;
}
double SimpleCalculator::getnumber2()
{
    return number2;
}
void SimpleCalculator::subtract( )
{
    double a;
   a=number1 - number2;

} // end function subtract

// function multiply definition
void SimpleCalculator::multiply( )
{
    double b;
   b= number1 * number2;
} // end function multiply
void SimpleCalculator::division(  )
{
    double c;
   c= number1 / number2;
} // end function multiply
void SimpleCalculator::addition(  )
{
    double d;
  d=number1 + number2;
} // end function multiply

/* Write definition for divide member function */

