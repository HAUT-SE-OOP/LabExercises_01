// Lab 4: Complex.h
#include <string> // program uses C++ standard string class
using namespace std;
/* Write class definition for Complex */
class Complex
{
public:
    Complex (double=0, double=0) ;
    void printComplex() ;
    Complex add(Complex ) ;
    Complex subtract(Complex) ;
    void setComplexNumber (double, double) ;
private:
    double realPart ;
    double imaginaryPart ;
};
