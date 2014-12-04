#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomNum(int num){
	int randGen=rand() % 6 + 1;
	return randGen;
}

int sum(int num1,int num2){
	int sum=num1+num2;
	return sum;
}

int main(){
	int num1=0,num2=0,number=0,total=0;
	srand(time(NULL));
	cout << "Enter the number of times you wanna roll the dice" << endl;
	cin >> number;
	int array[11] = {0,0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<number;++i){
		total=sum(randomNum(num1),randomNum(num2));
		array[total-2]++;
	}
	for(int i=0;i<11;i++){
		cout << i+2 << " occurred " << array[i] << "times" << endl;	
	}
	return 0;
}


