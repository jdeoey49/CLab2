// entry.h

#ifndef ENTRY_H
#define ENTRY_H

#include<string>

// Declaration of class Entry for a phone directory
class Entry
{
public:
   // default constrctor
   Entry(const std::string& name = "", const std::string& phone_number = "", 
	   const std::string& address = "");  
   // rewrite the default constructor such that name, phone_number, and address are passed by const reference
   void setName(const std::string& name_ref);		
   void setPhoneNumber(const std::string& phone_number_ref);		
   void setAddress(const std::string& address_ref);
   std::string getName() const;
   std::string getPhoneNumber() const;
   std::string getAddress() const;
   std::string toString() const;	
   void requestEntryFromUser();
	
private:
   std::string name_;		
   std::string phone_number_;	
   std::string address_;			
};

#endif
