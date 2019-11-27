// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
    string InstructorName = "Sam Smith";
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook( "CS101 Introduction to C++ Programming",InstructorName );

   // display welcome message and instructor's name
   gradeBook.displayMessage();
   cout << endl;


    //change instructor's name and output changes
   cout << "Changing instructor name to ";
   getline(cin,InstructorName);
   cout << endl;

   gradeBook.setInstructorName(InstructorName);
    gradeBook.getInstructorName();
   gradeBook.displayMessage();

} // end main
