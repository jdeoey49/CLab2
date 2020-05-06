#include<iostream>
#include"complex.h"
using namespace std;
//default constructor
Complex::Complex(double real , double imaginary):realPart_(real),imaginaryPart_(imaginary)
{
	cout << "constructor at work...";
	count_++;
	cout << "count_="<< count_<<endl;
}
//destructor
Complex::~Complex()
{
	cout << "destructor at work..." << endl;
}
//copy constructor
Complex::Complex(const Complex& rhs)
{
	cout << "copy constructor at work...";
	realPart_ = rhs.realPart_;
	imaginaryPart_ = rhs.imaginaryPart_;
	count_++;
	cout << "count_=" << count_ << endl;
}
//function add
Complex& Complex::add(const Complex& comadd)	     
{
	realPart_ += comadd.realPart_;
	imaginaryPart_ += comadd.imaginaryPart_;
	return *this;
}
// function subtract
Complex& Complex::subtract(const Complex& comsub) 
{
	realPart_ -= comsub.realPart_;
	imaginaryPart_ -= comsub.imaginaryPart_;
	return *this;
}
std::string Complex::toString() const
{
	 cout<< "(" << realPart_ <<", "<<imaginaryPart_ << ")";
	 return " ";
}
// set complex number 
void Complex::setComplexNumber(double numreal, double numimagine) 
{
	realPart_ = numreal;
	imaginaryPart_ = numimagine;
}