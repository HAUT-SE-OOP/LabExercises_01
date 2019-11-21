// Lab Exercise 6: SimpleCalculator.cpp
#include <iostream>
using namespace std;
#include "SimpleCalculator.h"
double SimpleCalculator::addition(double a,double b) const  // function subtract definition
{
    return a+b;
}
double SimpleCalculator::subtract( double a, double b ) const   // function subtract definition
{
   return a - b;
} // end function subtract
double SimpleCalculator::multiply( double a, double b ) const   // function multiply definition
{
   return a * b;
} // end function multiply
double SimpleCalculator::division(double a,double b )const  //function division definition
{
    double division;
    if(b<=0)        //Determine if the divisor is correct
        cout<<"Divisor error!";
    else
        division=a/b;
        return division;
}
