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
   GradeBook gradeBook( "CS101 Introduction to C++ Programming","Sam Smith" );
   gradeBook.displayMessage();
   cout<<"changing instructor name to ";
   string name;
 getline(cin,name);
   gradeBook.setInstructorName(name);
cout<<endl;
   // display welcome message and instructor's name
   GradeBook gradeBook1( "CS101 Introduction to C++ Programming","Judy Jones" );
   //function to change instructor's name and output changes
   gradeBook1.displayMessage();

} // end main
