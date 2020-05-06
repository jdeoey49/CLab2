// TestAccountClass.cpp
// Create and manipulate Account objects.
#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;

// function main begins program execution
int main()
{
   // constructors
   Account account1( 50.0 ); // create Account object
   Account account2( 25.0 ); // create Account object
   
   // add formatting options to display amount with two decimals
   cout << fixed << setprecision(2);

   // display initial balance of each object
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;


   // testing Account class' debit method
   float debitAmount;   // stores withdrawal amount read from user
   cout << "\nEnter withdrawal amount for account1: "; // prompt
   cin >> debitAmount; // obtain user input
  
   cout << "\nattempting to subtract " << debitAmount 
      << " from account1 balance\n\n";
   account1.withdrawMoney( debitAmount ); // try to subtract from account1
   cout << "account1 balance: $" << account1.getBalance() << endl;

   cout << "\nEnter withdrawal amount for account2: "; // prompt
   cin >> debitAmount; // obtain user input
   cout << "\nattempting to subtract " << debitAmount 
      << " from account2 balance\n\n";
   account2.withdrawMoney( debitAmount ); // try to subtract from account2
   cout << "account2 balance: $" << account2.getBalance() << endl;

   
   // testing Account class' credit method
   float creditAmount;  // stores amount to be added as read from user
   
   cout << "\nEnter credit amount to be added to account1: "; // prompt
   cin >> creditAmount; // obtain user input
   cout << "\nattempting to add " << creditAmount 
      << " to account1 balance\n\n";
   account1.addMoney( creditAmount ); // try to add to account1
   cout << "account1 balance: $" << account1.getBalance() << endl;
   
   cout << "\nEnter credit amount to be added to account2: "; // prompt
   cin >> creditAmount; // obtain user input
   cout << "\nattempting to add " << creditAmount 
      << " to account2 balance\n\n";
   account2.addMoney( creditAmount ); // try to add to account1 
   cout << "account2 balance: $" << account2.getBalance() << endl;
   
} // end main


/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 **************************************************************************/   
