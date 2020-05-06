#include<iostream>
#include<iomanip>
#include"Account.h"
using namespace std;
void display(Account &);
int main()
{
	Account account1(50);
	Account account2(25);
	float number;
	cout << "Enter withdraw amount for account1:";
	cin >> number;
	account1.withdrawMoney(number);
	display(account1);
	cout << "Enter deposit amount for account1:";
	cin >> number;
	account1.addMoney(number);
	display(account1);
	cout << "Enter withdraw amount for account2:";
	cin >> number;
	account2.withdrawMoney(number);
	display(account2);
	cout << "Enter deposit amount for account2:";
	cin >> number;
	account2.addMoney(number);
	display(account2);
}
void display(Account &displayAccount)
{
	cout << fixed;
	cout << setprecision(2);
	cout << "This account has balance:" << displayAccount.getBalance() << endl;
}