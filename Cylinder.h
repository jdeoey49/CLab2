// Cylinder.h
// definition of class Cylinder

#ifndef CYLINDR_H
#define CYLINDR_H
#include "Circle.h"

using namespace std;

class Cylinder : public Circle {

  friend ostream &operator<<(ostream &output, const Cylinder &cy);

public:
  // constructor
   explicit Cylinder(Circle c = Circle(), float h = 0.0):Circle(c),height_(h)
   {}
   // virtual destructor
   virtual ~Cylinder() {};

   void setHeight(float h){height_ = h;};
   float getHeight() const{return height_;};
   virtual float area( ) const override;
   virtual float volume() const override;
   virtual void printShapeName() const override { cout << "Cylinder: "; };
   virtual void print() const override;

private:
  float height_; // radius of Cylinder
};
#endif

