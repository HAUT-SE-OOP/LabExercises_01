#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

// Lab 2: GradeBook.h
// Definition of GradeBook class that stores an instructor's name.
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
   // constructor initializes course name and instructor name
   GradeBook( string, string );
   void setCourseName( string ); // function to set the course name
   string getCourseName(); // function to retrieve the course name
   /* write code to declare a get function for the instructor's name */
   /* write code to declare a set function for the instructor's name */
   void displayMessage(); // display welcome message and instructor name
   void setInstructorName(string);
   string getInstructorName();
private:
   string courseName; // course name for this GradeBook
   string instructorName; // instructor name for this GradeBook
}; // end class GradeBook


#endif // HEADERS_H_INCLUDED
