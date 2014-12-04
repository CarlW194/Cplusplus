#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"
using namespace std;

int main(){
    int numDie1=0,numDie2=0,total=0, num1=0,num2=0,total1=0,total2=0, rollTime=0;
    //creates die object
    die mydie;

    //Initializes random
    srand(time(NULL));

    cout << "Enter number of sides on the first dice" << endl;
    cin >> numDie1;

    cout << "Enter number of sides on the second dice" << endl;
    cin >> numDie2;

    num1=mydie.dieNum(numDie1);
    num2=mydie.dieNum(numDie2);

    cout << "Number of times u wan to roll" << endl;
    cin >> rollTime;

    //creates array of length numsides when the user enters size
    int array[num1+num2];
    for(int i=0;i<num1+num2;++i){
        array[i]=0;
    }

    for(int i=0;i<rollTime;++i){
        total1=mydie.roll();
        total2=mydie.roll();
        total=total1+total2;
        array[total-2]++;
    }
    for(int i=0;i<mydie.getNumsides();i++){
        cout << i+2 << " occurred " << array[i] << "times" << endl;
    }
    return 0;
}

