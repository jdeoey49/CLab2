#pragma once
#include "Product.h"
class PrepackedFood : public Product
{
	friend std::ostream& operator<<(std::ostream& out_ref, const PrepackedFood& packed_ref);

public:
	PrepackedFood( std::string="", int=0, double=0.0 );
	~PrepackedFood();
	void setPrice(double);
	double getPrice() const;
	void enterProductAttributes();


private:
	double item_price_;
};

//std::ostream& operator<<(std::ostream& out_ref, const PrepackedFood& packed_ref);
