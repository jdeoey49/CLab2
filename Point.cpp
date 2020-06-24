#include<iostream>
#include"Point.h"
using namespace std;
void Point::print() const
{
	cout<< "(" << getX() << "," << getY() << ")";
}
ostream &operator<< (ostream &output, const Point &p)
{
	//output << "(" << p.getX() << "," << p.getY() << ")";
	p.print();
	return output;
}
