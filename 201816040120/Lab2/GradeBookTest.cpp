// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
#include <string>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
    string  name;
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook("CS101 Introduction to C++ Programming","Sam Smith");

   // display welcome message and instructor's name
   gradeBook.displayMessage();
   cout << "Changing the instructou name to " ;//changing the course
   getline(cin , name); //input the instructor's name;
   cout << endl ;
   gradeBook.setInstructorName(name);  //display the instructor's name
   gradeBook.displayMessage();
   /* write code to change instructor's name and output changes */
} // end main
