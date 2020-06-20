#include<iostream>
#include"Bird.h"
#include"Dog.h"
#include"Cat.h"
using namespace std;
int main()
{
	/*Static Binding*/
	Bird Birdy("Birdy");
	Cat Kitty("Kitty");
	Dog Puppy("Puppy");
	cout << "\nStatic Binding \n";
	Birdy.getName();
	Birdy.makeSound();
	Birdy.fly();
	Kitty.getName();
	Kitty.makeSound();
	Kitty.purr();
	Puppy.getName();
	Puppy.makeSound();
	Puppy.wag();
	/*Aiming derived-class pointers at derived class objects*/
	cout << "\nAiming derived-class pointers at derived class objects \n";
	Bird* birdyPtr = nullptr;
	Cat* kittyPtr = nullptr;
	Dog* puppyPtr = nullptr;
	birdyPtr = &Birdy;
	kittyPtr = &Kitty;
	puppyPtr = &Puppy;
	birdyPtr->getName();
	birdyPtr->makeSound();
	birdyPtr->fly();
	kittyPtr->getName();
	kittyPtr->makeSound();
	kittyPtr->purr();
	puppyPtr->getName();
	puppyPtr->makeSound();
	puppyPtr->wag();
	/*Dynamic binding by setting a base class pointer to derived class objects */
	cout << "\nDynamic binding by setting a base class pointer to derived class objects\n";
	Animal* animalPtr = nullptr;
	animalPtr = &Birdy;
	animalPtr->getName();
	animalPtr->makeSound();
	animalPtr = &Kitty;
	animalPtr->getName();
	animalPtr->makeSound();
	animalPtr = &Puppy;
	animalPtr->getName();
	animalPtr->makeSound();
	return 0;
}