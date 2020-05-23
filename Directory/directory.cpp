// directory.cpp 
// Definitions for member functions of Directory class

#include <iostream>
#include <cstring>		// for strcmp
#include "directory.h"

using namespace std;

Directory::Directory(int max_size)			
// Set up empty directory of entries.
{ 
   max_size_ = max_size;
   current_size_ = 0; 
   entry_list_ptr_ = new (nothrow) Entry[max_size_];

   if (entry_list_ptr_ == nullptr)
   {
	   cerr << "Memory allcation failed";
	   exit(1);
   }
}


Directory::~Directory()
// This destructor function for class Directory
// deallocates the directory's list of Entry objects.
{
   cout << "\nFreeing up memory pointed to by entry_list_ptr_" << endl;
   // your code here
   delete[] entry_list_ptr_;
}

void Directory::insertEntry()
// Insert a new entry into the direrctory.
{
	if (current_size_ == max_size_)	// if the directory is full, double its size.
		doubleMaxSize();

	//get new entry
	// your code here
	else
	{
		entry_list_ptr_[current_size_].requestEntryFromUser();
		current_size_ = current_size_ + 1;
	}
}


void Directory::doubleMaxSize()
// Double the size of the directory's entry list
// by creating a new, larger array of entries
// and changing the directory's pointer to refer to
// this new array.
{
   max_size_ = 2*current_size_;			// Determine a new size.
   Entry* new_entry_list_ptr = new (nothrow) Entry[max_size_]; // Allocate a new list array.

   if (new_entry_list_ptr == nullptr)
   {
	   cerr << "Memory allocation failed! " << endl;
	   exit(1);
   }
	
   for (int i = 0; i < current_size_; i++)  // copy each existing entry into
      new_entry_list_ptr[i] = entry_list_ptr_[i];		   // the new array.
		
   delete [] entry_list_ptr_;	// free up memory associated with the old array
   entry_list_ptr_ = new_entry_list_ptr;	 // Point entry_list_ptr to newly allocated memory.
}


void Directory::displayDirectory() const
// Display the current directory entries
// on the standard output (the screen).
{
   if (current_size_ == 0)
   {
      cout << "\nCurrent directory is empty.\n";
	  return;
   }
	

   cout << "Directory Entries" << endl;
   // your code here
   for (int i = 0; i < current_size_; i++)
   {
	   cout << "Name:" << entry_list_ptr_[i].getName() << "\tPhone Number:"
		   << entry_list_ptr_[i].getPhoneNumber() << "\tAddress:" <<
		   entry_list_ptr_[i].getAddress() << endl; 
   }
}


