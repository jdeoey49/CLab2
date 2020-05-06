// Account.cpp
// Member-function definitions (implementations) for class Account.

#include <iostream>
#include "Account.h" // include definition of class Account

using namespace std;

// Account constructor initializes data member balance_
Account::Account( )
{
	setBalance(0.0);
	//balance_ = 0.0; // possible but not nice
}



// Account constructor initializes data member balance_
Account::Account( float amount )
{
	/*
	Provide a constructor Account( float amount ).It receives an initial balance
	and uses it to initialize the data member balance_. The constructor should validate the
	initial balance to ensure that it’s greater than or equal to 0. If not, set the balance to 0
	and display an error message indicating that the initial balance was invalid.
	*/

	// if proper member functions are availalbe, it is best to call them
	setBalance(amount); 
	
	// one can also set the member variable directly, but this is not nice
	/*
	if (amount >= 0.0) {
		balance_ = amount;
	}
	else {
		balance_ = 0.0;
		cout << "invalid initial balance \n";
	}
	*/
 
} // end Account constructor

// credit (add) an amount to the account balance
void Account::addMoney( float amount )
{

   /*
	Member function void credit( float amount ) to add an amount to the current balance. 
	Ensure that the amount added is positive. If a negative amount has been entered, display 
	error message and return.
   */
	if (amount >= 0.0) {
        
        // this is the preferred way to add money
		setBalance(getBalance() + amount);
		
		// the code below works, but it is not nice
		// you can use either line below, but not both!
		//balance_ = balance_ + amount;
		//balance_ += amount;

	}
	else {
		cout << "negative credit amount entered \n";
	}
	

	return;

} // end function credit

// debit (subtract) an amount from the account balance
void Account::withdrawMoney( float amount )
{
   	/*
		Member function to withdraw money.
		It ensures that the debit amount is positive and that it does not exceed the account’s 
		balance. If a negative amount has been entered display error message and return. 
		If the credit amount exceeds balance, leave balance unchanged and print a message 
		"debit amount exceeded account balance."
	*/

	if (amount < 0.0) {
		cout << "negative debit amount entered \n";
		return;
	}

	if (amount > getBalance()) {
		cout << "debit amount exceeds available balance \n";
		return;
	}
	else {
		setBalance(getBalance() - amount);
		//balance_ = balance_ - amount;
	}

} // end function debit


// set the account balance
void Account::setBalance(float amount)
{
	
	//add logic here
	if (amount >= 0.0) {
		balance_ = amount;
	}
	else {
		balance_ = 0.0;
		cout << "invalid initial balance \n";
	}

	
	// This would also work but it is not preferable
	// balance_ = amount;

}


// return the account balance
float Account::getBalance() const
{
	/*
	   Member function float getBalance() to return the current balance.
	*/
  
	return balance_;

} // end function getBalance


/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 **************************************************************************/
