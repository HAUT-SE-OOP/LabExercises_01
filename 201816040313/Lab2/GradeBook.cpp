
// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// constructor initializes courseName and instructorName
// with strings supplied as arguments
GradeBook::GradeBook( string course, string instructor )
{
   setCourseName( course ); // initializes courseName
   setInstructorName( instructor ); // initialiZes instructorName
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name
} // end function setCourseName

void GradeBook::setInstructorName( string instructor )//function to set the instructor name
{
    instructorName = instructor;
}
string GradeBook::getCourseName()//function to retrieve the course name
{
   return courseName;
} // end function getCourseName

string GradeBook::getInstructorName()// function to retrieve the instructor name
{
   return instructorName;
}

// display a welcome message and the instructor's name
void GradeBook::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!"
      << endl;
   cout << "This course is presented by:" <<getInstructorName() << endl;
} // end function displayMessage
