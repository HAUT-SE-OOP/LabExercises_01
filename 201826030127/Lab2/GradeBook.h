// Lab 2: GradeBook.h
// Definition of GradeBook class that stores an instructor's name.
#include <string> // program uses C++ standard string class
using namespace std;
#include<iostream>
// GradeBook class definition
class GradeBook
{
public:
   // constructor initializes course name and instructor name
   GradeBook( string, string );
   void setCourseName( string ); // function to set the course name
   string getCourseName() const; // function to retrieve the course name
  void setInstructorName(string);
  string  getInstructorName() const ;
   void displayMessage() const; // display welcome message and instructor name
private:
   string courseName; // course name for this GradeBook
   string InstructorName; // instructor name for this GradeBook
}; // end class GradeBook
