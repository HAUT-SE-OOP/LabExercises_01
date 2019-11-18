// Lab 7: IntegerSet.h
// Header file for class IntegerSet
#ifndef INTEGER_SET_H
#define INTEGER_SET_H

class IntegerSet
{
public:
   // default constructor
   IntegerSet()
   {
      emptySet();
   } // end IntegerSet constructor

   IntegerSet( int [], int ); // constructor that takes an initial set
   IntegerSet unionOfSets( const IntegerSet& ); //union of two sets
   IntegerSet intersectionOfSets( const IntegerSet& ); //intersection of two sets
   void emptySet(); // set all elements of set to 0
   void inputSet(); // read values from user
   void insertElement( int ); //insert an element
   void deleteElement( int ); //delete an element
   void printSet() const; //print the set
   bool isEqualTo( const IntegerSet& ) const; // determines if two sets are equal
private:
   int set[ 101 ]; // range of 0 - 100

   // determines a valid entry to the set
   int validEntry( int x ) const
   {
      return ( x >= 0 && x <= 100 );
   } // end function validEntry
}; // end class IntegerSet

#endif

