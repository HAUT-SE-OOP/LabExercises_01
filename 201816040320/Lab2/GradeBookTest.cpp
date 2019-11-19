// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;
#include <string>
// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
    string name;
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook(
      "CS101 Introduction to C++ Programming","Sam Smith" );

   // display welcome message and instructor's name
   gradeBook.displayMessage();

   gradeBook.outputMessage();
   //cout << "This course is present by:" << gradeBook.getInstructorName() << "\n" <<endl;
   /* write code to change instructor's name and output changes */
   cout << "Changing instructor name to ";
   getline(cin,name);
   cout << "\n" <<endl;
   gradeBook.setInstructorName(name);
   gradeBook.displayMessage();
   //cout << "This course is present by:" << gradeBook.getInstructorName() << "\n" <<endl;
   gradeBook.outputMessage();

} // end main
