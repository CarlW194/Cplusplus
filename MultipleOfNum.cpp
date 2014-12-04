#include <iostream>
using namespace std;

int main(){
	int x=0,y=0;
	cout << "Enter a number" << endl;
	cin >> x;
	cout << "Enter a number" << endl;
	cin >> y;
	
	if(y%x==0)
		cout<< x << " is a multiple of " << y << endl;
	else
		cout << "not a multiple" << endl;
}
