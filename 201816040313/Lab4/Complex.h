// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
    Complex(double = 0,double = 0);//定义一个类，并初始化为0
    void setComplexNumber(double,double);//定义一个set函数来设置数据成员的值
    void printComplex();//打印
    Complex add(const Complex &);//加法（按引用传递）
    Complex subtract(const Complex &);//减法（按引用传递）
private:
    double realPart;//实部
    double imaginaryPart;//虚部
};


#endif

