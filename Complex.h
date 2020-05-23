// Complex.h
// Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex
{
	friend std::ostream &operator<<(std::ostream &, const Complex &);
	friend std::istream &operator >> (std::istream &, Complex &);
public:
	explicit Complex(double = 0.0, double = 0.0);// constructor
   Complex operator+( const Complex& ) const; // addition
   Complex operator-( const Complex& ) const; // subtraction
   Complex operator*(const Complex&) const; // multiplication
   bool operator==(const Complex&) const; // multiplication
   bool operator!=(const Complex&) const; // multiplication
private:
   double real_; // real part
   double imag_; // imaginary part
}; // end class Complex

#endif

