// Lab 5: DateTest.cpp
#include <iostream>
using namespace std;

#include "Date.h" // include definitions of class Date

int main()
{
   const int MAXDAYS = 16;
   Date d( 1, 28, 2001 ); // instantiate object d of class Date

   // output Date object d's value
   for ( int loop = 1; loop <= MAXDAYS; ++loop )
   {
      d.print(); // invokes function print
      d.Nextday(1,28,2001);// Next functions
   } // end for

   cout << endl;
} // end main
