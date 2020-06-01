#include<iostream>
#include<iomanip>
#include "UnpackedFood.h"
using namespace std;
UnpackedFood::UnpackedFood(std::string name, int bar_code, double weight, double price):Product(name,bar_code),
weight_in_kg_(weight),price_per_kg_(price)
{
	cout << "Constructor of derived class UnpackedFood running!" << endl;
}
UnpackedFood::~UnpackedFood()
{
	cout << "Destructor of derived class UnpackedFood running!" << endl;
}
void UnpackedFood::setWeight(double weight)
{
	weight_in_kg_ = weight;
}
double UnpackedFood::getWeight() const
{
	return weight_in_kg_;
}
void UnpackedFood::setPrice(double price)
{
	price_per_kg_ = price;
}
double UnpackedFood::getPrice() const
{
	return price_per_kg_;
}
void UnpackedFood::enterProductAttributes()
{
	Product::enterProductAttributes();
	cout << "Please enter unpacked food price per kg:";
	cin >> price_per_kg_;
	cout << "Please enter unpacked food weight:";
	cin >> weight_in_kg_;
}
ostream& operator<<(ostream& out_ref, const UnpackedFood& unpacked_ref)
{
	out_ref << "Unpacked Food Attributes <Derived Class>:" << endl;
	out_ref << "Unpacked Food Name: " <<unpacked_ref.getName() << endl;
	out_ref << "Unpacked Food Bar Code: " << unpacked_ref.getBarCode() << endl;
	out_ref << "Unpacked Food: Unit Price: " << fixed << setprecision(2) << unpacked_ref.getPrice()<<endl;
	out_ref<<"Unpacked Food: Weight: "<<fixed << setprecision(2)<<unpacked_ref.getWeight()<<endl;
	return out_ref;
}
