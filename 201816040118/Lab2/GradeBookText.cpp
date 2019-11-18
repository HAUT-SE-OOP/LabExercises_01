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
   GradeBook gradeBook(
      "CS101 Introduction to C++ Programming","Sam Smith" );

   // display welcome message and instructor's name
   gradeBook.displayMessage();
   /* write code to change instructor's name and output changes */
   string teachername;  //define a string;
   cout<<"Changing instructor name to ";
   getline(cin,teachername); //read this string;
   gradeBook.setInstructorName(teachername);  //pass this string to this set function;
    gradeBook.displayMessage();      // display welcome message and the new instructor's name

} // end main
