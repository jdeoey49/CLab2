#include<iostream>
#include "Cat.h"
using namespace std;
Cat::Cat(std::string name):Animal(name)
{}
void Cat::makeSound()
{
	//cout << getName() << " the cat goes : meow!";
	cout << Animal::getName() << " the cat";
	Animal::makeSound();
	cout << " meow!" << endl;
}
void Cat::purr()
{
	cout << "- "<<getName()<<" purrs -" << endl;
}