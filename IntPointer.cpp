#include <iostream>
using namespace std;

int main(){
	int j;
	int intarray[5]={31,54,77,52,93};
	for(j=0;j<5;j++){
		cout << endl << intarray[j];
	}
	for(j=0;j<5;j++){
		cout << endl << *(intarray+j);
	}
	return 0;
}
