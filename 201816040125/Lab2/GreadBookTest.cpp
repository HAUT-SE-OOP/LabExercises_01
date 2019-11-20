#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook(
      "CS101 Introduction to C++ Programming", "Sam Smith");

   // display welcome message and instructor's name
    gradeBook.displayMessage();
    gradeBook.setInstructorName("Judy Jones");   //change the instructor's name
    cout<<"changing instructor name to"<<gradeBook.getInstructorName()<<endl;

    gradeBook.displayMessage();
   /* write code to change instructor's name and output changes */
   return 0;
} // end main
