#include "SimpleCalculator.h"
#include <iostream>

using namespace std;

SimpleCalculator::SimpleCalculator()
{
   a = 0;
   b = 0;
}

SimpleCalculator::SimpleCalculator(double m , double n)
:a(m),b(n)
{

}
void SimpleCalculator::input()
{
   cin>>a>>b;
}

void SimpleCalculator::printValues()
{
    cout<<a<<"  "<<b;
}
double SimpleCalculator::add()
{
    return a + b;
}
