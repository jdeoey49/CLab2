#pragma once
#include<iostream>
#include"Product.h"
class UnpackedFood:public Product
{
	friend std::ostream& operator<<(std::ostream& out_ref, const UnpackedFood& unpacked_ref);

public:
	UnpackedFood(std::string = "", int = 0, double= 0.0,double=0.0);
	~UnpackedFood();
	void setWeight(double);
	double getWeight() const;
	void setPrice(double);
	double getPrice() const;
	void enterProductAttributes();


private:
	double weight_in_kg_;
	double price_per_kg_;
};

