// Circle.h
// definition of class Circle
#ifndef CIRCLE1_H
#define CIRCLE1_H

#include "Point.h"

class Circle: public Point  // Circle inherits from Point
{

	friend std::ostream &operator<<(std::ostream &output, const Circle &c);

public:
    // constructor
	explicit Circle(Point p = Point(), float r = 0):Point(p),radius_(r)
	{}
	// virtual destructor 
	virtual ~Circle() { };

    void setRadius(float r){radius_ = r;};
	float getRadius() const { return radius_; };
    virtual float area( ) const override;  
    virtual float volume() const override { return 0.0; };
    virtual void printShapeName() const override { std::cout << "Circle: "; };
    virtual void print() const override;

private:
    float radius_; // radius of circle
};
#endif


