#pragma once
#include<string>
#include"Animal.h"
class Cat:public Animal
{
public:
	Cat(std::string name);
	virtual void makeSound();
	void purr();
};

