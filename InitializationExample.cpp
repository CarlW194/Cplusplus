#include <iostream>
using namespace std;

int main(){
	int a=5;				//initialises a = 5
	int b(6);				//initialises b = 6
	int c{3};				//initialises c = 3
	int result = a+b+c;
	
	int foo = 0;
	auto bar = foo;  		//same as int bar = foo just compiler can figure out automatically what it is.
	
	cout<<result;
	cout<< " and bar equals ";
	cout<<bar;
}
