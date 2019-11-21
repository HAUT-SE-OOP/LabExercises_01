// Lab 5: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
#define <time>
using namespace std;

#include "Time.h" // include definition of class Date

Time::Time( int h, int m, int s  )
{
   setTime( h,m,s); // sets date
} // end Date constructor

void Time::setTime( int h, int m, int s )
{
   if((h>=0&&h<24)&&(m>=0&&m<60)&&(s>=0&&s<60))
   {
       hour=h;
       minute=m;
       second=s;;
   }
   else
    throw invalid_argument("hour,minute and/orsecond was out of range");
} // end function setDate

void Time::setTimebegin()
{

}
