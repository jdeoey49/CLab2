// entry.cpp
// Member function definitions for class Entry

#include <iostream>
#include <sstream>
#include "entry.h"		

using namespace std;


//---------- Member function definitions ----------

Entry::Entry(const string& name, const string& phone_number, const string& address) :
   name_(name), phone_number_(phone_number), address_(address)
{
}

// rewrite the default constructor such that name, phone_number, and address are passed by const reference


void Entry::setName(const string& name_ref)
{
	name_ = name_ref;
}

void Entry::setPhoneNumber(const string& phone_number_ref)
{
	phone_number_ = phone_number_ref;
}


void Entry::setAddress(const string& address_ref)
{
	address_ = address_ref;
}

string Entry::getName() const
{
	return name_;
}

string Entry::getPhoneNumber() const
{
	return phone_number_;
}

string Entry::getAddress() const
{
	return address_;
}

string Entry::toString() const
{
	ostringstream buffer;
	buffer << "Name: " << getName() << ", Phone Number: " << getPhoneNumber() << ", Address: " << getAddress();
	return buffer.str();
}

void Entry::requestEntryFromUser()
{
   // finish implementation of member function requestEntryFromUser() using getline(...)
	string name;
	string phonenumber;
	string address;
	cout << "Type Name, follow by pressing RETURN key:";
	getline(cin, name);
	setName(name);
	cout << "Type phone number, follow by pressing RETURN key:";
	getline(cin, phonenumber);
	setPhoneNumber(phonenumber);
	cout << "Type address, follow by pressing RETURN key:";
	getline(cin, address);
	setAddress(address);
}





