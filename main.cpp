// main.cpp
// Main program for point, circle, cylinder hierarchy
#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

using namespace std;

int main()
{
   Point point1, point2(7, 11);		      // create a point
   Circle circle1, circle2(point2, 3.5);	  // create a circle
   Cylinder cylinder1, cylinder2(circle2, 10); // create a cylinder

   cout << setprecision(2) << fixed;

   cout << "\nShape objects set up using default constructors\n";
   point1.printShapeName();	// static binding
   cout << point1 << endl;	// Note: use of overloaded insertion <<
   //point1.print();
   //cout << endl;
   circle1.printShapeName();	// static binding
   cout << circle1 << endl;
   //circle1.print();
   //cout << endl;
   cylinder1.printShapeName();	// static binding
   cout << cylinder1 << "\n\n";
   //cylinder1.print();
   //cout << endl;
   
   cout << "\nShape objects set up with user-defined parameters\n";
   point2.printShapeName();	// static binding
   cout << point2 << endl;	// Note: use of overloaded insertion <<
   //point2.print();
   circle2.printShapeName();	// static binding
   cout << circle2 << endl;
   //circle2.print();
   cylinder2.printShapeName();	// static binding
   cout << cylinder2 << "\n\n";

Shape* arrayOfShapes[3];	// array of base-class pointers
							// base class pointers are needed for polymorphism

   // aim arrayOfShapes[0] at derived class Point object
   // aim arrayOfShapes[1] at derived class Circle object
   // aim arrayOfShapes[2] at derived class Cylinder object

   // Loop through arrayOfShapes and print the shape name,
   // area, and volume of each object to which the array points
   // using dynamic binding.
arrayOfShapes[0] = &point2;
arrayOfShapes[1] = &circle2;
arrayOfShapes[2] = &cylinder2;
   for (int i = 0; i < 3; i++)
   {
	    arrayOfShapes[i]->printShapeName();
		cout << endl;
	    arrayOfShapes[i]->print();
		cout << endl;
		cout << "Area = " << arrayOfShapes[i]->area() << endl;
		cout << "Volume = " << arrayOfShapes[i]->volume() << endl;
   }


   
   return 0;
}



