#include<iostream>
#include"Circle.h"
using namespace std;
float Circle::area() const
{
	return getRadius()*getRadius()*3.14;
}
void Circle::print() const
{
	cout << "Center = ";
	Point::print();
	cout << " Radius = " << getRadius();
}
std::ostream &operator<<(std::ostream &output, const Circle &c)
{
	c.print();
	return output;
}

