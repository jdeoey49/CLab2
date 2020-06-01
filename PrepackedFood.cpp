#include "Product.h"
#include "PrepackedFood.h"

#include<iostream>
#include <iomanip>
#include <string>
using namespace std;


PrepackedFood::PrepackedFood(string name, int bar_code, double price) : Product(name, bar_code), item_price_(price)
{
	cout << "Constructor of derived class PrepackedFood running!" << endl;
}

PrepackedFood::~PrepackedFood()
{
	cout << endl << "Destructor of derived class PrepackedFood running!" << endl;
}

void PrepackedFood::setPrice(double price)
{
	item_price_ = price;
}

double PrepackedFood::getPrice() const
{
	return item_price_;
}

void PrepackedFood::enterProductAttributes()
{
	Product::enterProductAttributes();
	cout << "Please enter prepacked food price per item: "; 
	cin >> item_price_;
}

std::ostream& operator<<(std::ostream& out_ref, const PrepackedFood& packed_ref)
{
	out_ref << "Prepacked Food Attributes <Derived Class>:" << endl;
	out_ref << "Prepacked Food Name: " << packed_ref.getName() << endl;
	out_ref << "Prepacked Food Bar Code: " << packed_ref.getBarCode() << endl;
	out_ref << "Prepacked Food: Unit Price: " << fixed << setprecision(2) << packed_ref.getPrice();
	return out_ref;
}
