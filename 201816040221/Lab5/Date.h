// Lab 5: Date.h
#ifndef DATE_H
#define DATE_H
#define <time>
class Time
{
public:
   Time(); // default constructor
   void setTime(int ,int, int)// set year
   void setbegin();

   /* Write a member function prototype for nextDay,
      which will increment the Date by one day */
private:
   int hour;
   int minute;
   int second;
}; // end class Date

#endif
