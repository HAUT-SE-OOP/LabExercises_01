// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{

   SimpleCalculator sc;

   sc.input();
   sc.printValues();

   cout << "Adding a and b yields :" << sc.add()<< "\n";

   cout << "Subtracting b from a yields :" << sc.subtract() << "\n";

   cout << "Multiplying a by b yields :" << sc.multiply()<< "\n";

   cout << "Dividing a by b yields :" << sc.divide()<<endl;
}
