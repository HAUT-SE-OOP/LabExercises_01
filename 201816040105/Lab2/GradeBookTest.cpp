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
   GradeBook gradeBook("CS101 Introduction to C++ Programming" ,"Sam Smith");
   // display welcome message and instructor's name
   gradeBook.displayMessage(); 
   cout<<"\n"<<"Changing instructor name to Judy Jones"<<"\n"<<endl;
   gradeBook.setInstructorName("Judy Jones");
   gradeBook.displayMessage();
} // end main
