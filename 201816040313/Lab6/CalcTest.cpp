// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{
   SimpleCalculator sc;//定义一个类的对象
   double a = 10.0;
   double b = 20.0;

   /* Instantiate an object of type Simplecalculator */
   cout << "The value of a is: " << a << "\n";
   cout << "The value of b is: " << b << "\n\n";

   double addition = sc.add( a, b);//调用加法
   cout << "Adding a and b yields " << addition << "\n";

   double subtraction = sc.subtract( a, b );//调用减法
   cout << "Subtracting b from a yields " << subtraction << "\n";

   double multiplication = sc.multiply( a, b );//调用乘法
   cout << "Multiplying a by b yields " << multiplication << "\n";

   double division = sc.divide( a, b);//调用除法
   cout << "Dividing a by b yields " << division << endl;
}
