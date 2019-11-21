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
   GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Sam" );
   gradeBook1.displayMessage();
   cout<<"This course is presented by: "<<gradeBook1.getInstructorName()<<endl;
   cout<<"Changing instructor name to :";
   string myinstructor;
   getline(cin,myinstructor);
   gradeBook1.setInstructorName(myinstructor);
   cout<<"\n";
   gradeBook1.displayMessage();
   cout<<"This course is presented by :"<<gradeBook1.getInstructorName( )<<endl;
   // display welcome message and instructor's name

   /* write code to change instructor's name and output changes */
} // end main
