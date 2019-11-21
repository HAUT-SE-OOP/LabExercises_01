//Lab5 DateTest.cpp

#include<iostream>
using namespace std;
#include"Date.h"
int main()
{
    const int MAXDAYS=16;
    Date d(12,24,2004);//instantiate object d of class Date
    for(int loop=1;loop<=MAXDAYS;++loop)
    {
        d.printDate();//print
        d.nextDate();//next Date print
    }

   cout<<endl;
}


