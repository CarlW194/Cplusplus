#include <iostream>
using namespace std;

int main(){
	int x=0,y=0,z=0;
	cout << "Enter a number " << endl;
	cin >> x;
	cout << "Enter a number " << endl;
	cin >> y;	
	cout << "Enter a number " << endl;
	cin >> z;

	cout << "The sum of numbers " << x+y+z << endl;
	cout << "The average of numbers " << (double(x)+double(y)+double(z))/x+y+x <<endl;
	cout << "The product of the numbers is " << x*y*z << endl;

	if(x<y && x<z)
		cout << "The smallest number is " << x << endl;
	else if(y<x && y<z)
		cout << "The smallest number is " << y << endl;
	else if(z<x && z<y)
		cout << "The smallest number is " << z << endl;

	if(x>y && x>z)
		cout << "The largest number is " << x << endl;
	else if(y>x && y>z)
		cout << "The largest number is " << y << endl;
	else if(z>x && z>y)
		cout << "The largest number is " << z << endl;
}
