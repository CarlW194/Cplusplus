#include <iostream>
using namespace std;

int main(){
	int num1=5;
	int num2=3;
	cout<<"num1: " << num1 << endl;
	cout<< "num2: " << num2 << endl;
	swap(num1,num2);
	cout << "Swapped num1: " << num1 << endl;
	cout << "Swapped num2: " << num2 << endl;
	return 0;
}

void swap(int num1, int num2){
	int temp=num1;
	num1=num2;
	num2=temp;
}
