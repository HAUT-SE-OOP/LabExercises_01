// Lab Exercise 6: SimpleCalculator.cpp
#include <iostream>
using namespace std;
#include "SimpleCalculator.h"

SimpleCalculator::SimpleCalculator()
:a(0),b(0)
{

}
SimpleCalculator::SimpleCalculator(double z,double x)
{
    a=z;
    b=x;
}
void SimpleCalculator::printValues()
{
    cout <<"a="<<a<<endl;
    cout <<"b="<<b<<endl;
}
void SimpleCalculator::input()
{
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
}

/* Write definition for add member function */
double SimpleCalculator::add() const
{
    return a + b;
}

// function subtract definition
double SimpleCalculator::subtract() const
{
   return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply() const
{
   return a * b;
} // end function multiply

/* Write definition for divide member function */
double SimpleCalculator::divide() const
{
    return a/b;
}
