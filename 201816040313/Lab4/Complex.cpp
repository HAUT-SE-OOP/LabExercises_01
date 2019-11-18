// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );//初始化数据成员
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
   realPart+=right.realPart;//实部相加
   imaginaryPart+=right.imaginaryPart;//虚部相加
   return *this;//返回对Complex对象的引用，返回类型是Complex &
} // end function add

Complex Complex::subtract( const Complex &right )
{
   realPart-=right.realPart;//实部相减
   imaginaryPart-=right.imaginaryPart;//虚部相减
   return *this;//返回对Complex对象的引用，返回类型是Complex &
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';//打印结果
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )//修改数据成员的值
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
