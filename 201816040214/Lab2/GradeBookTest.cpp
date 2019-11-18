// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
    string instructorName;

   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook(
      "CS101 Introduction to C++ Programming" , "Sam Smith");
    gradeBook.displayMessage();
    cout << "\nChanging instructor name to ";
   // display welcome message and instructor's name
    getline(cin , instructorName);
    cout << "\n";
    GradeBook gradeBook2(
        "CS101 Introduction to C++ Programming" , instructorName );
   gradeBook2.displayMessage();

   /* write code to change instructor's name and output changes */
} // end main
