#include<iostream>
#include "Dog.h"
using namespace std;
Dog::Dog(std::string name):Animal(name)
{}
void Dog::makeSound()
{
	cout << Animal::getName() << " the dogs";
	Animal::makeSound();
	cout << " barks!" << endl;
}
void Dog::wag()
{
	cout << "- " << getName() << " wags tails -" << endl;
}
