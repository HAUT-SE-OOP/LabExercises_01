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
   // create a GradeBook object; pass a course name and instructor name
    GradeBook gradeBook( "CS101 Introduction to C++ Programming" ,"Sam Smith");

   // display welcome message and instructor's name
    gradeBook.displayMessage();
      // change instructor's name and output changes
    string instructorName ;
    cout <<endl ;
    cout <<"changing instructor name to ";
    getline(cin,instructorName);            //input the name you change to
    cout << endl;
    gradeBook.setInstructorName(instructorName) ;
    gradeBook.displayMessage();

} // end main
