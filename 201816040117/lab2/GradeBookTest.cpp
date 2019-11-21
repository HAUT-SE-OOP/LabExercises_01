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
      "CS101 Introduction to C++ Programming" ,"Mrs Cheng");

   // display welcome message and instructor's name
   gradeBook.displayMessage();

   /* write code to change instructor's name and output changes */
   gradeBook.setInstructorName("Mr Ma");//change instructor's name
   cout<<"\nChanging instructor name to Mr Ma:\n\n";//prompt
   gradeBook.displayMessage();//display the changed message
} // end main
