
#include <iostream>
using namespace std;
#include "SimpleCalculator.h"

using namespace std;

int main()
{
    SimpleCalculator sc(10,20);
    cout<<"the value of a is :"<<sc.getBefore()<<endl;
    cout<<"the value of b is :"<<sc.getLast()<<endl;
    cout<<"adding a and b yields :"<<sc.add(10,20)<<endl;
    cout<<"Subtracting b from a yields :"<<sc.subtract(10,20)<<endl;
    cout<<"Multiplying a by b yields :"<<sc.multiply(10,20)<<endl;
    cout<<"Dividing b from a yields :"<<sc.divide(10,20)<<endl;

}
