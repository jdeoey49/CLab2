// Point.h
// definition of class Point
#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "Shape.h"
class Point : public Shape 
{

	friend std::ostream &operator<< (std::ostream &output, const Point &p);

public:
	explicit Point(float a = 0, float b = 0) { setPoint(a, b); } // default constructor
	virtual ~Point() {}; // virtual destructor c
  
   void setPoint(float a, float b) { x_ = a; y_ = b; } // set coordinates
   float getX() const { return x_; };  // get x coordinate
   float getY() const { return y_; };  // get y coordinate
  
   virtual float area() const override { return 0.0; };
   virtual float volume() const override { return 0.0; };
   virtual void printShapeName() const override { std::cout << "Point: "; } // implementations of pure virtual members
   virtual void print() const override;

private:
  float x_, y_; // x and y coordinates of Point
};
#endif

