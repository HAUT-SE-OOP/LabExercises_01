// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
    string instructorname;
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook(
      "CS101 Introduction to C++ Programming","Sam Smith" );
    gradeBook.displayMessage();

    cout << "Changing instructor name to ";
    cin >>instructorname;
    gradeBook.setInstructorName( instructorname ) ;

   // display welcome message and instructor's name
   gradeBook.displayMessage();

   /* write code to change instructor's name and output changes */
} // end main
