// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex( double = 5, double  = 5);// 构造函数
    Complex add( const Complex& );// 加法
    Complex subtract( const Complex&);// 减法
    void printComplex(); // 输出
    void setComplexNumber( double , double );//  set 函数
private:
    double realPart; // double类型的输出成员 实部数字
    double imaginaryPart; // double类型的输出成员 虚部数字
};

#endif

