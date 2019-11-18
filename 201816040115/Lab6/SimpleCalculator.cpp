// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"
#include<iostream>

using namespace std;

SimpleCalculator::SimpleCalculator()    //constructor
    :lnum(0),rnum(0),answer(0)
{

}
SimpleCalculator::SimpleCalculator(double a,double b)
    :lnum(a),rnum(b),answer(0)
{

}

/* Write definition for add member function */
double SimpleCalculator::add(double a, double b) const
{
    return a + b;
}   // end function add

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
double SimpleCalculator::divide(double a, double b) const
{
    return a / b;
}   // end function divide
//function for get answer
double SimpleCalculator::getAnswer() const
{
    return answer;
}

//function for set answer
void SimpleCalculator::setAnswer(double a)
{
    answer=a;
}
//function for set lnum and rnum
void SimpleCalculator::setLnumAndRnum(double a,double b)
{
    lnum=a;
    rnum=b;
}
void SimpleCalculator::printValues() const
{
    cout << lnum << ' ' << rnum << endl;
}



