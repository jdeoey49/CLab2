#include<iostream>
#include<string>
#include "Product.h"
using namespace std;
Product::Product(string name,int bar_code):name_(name),bar_code_(bar_code)
{
	cout << "\nConstructor of base class Product running!" << endl;
}
Product::~Product()
{
	cout << "Destructor of base class Product running!" << endl;
}
void Product::setName(string name)
{
	name_ = name;
}
string Product::getName() const
{
	return name_;
}
void Product::setBarCode(int bar_code)
{
	bar_code_ = bar_code;
}
int Product::getBarCode() const
{
	return bar_code_;
}
void Product::enterProductAttributes()
{
	//string productname;
	//int barcode;
	//cout << "\nDialog for Entering Product Attributes <Base Class>";
	cout << "Please enter product name: ";
	cin>>name_;
	cout << "Please enter bar code: ";
	cin >> bar_code_;
	//setName(productname);
	//setBarCode(barcode);
}
ostream& operator<<(ostream& out, Product& p_ref)
{
	out << "Product Attributes <Base Class>"<<endl;
	out << "Product Name:" << p_ref.getName()<<endl;
	out	<< "Product Bar Code:" << p_ref.getBarCode() << endl;
	return out;
}
