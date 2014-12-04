#include <iostream>
using namespace std;

int main(){
int AccNum=0,Bal=0,Acreds=0,Creds=0,newBal=0,Items=0;
while(true){
cout << "Enter your account Number" << endl;
cin >> AccNum;
if(AccNum == -1){
break;
}
cout << "Enter your Balance at the start of every month" << endl;
cin >> Bal;
cout << "Enter your total of all items charged to customer this month" << endl;
cin >> Items;
cout << "Enter your total of all credits applied by customer this month" << endl;
cin >> Creds;
cout << "Enter your allowed credit" << endl;
cin >> Acreds;
newBal = Bal + Items - Creds;
if(Acreds < Bal){
cout << "Account Number:" << AccNum << "Credit Limit" << Acreds << "NewBalance:" << newBal << "Credit limit exceeded" << endl;
}
else{
cout << "The new Balance is " << newBal << endl;
}
}
}
