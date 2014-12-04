#include <iostream>
#include "Complex.h"
using namespace std;

void Complex::setReal(double num){
	this->real_=num;
}

double Complex::getReal(){
	return real_;
}

void Complex::setImag(double num){
	this->imag_=num;
}

double Complex::getImag(){
	return imag_;
}

void Complex::print(){
	cout << "(" << real_ << "," << imag_ << ")" << endl; 
}
const Complex Complex::operator+(const Complex &z)const{
	Complex comp;
	comp.setImag(imag_ + z.imag_);
	comp.setReal(real_ + z.real_);
	return comp;
}

const Complex Complex::operator-(const Complex &z)const{
	Complex comp;
	comp.setImag(imag_ - z.imag_);
	comp.setReal(real_ - z.real_);
	return comp;
}

const Complex Complex::operator*(const Complex &z)const{
	Complex comp;
	comp.setImag(imag_ * z.imag_);
	comp.setReal(real_ * z.real_);
	return comp;
}
