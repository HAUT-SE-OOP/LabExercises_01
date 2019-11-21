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

/* Write definition for divide member function */

// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{
    SimpleCalculator sc;
   double a = 10.0;
   double b = 20.0;

   /* Instantiate an object of type Simplecalculator */
   cout << "The value of a is: " << a << "\n";
   cout << "The value of b is: " << b << "\n\n";

    double addition = sc.add( a, b );
   cout << "Adding a and b yields " << addition << "\n";

   double subtraction = sc.subtract( a, b );
   cout << "Subtracting b from a yields " << subtraction << "\n";

   double multiplication = sc.multiply( a, b );
   cout << "Multiplying a by b yields " << multiplication << "\n";

    double division = sc.divide( a, b );
   cout << "Dividing a by b yields " << division << endl;
}
