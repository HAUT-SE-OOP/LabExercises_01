// Lab Exercise 6: SimpleCalculator.cpp

#include "SimpleCalculator.h"
#include <iostream>
using namespace std;

SimpleCalculator::SimpleCalculator()
{
   a = 0, b = 0;
}

SimpleCalculator::SimpleCalculator(double a, double b)
{
   this->a = a;
   this->b = b;
}

void SimpleCalculator::input()
{
   cin >> a >> b;
}

/* Write definition for add member function */
double SimpleCalculator::add()
{
   ans = a + b;
}

// function subtract definition
double SimpleCalculator::subtract()
{
   ans = a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply()
{
   ans = a * b;
} // end function multiply

/* Write definition for divide member function */
double SimpleCalculator::divide()
{
   ans = a / b;
}

double SimpleCalculator::getAnswer()
{
   return ans;
}

void SimpleCalculator::printValues()
{
   cout << "a :" << a << endl;
   cout << "b: " << b << endl;
}