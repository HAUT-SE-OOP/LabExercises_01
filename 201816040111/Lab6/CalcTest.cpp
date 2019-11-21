#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{
   SimpleCalculator sc;
  sc.input();
  sc.printValues();
  cout << "Adding a and b yields"<<sc.add()<<"\n";
}
