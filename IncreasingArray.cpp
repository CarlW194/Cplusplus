#include <iostream>
#include <cstring>
using namespace std;
const int SIZE=5;
int main(){
		
    int len; 
    int current=0;
    cout << "Enter sequence size: " << endl;
	cin >> len;
     double *elem = new double[len];

	int count=0,num=0;;
    while(current!=-1){
		cout << "Enter current " << endl;
		cin >> current;
		cout << "Position: " << endl;
		cin >> num;
		elem[count]=num;
		count++;
		if(count>=len){
			double *temptr=new double[len+SIZE];
			memcpy(elem,temptr,len);
			len+=SIZE;
			double *elem = new double[len];
			memcpy(temptr,elem,len);
		}
		
    }
    delete[] elem;
    return 0;
}
