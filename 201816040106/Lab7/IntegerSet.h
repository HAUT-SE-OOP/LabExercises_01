// Lab 7: IntegerSet.h
// Header file for class IntegerSet
#include<cstring>
#ifndef INTEGER_SET_H
#define INTEGER_SET_H

class IntegerSet 
{
public:  
   // default constructor
   IntegerSet() 
   { 
      memset(set,0,sizeof set);
   } // end IntegerSet constructor
   IntegerSet( int [], int ); // constructor that takes an initial set
   IntegerSet unionOfSets( const IntegerSet& );
   IntegerSet intersectionOfSets( const IntegerSet& );
   void emptySet(); // set all elements of set to 0
   void inputSet(); // read values from user
   void insertElement( int );
   void deleteElement(int );
   void printSet() const;
   bool isEqualTo(const IntegerSet &) const;
private:
   int set[ 101 ]; // range of 0 - 100
   // determines a valid entry to the set
   int validEntry( int x ) const 
   { 
      return ( x >= 0 && x <= 100 ); 
   } // end function validEntry
}; // end class IntegerSet

#endif

