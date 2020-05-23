// menu.cpp
// Test program and general support functions
// for phone directory

#include <iostream>		// for cin, cout
#include "directory.h"		// for class Directory

using namespace std;

void ShowMenu()
// Display the main program menu.
{
      cout << "\n\t\t*** DIRECTORY ***";
      cout << "\n\ti \tInsert a new entry into the directory";
      cout << "\n\td \tDisplay the entire directory";
      cout << "\n\tq \tQuit\n";
      cout << endl;
}

bool Legal(char c)
// Determine if a particular character, c, corresponds
// to a legal menu command.  Returns true if legal, false if not.
// Used in GetCommand.
{
	return	( (c == 'i') || (c == 'd') || (c == 'q') );
}

char GetUserInput()
// Prompts the user for a menu command until a legal 
// command character is entered.  Return the command character.
// Calls GetAChar, Legal, ShowMenu.
{
   char response;	// command character.
   string dummy;    // dummy string for clean-up
	
   do 
   {			
      ShowMenu();
      cin >> response;		
	  getline(cin, dummy);		    // Discards other user input incl. RETURN keystroke.	
      if (!Legal(response))
        cout << "Invalid input! Please try again."<< endl;
   } while (!Legal(response));
   
   return response;
}

int main()
{
   Directory d;			// Create and initialize a new directory object.
   char command;
   
   do {  
      command = GetUserInput();
    
      switch (command)
      {
         case 'i': d.insertEntry();			break;
	     case 'd': d.displayDirectory();	break;
		 case 'q':							break;
      }   
    
   } while (command != 'q');

   return 0;
}
