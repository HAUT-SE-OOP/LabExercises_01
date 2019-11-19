// Lab 5: DateTest.cpp
#include <iostream>
using namespace std;

#include "Date.h" // include definitions of class Date

int main()
{
   const int MAXDAYS = 16;
   int a,b,c;
   Date d( 12, 24, 2004); // instantiate object d of class Date

   // output Date object d's value
   for ( int loop = 1; loop <= MAXDAYS; ++loop )
   {
       a=d.getDay();
       b=d.getMonth();
       c=d.getYear();

       d.print(); // invokes function print
       d.nextDay(a,b,c);
      /* Write call to nextDay */
   } // end for

   cout << endl;
} // end main
