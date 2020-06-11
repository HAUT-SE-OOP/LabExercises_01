// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
#include<string.h>
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

// function to retrieve the course name
string GradeBook::getCourseName()  const
{
   return courseName;
} // end function getCourseName


 //a set member function for the instructor's name
void GradeBook::setInstructorName( string name )
{
    InstructorName = name; // store the structor name

}// end function structorName

//a get member function for the instructor's name
  string GradeBook::getInstructorName() const
{
   return InstructorName;
} // end function getStructorName


// display a welcome message and the instructor's name
void GradeBook::displayMessage() const
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!"
      << endl;
    //output the instructor's name
     cout << "This course is presented by:"<<getInstructorName()<< "!"
      << endl;

} // end function displayMessage
