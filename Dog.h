#pragma once
#include<string>
#include"Animal.h"
class Dog:public Animal
{
public:
	Dog(std::string name);
	virtual void makeSound();
	void wag();
};

