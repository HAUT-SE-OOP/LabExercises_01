#ifndef COMPLEX_H
#define COMPLEX_H
#endif
class Complex
{
    public:
      Complex(double,double);
      Complex add(const Complex&);
      Complex substr(const Complex &);
      void printComplex();
      void setComplexNumber(double double);
    private:
        double realPart;
        double imaginaryPart;
};
