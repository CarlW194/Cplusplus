#include <iostream>
#include <cstring>
using namespace std;

struct People{
	string name;
	int age;
};

void print_Array(People *people, int size){
	for(int i=0;i<size;i++){
		cout << people[i].name << " is " << people[i].age << endl;
	}
}
	
int main(){
	int num=0;
	cout << "Enter the number of people: " << endl;
	cin >> num;
	People *people=new People[num];
	int i;
	for(i=0;i<num;i++){
		cout << "Enter Name of Person" << endl;
	    cin >> people[i].name;
		cout << "Enter age of Person " <<endl;
		cin >> people[i].age;
	}
	print_Array(people,i);
	return 0;
}
