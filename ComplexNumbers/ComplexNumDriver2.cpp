#include <iostream>
#include "Complex.h"
using namespace std;

int main(){
	Complex a,b,c;
	double real=0,imag=0;
	//Complex a
	cout << "Enter real number" << endl;
	cin >> real; 
	a.setReal(real);
	cout << "Enter an imaginary number " << endl;
	cin >> imag;
	a.setImag(imag);
	a.print();
	
	//Complex b
	cout << "Enter real number" << endl;
	cin >> real; 
	b.setReal(real);
	cout << "Enter an imaginary number " << endl;
	cin >> imag;
	b.setImag(imag);
	b.print();
	
	//Addition
	cout << "Addiction" << endl;
	c=a + b;
	c.print();
	
	//Subtraction
	cout << "Subtraction" << endl;
	c=a - b;
	c.print();
	
	//Multiplication
	cout << "Multiplication" << endl;
	c=a * b;
	c.print();
	return 0;
}
