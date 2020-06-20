#include<iostream>
#include "Animal.h"
using namespace std;
Animal::Animal(std::string name):name_(name)
{}
std::string Animal::getName()
{
	return name_;
}
void Animal::makeSound()
{
	cout << " goes:";
}
