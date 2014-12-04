#include <iostream>
#include <string>
using namespace std;


void print_customer(customer *head){
	customer *cur= head;
	int count=0;
	while(cur!=NULL){
		cout << cur->name << endl;
		cur = cur->next;
	}
}

int list_length(customer* head){
	customer *cur= head;
	int count=0;
	while(cur!=NULL){
		count++;
		cur = cur->next;
	}
	return count;
}

void insert_name(customer* head, string name){
		head->name=name;
		head->next=c;
		c=head;	
		
}

customer *create_list(string name){
	    customer *root;
		root=new customer;
		insert_name(root,name);
		cout << list_length(root) << endl;
		print_customer(root);
}
