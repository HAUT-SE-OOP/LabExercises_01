// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{
    SimpleCalculator sc;
    sc.printValues();
    sc.input();
    cout <<"a+b="<<sc.add()<<endl;
    cout <<"a-b="<<sc.subtract()<<endl;
    cout <<"a*b="<<sc.multiply()<<endl;
    cout <<"a/b="<<sc.divide()<<endl;
}
