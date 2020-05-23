#include<iostream>
#include"Complex.h"
using namespace std;
Complex::Complex(double realnum,double imagnum):real_(realnum),imag_(imagnum)
{
}
Complex Complex::operator+(const Complex& num) const // addition
{
	Complex ans;
	ans.real_ = (*this).real_ + num.real_;
	ans.imag_= (*this).imag_ + num.imag_;
	return ans;
}
Complex Complex::operator-(const Complex& num) const // subtraction
{
	Complex ans;
	ans.real_ = (*this).real_ - num.real_;
	ans.imag_ = (*this).imag_ - num.imag_;
	return ans;
}
Complex Complex::operator*(const Complex& num) const // multiplication
{
	Complex ans;
	ans.real_ = (*this).real_ * num.real_ - (*this).imag_*num.imag_;
	ans.imag_ = (*this).imag_ * num.real_ + (*this).real_*num.imag_;
	return ans;
}
bool Complex::operator==(const Complex& num) const // multiplication
{
	if ((*this).real_ == num.real_ && (*this).imag_ == num.imag_)
		return true;
	else
		return false;
}
bool Complex::operator!= (const Complex& num) const // multiplication
{
	if ((*this).real_ != num.real_ || (*this).imag_ != num.imag_)
		return true;
	else
		return false;
}
ostream& operator<<(std::ostream &buf, const Complex &output)
{
	buf << "(" << output.real_ << "," << output.imag_ << ")" ;
	return buf;
}
istream& operator>>(istream& buf, Complex &input)
{
	buf.ignore(1);//ignore(
	buf >> input.real_;//real part
	buf.ignore(1);//ignore ,
	buf >> ws;//ignore white space
	buf >> input.imag_;
	buf.ignore(1);//ignore)
	buf.ignore(1);//ignore \n cause by return key
	return buf;
}