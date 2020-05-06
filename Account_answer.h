// Account.h
// Header File 
// Definition of Account class.
// Class definition includes declarations of member functions

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account();
   Account( float amount ); // constructor initializes balance
   void addMoney( float amount ); // add an amount to the account balance
   void withdrawMoney( float amount ); // subtract an amount from the account balance
   void  setBalance(float amount);
   float getBalance() const; // return the account balance
private:
   float balance_; // data member that stores the balance
}; // end class Account

#endif

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 **************************************************************************/   
