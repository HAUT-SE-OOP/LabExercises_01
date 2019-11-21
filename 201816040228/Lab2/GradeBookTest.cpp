// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
   string instructor;
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook( "CS101 Introduction to C++ Programming" ,"Sam Smith"  );

   // display welcome message and instructor's name
   gradeBook.displayMessage();

   cout << "Changing instructor name to " ;
   getline(cin ,instructor);//输入教授名
   GradeBook mygradeBook( "CS101 Introduction to C++ Programming" ,"Sam Smith"  );
   mygradeBook.setInstructorName(instructor);//调用更改教授名的函数
   mygradeBook.displayMessage();
   /* write code to change instructor's name and output changes */
} // end main
