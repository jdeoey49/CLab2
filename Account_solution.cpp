#include<iostream>
#include "Account.h"
Account::Account()
{
	setBalance(0);
}
Account::Account(float amount)
{
	setBalance(amount);
	if (balance_ < 0)
	{
		std::cout << "The initial balance is invalid" << std::endl;
		Account();
	}
}
void Account::setBalance(float amount)
{
	balance_ = amount;
}
float Account::getBalance() const
{
	return balance_;
}
void Account::addMoney(float amount)
{
	if (amount < 0)
	{
		std::cout << "Error:You enter a negative value to deposit" << std::endl;
		return;
	}
	else
	balance_ = balance_ + amount;
}
void Account::withdrawMoney(float amount)
{
	if (amount < 0)
	{
		std::cout << "Error:You enter a negative value to withdraw" << std::endl;
		return;
	}
	if (balance_ < amount)
	{
		std::cout << "Error:Amount to be withdrawn exceeded account balance" << std::endl;
		balance_ = balance_;
		return;
	}
	balance_ = balance_ - amount;
}