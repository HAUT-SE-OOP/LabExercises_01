// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include<math.h>
/* Write class definition for Complex */

class Complex
{
//定义基本的函数类型
public:
    Complex(double =0.0,double = 0.0);//构造函数
    Complex add( const Complex &right);//相加并且返回值
    Complex subtract(const Complex &right);//相减并且返回值
    void printComplex();//打印类的值
    void setComplexNumber(double rp, double ip);//赋值函数

//定义基本变量
private:
    double realPart;
    double imaginaryPart;




};


#endif
