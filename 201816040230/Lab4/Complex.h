// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex{
public:
    Complex(double,double);//构造函数
    Complex add( Complex right );//复数相加
   Complex subtract( Complex right );//复数相减
   void printComplex();//输出
   void setComplexNumber( double,double ) ;//复数的set函数
private:
    double realPart;
    double imaginaryPart;
};

#endif

