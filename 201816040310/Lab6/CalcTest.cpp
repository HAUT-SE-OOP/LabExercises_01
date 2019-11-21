// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{

 
   /* Instantiate an object of type Simplecalculator */
   SimpleCalculator sc(23,2);
   sc.printValues();
   sc.add();
   cout<<"Adding a and b yields "<<sc.getAnswer()<<endl;
}