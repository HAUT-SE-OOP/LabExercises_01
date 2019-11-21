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
   GradeBook gradeBook1( "CS101 Introduction to C++ Programming","Sam Smith" );

    string other;
   // display welcome message and instructor's name
   gradeBook1.displayMessage();
   cout<<"Changing instructor name to ";
   cin>>other;
   cout<<endl;
    GradeBook gradeBook2("CS101 Introduction to C++ Programming",other);
    gradeBook2.displayMessage();

   /* write code to change instructor's name and output changes */
} // end main
