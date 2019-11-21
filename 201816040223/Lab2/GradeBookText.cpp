// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;
#include<string>
// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
   // create a GradeBook object; pass a course name and instructor name
   string nameofcourse;
   GradeBook gradeBook(
             "CS101 Introduction to C++ Programming","Sam Smith");
             gradeBook.displayMessage();
          // cout<< "This course is presented by:"<<gradeBook.getInstructorName()<<endl;
   cout<<"changing instructor name to"<<endl;
   getline(cin,nameofcourse);
   gradeBook.setInstructorName(nameofcourse);
   cout<<endl;


   // display welcome message and instructor's name
   gradeBook.displayMessage();

   /* write code to change instructor's name and output changes */
} // end main
