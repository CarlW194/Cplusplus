#include <iostream>
using namespace std;

int main(){
	int len;
	cout << "Input length of the array " << endl;
	cin >> len;
	double *elem = new double[len];
	for(int i=0;i<len;i++){
		cout << "Enter number at position " << i << endl;
		cin >> elem[i];
	}
	for(int i=len-1;i>=0;i--){
		cout << "At position " << i << " The array equals " << elem[i] << endl; 	
	}
	delete[] elem;
	return 0;
}
