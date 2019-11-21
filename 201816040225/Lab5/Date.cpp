//Lab5:Date.cpp
#include<iostream>
using namespace std;
#include"Date.h"//include definition of class Date
Date::Date(int month1,int day1,int year1)//constructor data

{
    setDate(month1,day1,year1);
}
void Date::setDate(int mo,int dy,int yr)
{
    setMonth(mo);
    setDay(dy);
    setYear(yr);
}
void Date::setMonth(int month1)//set month
{
    Month=(month1>=1&& month1<=12)?month1:1;
}
int Date::getMonth()//get month
{
    return Month;
}
void Date::setDay(int day1)//set day
{
     if ( Month == 2&&leapYear())
      Day = ( day1 <= 29&&day1 >= 1 ) ? day1 : 1;
   else
      Day = ( day1<= monthDays()&&day1 >= 1 ) ? day1 : 1;
}
int Date::getDay()//get day
{
    return Day;
}
void Date::setYear(int year1)//set year
{
    Year=year1>=1900?year1:1900;
}
int Date::getYear()//get year
{
    return  Year;
}
void Date::printDate()//function to print
{
   cout << Month << '-' << Day << '-' << Year << '\n';
}
int Date::nextDate()//next date
{
    if(Day<monthDays())//one month' date
    {
        Day=Day+1;
        Month=Month;
        Year=Year;
    }
    else//over one month to next month
    {

        Day-=monthDays()-1;
        Month=Month+1;
        if(Month>12)
        {
            Month=Month-12;
            Year=Year+1;
        }
    }
}
bool Date::leapYear()//judge the year
{
    if(getYear()%400==0||(getYear()%4==0&&getYear()%100!=0))
        return true;
    else
        return false;
}
int Date::monthDays()//12 months
{
    const int days[12]=
    {
        31,28,31,30,31,30,31,31,30,31,30,31
    };
    return getMonth()==2&&leapYear()?29:days[getMonth()-1];
}
