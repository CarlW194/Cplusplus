#include <iostream>
#include <string>
using namespace std;


void print_customer(customer &head){
	customer *cur= &head;
	while(cur!=NULL){
		cout << cur->name << endl;
		cur = cur->next;
	}
}
