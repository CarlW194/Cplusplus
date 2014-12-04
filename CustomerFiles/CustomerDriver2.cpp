#include <iostream>
#include <string>
#include "Customer6.h"
using namespace std;

int main(){
	string newName;
	while(newName!="end"){
		
		cout << "Enter name of customer " << endl;
		cin>>newName;
		*create_list(newName);
	}
	return 0;
}
