#include<iostream>
#include"Cylinder.h"
using namespace std;
float Cylinder::area() const
{
	return Circle::area() * 2 + Circle::getRadius() * 2 *3.14* getHeight();
}
float Cylinder::volume() const
{
	return Circle::area() *getHeight();
}
void Cylinder::print() const
{
	Circle::print();
	cout << " Height = " << getHeight() ;
}
ostream &operator<<(ostream &output, const Cylinder &cy)
{
	cy.print();
	return output;
}