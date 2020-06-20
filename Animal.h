#pragma once
#include<string>
class Animal
{
public:
	Animal(std::string name);
	std::string getName();
	virtual void makeSound();
private:
	std::string name_;
};

