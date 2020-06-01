// main.cpp
// driver program for product entry system involving base class Product
// and the two derived classes PrepackedFood and UnpackedFood
///////////////////////////////
#include "Product.h"
#include "PrepackedFood.h"
#include "UnpackedFood.h"
#include <iostream>

using namespace std;

int main()
{
	
	//1. Base Class
	Product product1("Flour", 1230), product2, product3;
	
	//product1 display product attributes;
	cout << endl << product1 << endl; 

	product2.setName("Sugar");
	product2.setBarCode(1231);
	//product2 display product attributes
	cout << endl << product2 << endl; 
	
	cout << endl << "Dialog for Entering Product Attributes <Base Class> " << endl; 
	product3.enterProductAttributes();
	//product3 display product attributes
	cout << endl << product3 << endl; 



	//2. Derived Class PrepackedFood
	PrepackedFood packed1("Joghurt",4560,0.49), packed2, packed3;
	
	//packed1 display product attributes
	cout << endl << packed1 << endl; 
	
	packed2.setName("Milk");
	packed2.setBarCode(4561);
	packed2.setPrice(1.25);
	//packed2 display product attributes
	cout << endl << packed2 << endl; 
	
	cout << endl << "Dialog for Entering Prepacked Food Attributes <Derived Class> " << endl;
	packed3.enterProductAttributes();
	//packed3 display product attributes
	cout << endl << packed3 << endl; 



	//3. Derived Class UnpackedFood
	UnpackedFood unpacked1("Pumpkin",7890,4,0.99), unpacked2, unpacked3;
	
	//unpacked1 display product attributes
	cout << endl << unpacked1 << endl; 

	unpacked2.setName("Eggplant");
	unpacked2.setBarCode(7891);
	unpacked2.setWeight(0.50);
	unpacked2.setPrice(2.50);
	//unpacked2 display product attributes
	cout << endl << unpacked2 << endl; 
	
	cout << endl << "Dialog for Entering Unpacked Food Attributes <Derived Class> " << endl; 
	unpacked3.enterProductAttributes();
	//unpacked3 display product attributes
	cout << endl << unpacked3 << endl; 


	return 0;
}

