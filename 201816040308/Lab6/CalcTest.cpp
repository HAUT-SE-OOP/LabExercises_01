// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{

    SimpleCalculator sc; // instantiate object
    sc.input();
    sc.printValues();

    cout << "Adding a and b yields " << sc.add() << endl;
    cout << "Subtracting b from a yields " <<  sc.subtract() << endl;
    cout << "Multiplying a by b yields " <<  sc.multiply() << endl;
    cout << "Dividing a by b yields " <<  sc.divide() << endl;

}
