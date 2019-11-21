// Lab Exercise 6: SimpleCalculator.cpp
#include <iostream>
#include "SimpleCalculator.h"
using namespace std;


SimpleCalculator::SimpleCalculator(double A,double B)
{
    setA(A);
    setB(B);
}//end constructor
/* Write definition for add member function */
//function add definition
double SimpleCalculator::add()
{
    answer=A+B;
}//end function add

// function subtract definition
double SimpleCalculator::subtract( )
{
   answer= A-B;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply( )
{
   answer= A*B;
} // end function multiply

/* Write definition for divide member function */
//function divide definition
double SimpleCalculator::divide( )
{
    answer=A/B;
}//end function divide
//function to retrieve answer
double SimpleCalculator::getAnswer()
{
    return answer;
}
//function to get A and B
void SimpleCalculator::setA(double a)
{
    A=a;
}
void SimpleCalculator::setB(double b)
{
    B=b;
}//end function
double SimpleCalculator::getA()
{
    return A;
}
double SimpleCalculator::getB()
{
    return B;
}
