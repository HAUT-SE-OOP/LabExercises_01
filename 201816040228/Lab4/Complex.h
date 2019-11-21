// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double, double);//constructor initializes
    void setComplexNumber( double, double );//定义复数函数
    Complex add(const Complex &right);// 复数加法
    Complex subtract(const Complex &right);//复数减法
    void printComplex();//打印

private:
    double realPart;//实数
    double imaginaryPart;//虚部
};

#endif

