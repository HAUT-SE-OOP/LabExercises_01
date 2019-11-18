// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
    string a;
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook( "CS101 Introduction to C++ Programming","Kirigaya Kazuto" );

   // display welcome message and instructor's name
   gradeBook.displayMessage();

   cout<<endl<<"Change instructor's name to ";
   getline(cin,a);
   cout <<endl;
   gradeBook.setInstructorName(a);/* write code to change instructor's name and output changes */
   gradeBook.displayMessage();
} // end main
