//Lab5:Date.h
#ifndef DATE_H
#define DATE_H
//define  a Date class
class Date
{
public:
   Date( int=1, int=1, int=2000);//Define the date type
   void printDate();//print
   void setDate( int,int,int);//a function to set
   void setMonth( int );//a function to set
   void setDay(int);//a function to set
   void setYear(int);//a function to set
   int getMonth();//a function to get
   int getYear();//a function to get
   int getDay();//a function to get
   int nextDate();//a function to nextDate
private://data member
   int Month;
   int Day;
   int Year;
   bool leapYear();
   int monthDays();
};
#endif // DATE_H
