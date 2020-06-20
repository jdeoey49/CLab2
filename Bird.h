#pragma once
#include<string>
#include"Animal.h"
class Bird:public Animal
{
public:
	Bird(std::string name);
	virtual void makeSound();
	void fly();
};

