// Lab 4: Complex.h
using namespace std;
/* Write class definition for Complex */

class Complex{
public:
    Complex(double,double);
    Complex()
    {
        real=0.0;
        imaginary=0.0;
    };
    void setComplexNumber(double,double);
    void printComplex();
    Complex add(const Complex&);//add
    Complex subtract(const Complex&); // invoke add function and assign to object c

private:
    int real,imaginary; //实部虚部

};
