// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook1(
      "CS101 Introduction to C++ Programming" , "Sam Smith");

      gradeBook1.displayMessage();//display
      cout << "\nChanging instructor name to Judy Jones\n"<< endl;//change the instructor's name


   // display welcome message and instructor's name
   GradeBook gradeBook2(
      "CS101 Introduction to C++ Programming" , "Judy Jones" );

   gradeBook2.displayMessage();//display


   /* write code to change instructor's name and output changes */
} // end main
