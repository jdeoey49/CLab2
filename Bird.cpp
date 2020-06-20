#include<iostream>
#include "Bird.h"
using namespace std;
Bird::Bird(std::string name):Animal(name)
{}
void Bird::makeSound()
{
	//cout << getName() << " the bird goes : tschirp, tschirp";
	cout << Animal::getName() << " the bird";
	Animal::makeSound();
	cout << " tschirp, tschirp" << endl;
}
void Bird::fly()
{
	cout << "- " << getName() <<" flies through the sky -" <<endl;
}