#pragma once
#include<iostream>
class Product
{
	friend std::ostream& operator<<(std::ostream& out, Product& p_ref);
	public:
		Product(std::string="",int=0);
		~Product();
		void setName(std::string);
		std::string getName() const;
		void setBarCode(int);
		int getBarCode() const;
		void enterProductAttributes();
	private:
		std::string name_;
		int bar_code_;
};

