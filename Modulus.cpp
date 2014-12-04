#include <iostream>
using namespace std;

int main(){
	int x=0;
	cout << "Enter a five digit number" << endl;
	cin >> x;
	int d1=x,d2=0;
	
	cout << (x/10000) << "   " << (x%10000/1000) << "   " << (x%1000/100) << "   "<< (x%100/10) << "   "<< (x%10);
}
