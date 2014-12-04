#include <iostream>
using namespace std;

int gcd(int num1,int num2){
	int gcd=0;
	if(num1>num2){
		for(int i=num1;i<=num1;i--){
			if(num1%i==0 && num2%i==0){
				gcd=i;
				return gcd;		
			}		
		}	
	}	
	if(num2>num1){
		for(int i=num2;i<=num2;i--){
			if(num2%i==0 && num1%i==0){
				gcd=i;
				return gcd;		
			}		
		}		
	}	
}
int main(){
	int num1=0;
	int num2=0;
	cout << "num1: "; 
	cin>>num1;
	cout << "num2: "; 
	cin>>num2;
	int GCD = gcd(num1,num2);
	cout << "greatest common denominator: " << GCD << endl;
	return 0;
}
