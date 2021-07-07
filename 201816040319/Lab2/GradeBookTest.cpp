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
      "CS101 Introduction to C++ Programming","Sam smith" );
      cout <<endl;
      gradeBook1.displayMessage();
 /* write code to change instructor's name and output changes */
 GradeBook gradeBook2(
      "CS101 Introduction to C++ Programming","judy jones" );
      cout <<endl;
      gradeBook2.displayMessage();
      return 0;



} // end main
