// Lab Exercise 6: SimpleCalculator.cpp
#include <iostream>
#include "SimpleCalculator.h"
using namespace std;

SimpleCalculator::SimpleCalculator()
  :answer(0),first(0),last(0)
  {

  }

SimpleCalculator::SimpleCalculator(double f,double l)
  :answer(0),first(f),last(l)
  {

  }

/* Write definition for add member function */
// function add definition
double SimpleCalculator::add( double a, double b ) const
{
   return a + b;
} // end function add

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

/* Write definition for divide member function */
// function divide definition
double SimpleCalculator::divide( double a, double b )
{
   answer = a / b;
   return a / b;
} // end function divide

// function divide definition
double SimpleCalculator::getAnswer()
{
   return answer;
} // end function divide
void SimpleCalculator::setInput()
{
    cout<<"\nThe value of first and last:"<<endl;
    cin>>first>>last;

}
// function divide definition
void SimpleCalculator::Calculator()
{
   cout << "Adding a and b yields "<<first+last<<endl<< "Subtracting b from a yields "<<first-last<<endl
        <<"Multiplying a by b yields "<<first*last<<endl<<"Dividing a by b yields "<<first/last<<endl;
} // end function divide
