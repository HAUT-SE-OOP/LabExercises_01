// Lab Exercise 6: SimpleCalculator.cpp
#include <bits/stdc++.h>
#include "SimpleCalculator.h"
using namespace std;
SimpleCalculator::SimpleCalculator(double x,double y)
{
    a=x;
    b=y;
}

double SimpleCalculator::add()
{
    return a + b;
}

double SimpleCalculator::subtract()
{
    return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply()
{
    return a * b;
} // end function multiply

double SimpleCalculator::divide()
{
    return a / b;
} // end function multiply

void SimpleCalculator::input()
{
    cout<< "ÇëÊäÈëa= ";
    cin>>a;
    cout<< "ÇëÊäÈëb= ";
    cin>>b;
}

void SimpleCalculator::printValues()
{
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;;
}

