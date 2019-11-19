// Lab 1: Rectangle.h
// Definition of Rectangle class.

class Rectangle
{
public:
   Rectangle( double length=1,double width=1);//定义一个关于Rectangle的类
   void setLength(double);
   void setWidth(double);
   double getLength();
   double getWidth();
   double getPerimeter();
   double getArea();

private:
   double length;
   double width;
}; // end class Rectangle
