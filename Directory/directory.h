// directory.h 
// Declaration for class Directory, where a directory
// is a collection of Entries, declared in "entry.h".

// add include guards to this header file
#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "entry.h"

class Directory
{
public:
   Directory(int max_size = 5); // default constructor			
   ~Directory();		        // deallocate the entry list.
   void insertEntry();		    // insert an entry into the directory.
   void displayDirectory() const;	// Display the current directory.


private:
   int max_size_;			// the maximum allowable number of entries
   int current_size_;		// the current number of entries
   Entry* entry_list_ptr_;		// pointer to the list of entries
   void doubleMaxSize();	// increase maximum size, when required.
};

#endif // DIRECTORY_H